#include "projectsetting.h"
#include "ui_projectsetting.h"

ProjectSetting::ProjectSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectSetting)
{
    ui->setupUi(this);
    initAllProject();
}

ProjectSetting::~ProjectSetting()
{
    delete ui;
}

void ProjectSetting::initAllProject()
{
     qDebug()<<"初始化"<<endl;

    qDebug()<<"clear contents"<<endl;
    projectVec.clear();
     qDebug()<<"clear project"<<endl;
    projectCon.getAllProjects(projectVec);
    qDebug()<<"size:"<<projectVec.size();
    ui->comboBox->clear();
    //替代clear
//    for (int var =ui->comboBox->count() -1; var >=0 ;var--) {
//        ui->comboBox->removeItem(var);
//    }
    for (int var = 0; var < projectVec.size(); ++var) {
        if(projectVec[var] == nullptr){
            qDebug()<<"空指针"<<endl;
        }
        ui->comboBox->addItem(QString::fromStdString(projectVec[var]->getProjectName()));
    }
}

void ProjectSetting::on_comboBox_currentIndexChanged(int index)
{
    //再一次血泪
    if(index < 0){
        qDebug()<<index<<endl;
        return;
    }
    long long projectId = projectVec[index]->getId();
    channelCon.getChannelsByProjectId(channelVec,projectId);

    QStringList lables;
    lables<<"满度量程"<<"上限频率"<<"输入方式"<<"测量范围"<<"测量类型";
    ui->tableWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    ui->tableWidget->setRowCount(channelVec.size());
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(lables);
    for (int i = 0; i < channelVec.size(); ++i) {
        QComboBox *comBox0 = new QComboBox(this);
        QComboBox *comBox1 = new QComboBox(this);
        QComboBox *comBox2 = new QComboBox(this);
        QComboBox *comBox3 = new QComboBox(this);
        QComboBox *comBox4 = new QComboBox(this);

        comBox0->addItem("10000");
        comBox0->addItem("5000");
        comBox0->addItem("2000");
        comBox0->addItem("1000");
        comBox0->setCurrentText(QString::number(channelVec[i]->getFullValue()));

        comBox1->addItem("PASS");
        comBox1->addItem("30HZ");
        comBox1->addItem("300HZ");
        comBox1->addItem("3KZH");
        comBox1->setCurrentText(QString::number(channelVec[i]->getUpFreq()));

        comBox2->addItem("差分直流输入");               //DIF_DC
        comBox2->addItem("单端直流输入");               //SIN_DC
        comBox2->addItem("交流输入");                  //AC
        comBox2->addItem("单端压电集成");               //SIN_IEPE
        comBox2->addItem("差分压电集成");               //DIF_IEPE
        comBox2->setCurrentText(QString::fromStdString(channelVec[i]->getInputMode()));
//        comBox2->addItem("GND");

        comBox3->addItem("10000");
        comBox3->addItem("5000");
        comBox3->addItem("2000");
        comBox3->addItem("1000");
        comBox3->addItem("500");
        comBox3->addItem("100");
        comBox3->setCurrentText(QString::number(channelVec[i]->getElcPressure()));

        comBox4->addItem("电压测量");
        comBox4->addItem("应变应力");
        comBox4->addItem("桥式传感器");
        comBox4->addItem("热电偶测温");
        comBox4->setCurrentText(QString::fromStdString(channelVec[i]->getMeasureType()));
        ui->tableWidget->setCellWidget(i,0,comBox0);
        ui->tableWidget->setCellWidget(i,1,comBox1);
        ui->tableWidget->setCellWidget(i,2,comBox2);
        ui->tableWidget->setCellWidget(i,3,comBox3);
        ui->tableWidget->setCellWidget(i,4,comBox4);

    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void ProjectSetting::on_updateBtn_clicked()
{
    Result res;
    auto table = ui->tableWidget;
    for(int i = 0 ; i< table->rowCount();i++){
        Channel *t = channelVec[i];
        t->setChannelCode(QString::number(i).toStdString());
        t->setFullValue(((QComboBox*)table->cellWidget(i,0))->currentText().toInt());
        t->setUpFreq(((QComboBox*)table->cellWidget(i,1))->currentText().toInt());
        t->setInputMode(((QComboBox*)table->cellWidget(i,2))->currentText().toStdString());
        t->setElcPressure(((QComboBox*)table->cellWidget(i,3))->currentText().toInt());
        t->setMeasureType(((QComboBox*)table->cellWidget(i,4))->currentText().toStdString());
        long long channelId = 0;
        res = channelCon.updateChannel(t);

        qDebug()<<QString::fromStdString(res.getMsg());
    }

    QMessageBox::information(this,"提示",QString::fromStdString(res.getMsg()));

    initAllProject();
}

void ProjectSetting::on_deleteBtn_clicked()
{
    int index = ui->comboBox->currentIndex();
    auto res = projectCon.deleteProject(projectVec[index]);
    QMessageBox::information(this,"警告",QString::fromStdString(res.getMsg()));
    initAllProject();
}
