#include "hardwarecontroller.h"

HardWareController::HardWareController()
{

}

bool HardWareController::InitHardWare(){

    //初始化仪器
    m_pInitMacControlEx((QCoreApplication::applicationDirPath() + "/config/").toStdString().data());

    //检测仪器是否在线
    int nGpId = 0;
    int nUseBuffer = 0;
    bool b_hardwareConnect = m_pGetMacInfoFromIndex(0, &nGpId, this->pMacInfo, 256,&nUseBuffer);
    pMacInfo[nUseBuffer] = '\0';

    return  b_hardwareConnect;

}

void HardWareController::initSamplingPara(float frequency){

    //设置采样频率和单次获取数据量
    bool ifSetSampleFre = m_pSetMacSampleFreq(frequency);
    bool ifSetGetDataCountEveryTime = m_pSetGetDataCountEveryTime(15624);
    if(ifSetSampleFre&&ifSetGetDataCountEveryTime){
            qDebug()<<"采样参数设置成功！";
        }
}

void HardWareController::initChannelPara(){
    //设置通道参数



    for(int i=0;i<4;i++){

        //修改上限频率
        char*upTem=(char*)(upFrequency).data();
        bool ifUpSucess = m_pModifyMacChnParam(0,pMacInfo,i,10,upTem);

        //修改满度量程
        char*fullTem=(char*)(fullValue).data();
        bool ifFullSucess = m_pModifyMacChnParam(0,pMacInfo,i,5,fullTem);

        //修改输入方式
        char*inputTem=(char*)(inputMode).data();
        bool ifInputSucess = m_pModifyMacChnParam(0,pMacInfo,i,12,inputTem);

        //修改电压测量范围
        char*elcTem=(char*)(elcPressure).data();
        bool ifElcSucess = m_pModifyMacChnParam(0,pMacInfo,i,90,elcTem);

        //修改测量方式
        char*measureTem=(char*)(measureType).data();
        bool ifMeasureSucess = m_pModifyMacChnParam(0,pMacInfo,i,4,measureTem);

        if(ifUpSucess&&ifFullSucess&&ifInputSucess&&ifElcSucess&&ifMeasureSucess){
            qDebug()<<"参数修改成功！"<<endl;
        }

    }
}

void HardWareController::SetChannels(std::vector<Channel *> channels){
    this->m_channels = channels;

}

bool HardWareController::InitLibrary(){

    QLibrary *m_library = new QLibrary();
    QString strPath = "./Hardware_Standard_C_Interface.dll";
    m_library->setFileName(strPath);
    bool bLoaded = m_library->load();
    if (!bLoaded)
    {
        QString strError = m_library->errorString();
        qDebug() << "[InitLibrary]load library Hardware_Standard_C_Interface.dll fail" << strError << endl;
        return false;
    }
    qDebug() << "load library Hardware_Standard_C_Interface.dll success"  << endl;
    m_pInitMacControlEx = (InitMacControl)m_library->resolve("InitMacControl");
    if(m_pInitMacControlEx == NULL)
    {
        qDebug() << "load m_pInitMacControl error"  << endl;
        return false;
    }
    m_pQuitMacControl = (QuitMacControl)m_library->resolve("QuitMacControl");
    if(m_pQuitMacControl == NULL)
    {
        qDebug() << "load m_pQuitMacControl error"  << endl;
        return false;
    }
    m_pRefindAndConnecMac = (RefindAndConnecMac)m_library->resolve("RefindAndConnecMac");
    if(m_pRefindAndConnecMac == NULL)
    {
        qDebug() << "load m_pRefindAndConnecMac error"  << endl;
        return false;
    }
    m_pStartMacSample = (StartMacSample)m_library->resolve("StartMacSample");
    if(m_pStartMacSample == NULL)
    {
        qDebug() << "load m_pStartMacSample error"  << endl;
        return false;
    }
    m_pStopMacSample = (StopMacSample)m_library->resolve("StopMacSample");
    if(m_pStopMacSample == NULL)
    {
        qDebug() << "load m_pStopMacSample error"  << endl;
        return false;
    }
    m_pGetOneMacChnDataEx = (GetOneMacChnDataEx)m_library->resolve("GetOneMacChnDataEx");
    if(m_pGetOneMacChnDataEx == NULL)
    {
        qDebug() << "load m_pGetOneMacChnDataEx error"  << endl;
        return false;
    }
    m_pIsSampling = (IsSampling)m_library->resolve("IsSampling");
    if(m_pIsSampling == NULL)
    {
        qDebug() << "load m_pIsSampling error"  << endl;
        return false;
    }
    m_pGetOneMacDataIndex = (GetOneMacDataIndex)m_library->resolve("GetOneMacDataIndex");
    if(m_pGetOneMacDataIndex == NULL)
    {
        qDebug() << "load m_pGetOneMacDataIndex error"  << endl;
        return false;
    }
    m_pSetMacSampleFreq = (SetMacSampleFreq)m_library->resolve("SetMacSampleFreq");
    if(m_pSetMacSampleFreq == NULL)
    {
        qDebug() << "load m_pSetMacSampleFreq error"  << endl;
        return false;
    }
    m_pSetGetDataCountEveryTime = (SetGetDataCountEveryTime)m_library->resolve("SetGetDataCountEveryTime");
    if(m_pSetGetDataCountEveryTime == NULL)
    {
        qDebug() << "load m_pSetGetDataCountEveryTime error"  << endl;
        return false;
    }
    m_pGetWaitDealMacInfo = (GetWaitDealMacInfo)m_library->resolve(("GetWaitDealMacInfo"));
    if(m_pGetWaitDealMacInfo == NULL)
    {
        qDebug() << "load m_pGetWaitDealMacInfo  error"  << endl;
        return false;
    }
    m_pModifyMacChnParam = (ModifyMacChnParam)m_library->resolve("ModifyMacChnParam");
    if(m_pModifyMacChnParam == NULL)
    {
        qDebug() << "load m_pModifyMacChnParam  error"  << endl;
        return false;
    }
    m_pGetMacChnParamListValue = (GetMacChnParamListValue)m_library->resolve("GetMacChnParamListValue");
    if(m_pGetMacChnParamListValue == NULL)
    {
        qDebug() << "load m_pGetMacChnParamListValue  error"  << endl;
        return false;
    }
    m_pGetMacInfoFromIndex = (GetMacInfoFromIndex)m_library->resolve("GetMacInfoFromIndex");
    if(m_pGetMacInfoFromIndex == NULL)
    {
        qDebug() << "load m_pGetMacInfoFromIndex  error"  << endl;
        return false;
    }
    m_pGetMacChnCurrentParam = (GetMacChnCurrentParam)m_library->resolve("GetMacChnCurrentParam");
    if(m_pGetMacChnCurrentParam == NULL)
    {
        qDebug() << "load m_pGetMacChnCurrentParam  error"  << endl;
        return false;
    }

    qDebug() << "load library function success"  << endl;
    return true;

}
