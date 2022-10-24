#include "GetDataThread.h"
#include<thread>

#define M_PI       3.14159265358979323846   // pi

void GetDataThread::run(){

    qDebug() << "取数线程开启了---------------------------------------------------------------------------------" <<endl;
    float r = 0;
    while(true){

        for(int i=0;i<data_thread->theApp->m_vchannelCodes.size();i++){

            double * fftwInputArray = new double[20000];
            QString channelCode = "0-" + QString::number(i);

            for (int k = 0; k < 20000; k++){
                //构造频点
                double sumsignal = cos(50 * r *M_PI * 100) + cos(5 * M_PI * 100 * r) + sin(200 * M_PI * 100 * r) + sin(5 * M_PI * 10 * r);

                data_thread->theApp->m_mpcolllectioinDataQueue[channelCode].push(sumsignal);
                fftwInputArray[k] = sumsignal;
                r += 0.01;

            }
            //data_thread->theApp->staticEchoSignal->PushEchoSignal(fftwInputArray);
            data_thread->theApp->echoSignalQueue[channelCode]->PushEchoSignal(fftwInputArray);

            msleep(100);
    }

    }


}
