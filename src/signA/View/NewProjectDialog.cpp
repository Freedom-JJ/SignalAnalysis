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
    lables<<"通道号"<<"通道描述"<<"上限频率"<<"输入方式"<<"满度量程"<<"测量类型"<<"测量范围";
    ui->tableWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    ui->tableWidget->setRowCount(number);
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setHorizontalHeaderLabels(lables);
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < ui->tableWidget->columnCount(); ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(QString::number(i));
            QComboBox *comBox = new QComboBox(this);
            comBox->addItem(QString::number(i+j));
            ui->tableWidget->setCellWidget(i,j,comBox);
        }
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
//表格设置完成点击
void NewProjectDialog::on_okbtn_clicked()
{
    auto table = ui->tableWidget;
    const int row = table->rowCount();
    const int column = table->columnCount();
    for(int i = 0 ; i<row ; i ++){
        for(int j = 0 ; j < column ; j ++){            
            QComboBox * item = (QComboBox *)table->cellWidget(i,j);
            qDebug()<<item->currentText()<<endl;
        }
    }
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
