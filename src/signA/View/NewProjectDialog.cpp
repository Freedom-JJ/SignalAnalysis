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
}

void NewProjectDialog::initData()
{
    channelParams["samplefrequency"].push_back(new Dictionary());
    channelParams["collectionmethod"].push_back(new Dictionary());
    dictionCon.findDictionariesByDictName("samplefrequency",channelParams["samplefrequency"]);
    dictionCon.findDictionariesByDictName("collectionmethod",channelParams["collectionmethod"]);
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
    lables<<"满度量程"<<"上限频率"<<"输入方式"<<"测量范围"<<"测量类型"<<"采样频率";
    ui->tableWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    ui->tableWidget->setRowCount(number);
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels(lables);
    for (int i = 0; i < number; ++i) {
        QComboBox *comBox0 = new QComboBox(this);
        QComboBox *comBox1 = new QComboBox(this);
        QComboBox *comBox2 = new QComboBox(this);
        QComboBox *comBox3 = new QComboBox(this);
        QComboBox *comBox4 = new QComboBox(this);
        QComboBox *comBox5 = new QComboBox(this);
        comBox0->addItem("10000");
        comBox0->addItem("5000");
        comBox0->addItem("2000");
        comBox0->addItem("1000");

        comBox1->addItem("PASS");
        comBox1->addItem("30HZ");
        comBox1->addItem("300HZ");
        comBox1->addItem("3KZH");

        comBox2->addItem("DIF_DC");
        comBox2->addItem("SIN_DC");
        comBox2->addItem("AC");
        comBox2->addItem("SIN_IEPE");
        comBox2->addItem("DIF_IEPE");
        comBox2->addItem("GND");

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

        comBox5->addItem("20000");
        comBox5->addItem("10000");
        comBox5->addItem("5000");
        comBox5->addItem("2000");
        comBox5->addItem("1000");

        ui->tableWidget->setCellWidget(i,0,comBox0);
        ui->tableWidget->setCellWidget(i,1,comBox1);
        ui->tableWidget->setCellWidget(i,2,comBox2);
        ui->tableWidget->setCellWidget(i,3,comBox3);
        ui->tableWidget->setCellWidget(i,4,comBox4);
        ui->tableWidget->setCellWidget(i,5,comBox5);
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
//表格设置完成点击
void NewProjectDialog::on_okbtn_clicked()
{
    auto table = ui->tableWidget;
    const int row = table->rowCount();
    const int column = table->columnCount();
    Project *project = new Project();
    project->setProjectName(ui->lineEdit->text().toStdString());
    //可能会出现转换错误
    int sampleFrequency = ui->lineEdit_2->text().toInt();
    if(sampleFrequency <= 0){
        QMessageBox::warning(this,"错误","频率填写错误，应该为正整数");
        return;
    }
    project->setProjectStatus(sampleFrequency);
    project->setUserId(mv->theApp->user.getId());
    mv->theApp->sampleFrequency = sampleFrequency;
    Result res =  projectCon.addProject(project,projectId);
    if (res.getCode() == 200){
       QMessageBox::information(this,"提示","添加成功");
        this->accept();
    }
}
