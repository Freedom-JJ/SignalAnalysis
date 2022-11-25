#include "GetDataThread.h"
#include<thread>

#define M_PI       3.14159265358979323846   // pi

void GetDataThread::run(){

    //qDebug() << "取数线程开启了---------------------------------------------------------------------------------" <<endl;

    //未连接仪器
    if(data_thread->theApp->hardwareState == data_thread->theApp->HW_NOTCONNECTED){

        float r = 0;    //用于模拟信号

        const int size = data_thread->theApp->m_vchannelCodes.size();
        while(data_thread->theApp->m_bThread){

            //暂停采集就卡在这！！！
            if(data_thread->theApp->m_icollectState == 2){
                msleep(10);
                continue;
            }
            if(r > 200000)
                r = 0;
            for(int i=0;i<size;i++){
                double * fftwInputArray = new double[20000];
                QString channelCode =  QString::number(i);

                for (int k = 0; k < 20000; k++){
                    //构造频点
                    double sumsignal = cos(50 * r *M_PI * 100) + cos(5 * M_PI * 100 * r) + sin(200 * M_PI * 100 * r) + sin(5 * M_PI * 10 * r);

                    data_thread->theApp->m_mpcolllectioinDataQueue[channelCode].push(sumsignal); //可能会影响性能
                    if(data_thread->theApp->redisState == data_thread->theApp->RedisState::REDIS_OPEND){
                        data_thread->theApp->m_mpredisCollectionDataQueue[channelCode].push(sumsignal);
                    }
                    fftwInputArray[k] = sumsignal;
                    r += 0.01;
                }
                //data_thread->theApp->staticEchoSignal->PushEchoSignal(fftwInputArray);
                data_thread->theApp->echoSignalQueue[channelCode]->PushEchoSignal(fftwInputArray);
        }
                 msleep(100);
        }

    }

    //仪器连接状态采集
    if(data_thread->theApp->hardwareState == data_thread->theApp->HW_CONNECTED){


        int nBytesLength = 1024 * 1024;
        char* pValue = new char[nBytesLength];
        long lReceiveCount = 0;
        long lChannelCount = 0;
        long long lTotalPos = 0;
        long lBufferAddr = (long)pValue;

        const int size = data_thread->theApp->m_vchannelCodes.size();
        while(data_thread->theApp->m_bThread){

            bool bResult = data_thread->mainHardWareController->m_pGetOneMacChnDataEx(0, &lReceiveCount, &lChannelCount, &lTotalPos, nBytesLength, &lBufferAddr);
            if( lReceiveCount == 0 || data_thread->theApp->m_icollectState == 2){
                msleep(10);
                continue;
            }

            for(int i=0;i<size;i++){

                long nSeekPos;
                double * fftwInputArray = new double[lReceiveCount];
                QString channelCode =  QString::number(i);
                nSeekPos = data_thread->mainHardWareController->m_pGetOneMacDataIndex(0,i);

                float fltData;
                for (int k = 0; k < lReceiveCount; k++){
                    fltData = pValue[nSeekPos*lReceiveCount + k];
                    data_thread->theApp->m_mpcolllectioinDataQueue[channelCode].push(fltData); //可能会影响性能
                    if(data_thread->theApp->redisState == data_thread->theApp->RedisState::REDIS_OPEND){
                        data_thread->theApp->m_mpredisCollectionDataQueue[channelCode].push(fltData);
                    }
                    fftwInputArray[k] = fltData;
                }
                data_thread->theApp->echoSignalQueue[channelCode]->PushEchoSignal(fftwInputArray);
        }
                 msleep(10);
        }

        delete[] pValue;

    }

    emit DataThreadDone();
}
