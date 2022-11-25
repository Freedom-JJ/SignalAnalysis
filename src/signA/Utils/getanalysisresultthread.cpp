#include "getanalysisresultthread.h"

void GetAnalysisResultThread::run(){
//    qDebug()<<"结果线程开始了--------------------------------------------------------"<<endl;
    resultRedis = new QtRedis("localhost",6379);
    if(count.size()>0){
        count.clear();
    }

    if (!resultRedis->openConnection())
    {
        qDebug() << "Could not connect to server...";
        return;
    }
    for(int i=0;i<result->theApp->m_vchannelCodes.size();i++){
        QString signalCode = result->theApp->m_vchannelCodes[i];
        QString redisKey = QString("redisCollectionData-%1").arg(signalCode);
        QString resultKey = QString("AnalysisResult-%1").arg(signalCode);
        resultRedis->del(redisKey);
        resultRedis->del(resultKey);
    }
    qDebug() << "Connected to server...";
    while(result->theApp->m_iplaybackState||result->theApp->m_icollectState){//
        if (result->theApp->m_iplaybackState == 2||result->theApp->m_icollectState == 2){
             //暂停状态就卡在这
            msleep(10);
            continue;
         }

        QVector<AnalysisResult> resultVector;
        for(int i=0;i<channelNumber;i++){
            AnalysisResult anares;
            QString signalCode = QString::number(i);
            QString redisKey = QString("AnalysisResult-%1").arg(signalCode);
            QString result = resultRedis->rpop(redisKey);
            if(result == "NULL"){
                i--;
                msleep(10);
                continue;
            }
            if(count.count(signalCode) == 0){
                count[signalCode] = 0;
            }
            int id = count[signalCode];
            anares.setId(QString::number(id));
            anares.setChannel(signalCode);
            anares.setErrorInf(AnalysisResult::Level(result.toInt()));
            anares.setStart(QString::number(id));
            anares.setEnd(QString::number(id+1));
            resultVector.push_back(anares);
            count[signalCode] = id+1;
        }
        qDebug()<<"reslut size:"<<resultVector.size()<<endl;
        timeAxis->addDataTimeAxis(resultVector);
        msleep(50);
    }

   qDebug()<<"----------结果线程结束了------------"<<endl;
}

void GetAnalysisResultThread::setTimeAxis(ITimeAxis *value)
{
    timeAxis = value;
}

void GetAnalysisResultThread::CloseGetResult(){

    msleep(5000);
    getAnalysisSwitch = 0;

}
