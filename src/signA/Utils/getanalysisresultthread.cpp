#include "getanalysisresultthread.h"

void GetAnalysisResultThread::run(){

    qDebug()<<"结果线程开始了--------------------------------------------------------"<<endl;

    resultRedis = new QtRedis("localhost",6379);

    if (!resultRedis->openConnection())
    {
        qDebug() << "Could not connect to server...";
        exit(0);
    }

    qDebug() << "Connected to server...";


    while(result->theApp->m_iplaybackState){//

        if (result->theApp->m_iplaybackState == 2){
             //暂停状态就卡在这
            msleep(10);
            continue;
         }

        QVector<QString> resultVector;
        for(int i=0;i<channelNumber;i++){

            QString signalCode = QString::number(i);
            QString redisKey = QString("AnalysisResult-%1").arg(signalCode);
            QString result = resultRedis->rpop(redisKey);
            if(result == "NULL"){
                i+=4;
                msleep(10);
                continue;
            }
            qDebug()<<result<<endl;
            //qDebug()<<"result"<<endl;

        }

        msleep(1000);
    }

   qDebug()<<"结果线程结束了"<<endl;
}

void GetAnalysisResultThread::CloseGetResult(){

    msleep(5000);
    getAnalysisSwitch = 0;

}
