#include "GetDataThread.h"
#include<thread>


void GetDataThread::run(){

//    qDebug() << "取数线程开启了---------------------------------------------------------------------------------" <<endl;
    float r = 0;
    while(true){

        for(int i=0;i<4;i++){

            double * fftwInputArray = new double[20000];
            QString channelCode = "0-" + QString::number(i);

            for (int k = 0; k < 20000; k++){
                //构造频点
                float s1 = cos(50 * r *M_PI * 100);
                float s2 = cos(5 * M_PI * 100 * r);
                float s3 = sin(200 * M_PI * 100 * r);
                float s4 = sin(5 * M_PI * 10 * r);
                float sumsignal = s1 + s2 + s3 + s4;

                //data_thread->m_mpcolllectioinDataQueue[channelCode].push(sumsignal);//pfltData
                fftwInputArray[k] = sumsignal;
                r += 0.01;

            }
            //staticEchoSignal.PushEchoSignal(fftwInputArray);
            data_thread->theApp.staticEchoSignal.PushEchoSignal(fftwInputArray);
        }
    }


}
