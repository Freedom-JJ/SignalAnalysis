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
         AnalysisResult anares;
         QString signalCode = QString::number(0);
         QString redisKey = QString("AnalysisResult");
         QString res = resultRedis->rpop(redisKey);
         if(res == "NULL"){
            msleep(10);
            continue;
         }
         if(count.count(signalCode) == 0){
            count[signalCode] = 0;
         }
         QString conditonOrFalut = res.split("-")[1].simplified();
         res = res.split("-")[0];
         result->setCenterButtomText(conditonOrFalut);
         int id = count[signalCode];
         anares.setId(QString::number(id));
         anares.setChannel(signalCode);
         anares.setStart(QString::number(id)); //这是一种无赖的写法，不合理
         anares.setEnd(QString::number(id+1));
         count[signalCode] = id+1;
         if (res =="False"){
            anares.setErrorInf(anares.getLevelByQStr(conditonOrFalut));
//            result->theApp->getAnalysisResultNoChannel()->push_back(anares);因为时间轴添加了，没有设计好可恶
         }else{
             anares.setErrorInf(AnalysisResult::Level::NORMAL);
         }


        timeAxis->addDataTimeAxis(anares);
        msleep(100);
    }
    resultRedis->disconnectHost();
   qDebug()<<"----------结果线程结束了 关闭redis连接------------"<<endl;
}

void GetAnalysisResultThread::setTimeAxis(ITimeAxis *value)
{
    timeAxis = value;
}

void GetAnalysisResultThread::CloseGetResult(){

    msleep(5000);
    getAnalysisSwitch = 0;

}
