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

    int nGpId = 0;
    int nUseBuffer = 0;
    this->hardWare->mainHardWareController->m_pGetMacInfoFromIndex(0, &nGpId, this->hardWare->mainHardWareController->pMacInfo, 256,&nUseBuffer);
    this->hardWare->mainHardWareController->pMacInfo[nUseBuffer] = '\0';


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

    //设置采样频率和单次获取数据量
    float sampleFrequency = 20000;
    bool ifSetSampleFre = this->hardWare->mainHardWareController->m_pSetMacSampleFreq(sampleFrequency);
    bool ifSetGetDataCountEveryTime = this->hardWare->mainHardWareController->m_pSetGetDataCountEveryTime(15624);
    if(ifSetSampleFre&&ifSetGetDataCountEveryTime){
        ui->HWTextEdit->appendPlainText(QString("采样参数设置成功！"));
    }

    //设置通道参数
    for(int i=0;i<this->hardWare->theApp->channelNumber;i++){

        //修改上限频率
        char*upTem=(char*)(this->hardWare->mainHardWareController->upFrequency).data();
        bool ifUpSucess = this->hardWare->mainHardWareController->m_pModifyMacChnParam(0,this->hardWare->mainHardWareController->pMacInfo,i,10,upTem);

        //修改满度量程
        char*fullTem=(char*)(this->hardWare->mainHardWareController->fullValue).data();
        bool ifFullSucess = this->hardWare->mainHardWareController->m_pModifyMacChnParam(0,this->hardWare->mainHardWareController->pMacInfo,i,5,fullTem);

        //修改输入方式
        char*inputTem=(char*)(this->hardWare->mainHardWareController->inputMode).data();
        bool ifInputSucess = this->hardWare->mainHardWareController->m_pModifyMacChnParam(0,this->hardWare->mainHardWareController->pMacInfo,i,12,inputTem);

        //修改电压测量范围
        char*elcTem=(char*)(this->hardWare->mainHardWareController->elcPressure).data();
        bool ifElcSucess = this->hardWare->mainHardWareController->m_pModifyMacChnParam(0,this->hardWare->mainHardWareController->pMacInfo,i,90,elcTem);

        //修改测量方式
        char*measureTem=(char*)(this->hardWare->mainHardWareController->measureType).data();
        bool ifMeasureSucess = this->hardWare->mainHardWareController->m_pModifyMacChnParam(0,this->hardWare->mainHardWareController->pMacInfo,i,4,measureTem);

        if(ifUpSucess&&ifFullSucess&&ifInputSucess&&ifElcSucess&&ifMeasureSucess){
            qDebug()<<"参数修改成功！"<<endl;
        }

    }

    //获取当前通道参数
    ui->HWTextEdit->appendPlainText("通道参数设置为:");
    int nUseBuffer = 0;

    //获取上限频率
    char Upchar[1000];
    this->hardWare->mainHardWareController->m_pGetMacChnCurrentParam(0,0,this->hardWare->mainHardWareController->pMacInfo,10,Upchar,1000,&nUseBuffer);
    Upchar[nUseBuffer] = '\0';
    std::string upstring = Upchar;
    ui->HWTextEdit->appendPlainText("上限频率："+ QString::fromStdString(upstring));

    //获取满度量程
    char Fullchar[1000];
    this->hardWare->mainHardWareController->m_pGetMacChnCurrentParam(0,0,this->hardWare->mainHardWareController->pMacInfo,5,Fullchar,1000,&nUseBuffer);
    Fullchar[nUseBuffer] = '\0';
    std::string fullstring = Fullchar;
    ui->HWTextEdit->appendPlainText("满度量程："+ QString::fromStdString(fullstring));

    //获取输入方式
    char Inputchar[1000];
    this->hardWare->mainHardWareController->m_pGetMacChnCurrentParam(0,0,this->hardWare->mainHardWareController->pMacInfo,12,Inputchar,1000,&nUseBuffer);
    Inputchar[nUseBuffer] = '\0';
    std::string inputstring = Inputchar;
    ui->HWTextEdit->appendPlainText("输入方式："+ QString::fromStdString(inputstring));

    //获取电压测量范围
    char Elcchar[1000];
    this->hardWare->mainHardWareController->m_pGetMacChnCurrentParam(0,0,this->hardWare->mainHardWareController->pMacInfo,90,Elcchar,1000,&nUseBuffer);
    Elcchar[nUseBuffer] = '\0';
    std::string elcstring = Elcchar;
    ui->HWTextEdit->appendPlainText("电压测量范围："+ QString::fromStdString(elcstring));

    //获取测量方式
    char Measurechar[1000];
    this->hardWare->mainHardWareController->m_pGetMacChnCurrentParam(0,0,this->hardWare->mainHardWareController->pMacInfo,4,Measurechar,1000,&nUseBuffer);
    Measurechar[nUseBuffer] = '\0';
    std::string measurestring = Measurechar;
//    ui->HWTextEdit->appendPlainText("测量类型："+ QString::fromStdString(measurestring));


}
