/*******************************
*   File:       NewProjectDialog.cpp
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-08
*   eMail:      1714203542@qq.com
*   brief:      新建项目以及设置对应通道参数窗口
********************************/
#include "NewProjectDialog.h"
#include "ui_NewProjectDialog.h"

NewProjectDialog::NewProjectDialog(MainWindow *mv,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProjectDialog)
{
    this->mv = mv;
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
    initData();
    initFrequencyCombox();
}

void NewProjectDialog::initData()
{
    productVec = productDao.seleAllByName("");
    for (int var = 0; var < productVec.size(); ++var) {
        ui->projuctComboBox->addItem(productVec[var].getProduct_name());
    }


//    channelParams["samplefrequency"].push_back(new Dictionary());
//    channelParams["collectionmethod"].push_back(new Dictionary());
//    dictionCon.findDictionariesByDictName("samplefrequency",channelParams["samplefrequency"]);
//    dictionCon.findDictionariesByDictName("collectionmethod",channelParams["collectionmethod"]);

}

NewProjectDialog::~NewProjectDialog()
{
    delete ui;
}
/**
 * @brief NewProjectDialog::on_lineEdit_3_editingFinished,输入完成
 */
void NewProjectDialog::on_lineEdit_3_editingFinished()
{
    qDebug()<<ui->lineEdit_3->text()<<endl;
}



//上一页
void NewProjectDialog::on_previousbtn_clicked()
{
    ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex() - 1);
}
//下一页
void NewProjectDialog::on_nextbtn_clicked()
{
      ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex() + 1);
}
//通道数的加载
void NewProjectDialog::on_lineEdit_3_textChanged(const QString &arg1)
{
    qDebug()<<arg1<<endl<<ui->lineEdit_3->text();
    QString text = ui->lineEdit_3->text();
    int number = text.toInt();
    if(number == 0){
        QMessageBox::warning(this,"输入错误","请输入＞0的整数");
        return;
    }
    QStringList lables;
    lables<<"满度量程"<<"上限频率"<<"输入方式"<<"测量范围"<<"测量类型";
    ui->tableWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    ui->tableWidget->setRowCount(number);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(lables);
    for (int i = 0; i < number; ++i) {
        QComboBox *comBox0 = new QComboBox(this);
        QComboBox *comBox1 = new QComboBox(this);
        QComboBox *comBox2 = new QComboBox(this);
        QComboBox *comBox3 = new QComboBox(this);
        QComboBox *comBox4 = new QComboBox(this);

        comBox0->addItem("10000");
        comBox0->addItem("5000");
        comBox0->addItem("2000");
        comBox0->addItem("1000");

        comBox1->addItem("PASS");
        comBox1->addItem("30HZ");
        comBox1->addItem("300HZ");
        comBox1->addItem("3KZH");

        comBox2->addItem("差分直流输入");               //DIF_DC
        comBox2->addItem("单端直流输入");               //SIN_DC
        comBox2->addItem("交流输入");                  //AC
        comBox2->addItem("单端压电集成");               //SIN_IEPE
        comBox2->addItem("差分压电集成");               //DIF_IEPE
//        comBox2->addItem("GND");

        comBox3->addItem("10000");
        comBox3->addItem("5000");
        comBox3->addItem("2000");
        comBox3->addItem("1000");
        comBox3->addItem("500");
        comBox3->addItem("100");

        comBox4->addItem("电压测量");
        comBox4->addItem("应变应力");
        comBox4->addItem("桥式传感器");
        comBox4->addItem("热电偶测温");

        ui->tableWidget->setCellWidget(i,0,comBox0);
        ui->tableWidget->setCellWidget(i,1,comBox1);
        ui->tableWidget->setCellWidget(i,2,comBox2);
        ui->tableWidget->setCellWidget(i,3,comBox3);
        ui->tableWidget->setCellWidget(i,4,comBox4);

    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
//表格设置完成点击
void NewProjectDialog::on_okbtn_clicked()
{
    auto table = ui->tableWidget;
    Project *project = new Project();
    project->setProjectName(ui->lineEdit->text().toStdString());

    project->setProjectStatus(sampleFrequency);
    project->setUserId(mv->theApp->user.getId());
    Result res =  projectCon.addProject(project,projectId);
    //添加产品id
    productDao.insertProductWithProject(projectId,productVec[comboxIndex].getProduct_id());

    for(int i = 0 ; i< table->rowCount();i++){
        Channel t;
        t.setChannelCode(QString::number(i).toStdString());
        t.setFullValue(((QComboBox*)table->cellWidget(i,0))->currentText().toInt());
        t.setUpFreq(((QComboBox*)table->cellWidget(i,1))->currentText().toInt());
        t.setInputMode(((QComboBox*)table->cellWidget(i,2))->currentText().toStdString());
        t.setElcPressure(((QComboBox*)table->cellWidget(i,3))->currentText().toInt());
        t.setMeasureType(((QComboBox*)table->cellWidget(i,4))->currentText().toStdString());
        t.setProjectId(projectId);
        long long channelId = 0;
        Result res = channelCon.addChannel(&t,channelId);
        qDebug()<<QString::fromStdString(res.getMsg());
    }

    if (res.getCode() == 200){
       QMessageBox::information(this,"提示","添加成功");
        this->accept();
    }

}

void NewProjectDialog::on_projuctComboBox_currentIndexChanged(const QString &arg1)
{

    this->m_productName = arg1;
    comboxIndex = ui->projuctComboBox->currentIndex();

}


void NewProjectDialog::SelectProduct(){
    QSqlQuery query;
    query.exec("SELECT product_id,product_name FROM product");

    while (query.next()) {
            int product_id = query.value(0).toInt();
            QString product_name = query.value(1).toString();
            productMap.insert(std::make_pair(product_id,product_name));
    }
}

void NewProjectDialog::initFrequencyCombox(){

    frequencyVector.push_back("10");
    frequencyVector.push_back("20");
    frequencyVector.push_back("50");
    frequencyVector.push_back("100");
    frequencyVector.push_back("200");
    frequencyVector.push_back("500");
    frequencyVector.push_back("1000");
    frequencyVector.push_back("2000");
    frequencyVector.push_back("5000");
    frequencyVector.push_back("10000");
    frequencyVector.push_back("20000");
    frequencyVector.push_back("50000");
    frequencyVector.push_back("100000");
    frequencyVector.push_back("200000");

    for(int i=0;i<frequencyVector.size();i++){
        ui->frequencyComboBox->addItem(frequencyVector[i]);
    }

}

void NewProjectDialog::on_frequencyComboBox_currentIndexChanged(const QString &arg1)
{
    sampleFrequency = arg1.toInt();
}
