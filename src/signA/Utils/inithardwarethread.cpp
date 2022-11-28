#include "inithardwarethread.h"

void InitHardWareThread::run(){

    initHardWare->mainHardWareController = new HardWareController();
    initHardWare->mainHardWareController->InitLibrary(); //初始化接口函数

    bool m_bConnect = initHardWare->mainHardWareController->InitHardWare();

    initHardWare->mainHardWareController->initSamplingPara();

    initHardWare->mainHardWareController->initChannelPara();

    emit hardwareInited(m_bConnect);

    qDebug()<<"硬件初始化线程结束了"<<endl;

}
