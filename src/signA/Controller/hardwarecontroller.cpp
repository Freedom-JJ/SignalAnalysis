#include "hardwarecontroller.h"

HardWareController::HardWareController()
{

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
