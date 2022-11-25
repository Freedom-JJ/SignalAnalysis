#include "hardwarewindow.h"
#include "ui_hardwarewindow.h"

HardwareWindow::HardwareWindow(MainWindow *hardWare,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HardwareWindow)
{
    ui->setupUi(this);
    this->hardWare = hardWare;

    if(hardWare->theApp->hardwareState == hardWare->theApp->HardWareState::HW_CONNECTED){
           ui->HWCheckBox->setCheckState(Qt::Checked);
           ui->HWTextEdit->appendPlainText(QString("当前模式：在线"));

    }else if(hardWare->theApp->hardwareState == hardWare->theApp->HardWareState::HW_NOTCONNECTED){
           ui->HWCheckBox->setCheckState(Qt::Unchecked);
           ui->HWTextEdit->appendPlainText(QString("当前模式：脱机"));
    }
}

HardwareWindow::~HardwareWindow()
{
    delete ui;
}

void HardwareWindow::on_HWCheckBox_stateChanged(int state)
{
    if (state == Qt::Checked)           // "选中"
        {
            hardWare->theApp->hardwareState = hardWare->theApp->HardWareState::HW_CONNECTED;
            ui->HWTextEdit->appendPlainText(QString("当前模式：在线"));
        }
    else if(state == Qt::Unchecked)     // 未选中 - Qt::Unchecked
        {
            hardWare->theApp->hardwareState = hardWare->theApp->HardWareState::HW_NOTCONNECTED;
            ui->HWTextEdit->appendPlainText(QString("当前模式：脱机"));
        }
}

void HardwareWindow::on_initConnectButton_clicked()
{
    this->hardWare->mainHardWareController->InitLibrary();
    this->hardWare->mainHardWareController->m_pInitMacControlEx((QCoreApplication::applicationDirPath() + "/config/").toStdString().data());
    ui->HWTextEdit->appendPlainText(QString("初始化仪器成功！"));


}

void HardwareWindow::on_refindMacButton_clicked()
{
    bool bRet =this->hardWare->mainHardWareController->m_pRefindAndConnecMac();
    if(bRet){
        ui->HWTextEdit->appendPlainText(QString("刷新仪器并重新连接成功！"));
    }



}


void HardwareWindow::on_initParaButton_clicked()
{

    char pMacInfo[1024];
    int nMacBuffer = 1024 * 1024;
    int *nUseBuffer = new int();
    int isGetWaitDealMacInfo = this->hardWare->mainHardWareController->m_pGetWaitDealMacInfo(pMacInfo,nMacBuffer,nUseBuffer);
    ui->HWTextEdit->appendPlainText(QString::number(isGetWaitDealMacInfo));

    float sampleFrequency = 20000;
    bool ifSetSampleFre = this->hardWare->mainHardWareController->m_pSetMacSampleFreq(sampleFrequency);
    bool ifSetGetDataCountEveryTime = this->hardWare->mainHardWareController->m_pSetGetDataCountEveryTime(15624);
    qDebug()<<"ifSetSampleFre"<<ifSetSampleFre;
    qDebug()<<"ifSetGetDataCountEveryTime"<<ifSetGetDataCountEveryTime;


//    if(ifSetSampleFre&&ifSetGetDataCountEveryTime){
//        ui->HWTextEdit->appendPlainText(QString("采样设置成功！"));
//    }

}
