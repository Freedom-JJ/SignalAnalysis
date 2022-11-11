#include "redisuploadthread.h"

void RedisUploadThread::run(){

    qDebug()<<"redis线程开始了--------------------------------------------------------"<<endl;

    consumerRedis = new QtRedis(this->redisHost,this->redisPort);

    if (!consumerRedis->openConnection())
    {
        qDebug() << "Could not connect to server...";
        exit(0);
    }

    qDebug() << "Connected to server...";



    while(saveRedis->theApp->m_icollectState){

        if (saveRedis->theApp->m_icollectState == 2){
             //暂停状态就卡在这
            msleep(10);
            continue;
        }

    std::map<QString, ThreadSafeQueue<double>>::iterator iter = saveRedis->theApp->m_mpredisCollectionDataQueue.begin();
    while (iter != saveRedis->theApp->m_mpredisCollectionDataQueue.end()){

            QString signalCode = iter->first;
            ThreadSafeQueue<double> saveData;
            QString redisKey = QString("redisCollectionData-%1").arg(signalCode);


            QVector<double> dataVector;

             if(saveRedis->theApp->m_mpredisCollectionDataQueue[signalCode].size() > 0){
                 for(int i=0;i<saveRedis->theApp->m_icollectSignalsStoreCount;i++){
                    dataVector.append(*(saveRedis->theApp->m_mpredisCollectionDataQueue[signalCode].wait_and_pop()));
                 }

             QString jsonStr = saveRedis->theApp->m_redis->VectorDataSerialize(dataVector);
             consumerRedis->lpush(redisKey,jsonStr);

           }

        iter++;
     }
    }

    std::map<QString, ThreadSafeQueue<double>>::iterator iter = saveRedis->theApp->m_mpredisCollectionDataQueue.begin();
    while (iter != saveRedis->theApp->m_mpredisCollectionDataQueue.end()){

        QString signalCode = iter->first;
        ThreadSafeQueue<double> saveData;
        QString redisKey = QString("redisCollectionData-%1").arg(signalCode);

        QVector<double> restVector;
           if(saveRedis->theApp->m_mpredisCollectionDataQueue[signalCode].size() > 0){

               for(int i=0;i<saveRedis->theApp->m_icollectSignalsStoreCount;i++){
                   if(saveRedis->theApp->m_mpredisCollectionDataQueue[signalCode].size()>0){

                        saveData.push(*(saveRedis->theApp->m_mpredisCollectionDataQueue[signalCode].wait_and_pop()));

                   }
                   else{
                       saveData.push(0);
                   }

               }
               QString jsonStr = saveRedis->theApp->m_redis->DataSerialize(saveData);
               consumerRedis->lpush(redisKey,jsonStr);
            }
    iter++;

}

    emit AllRedisConsumerSaved();


}


void RedisConSumerThread::run(){

    consumerRedis = new QtRedis("localhost",6379);

    if (!consumerRedis->openConnection())
    {
        qDebug() << "Could not connect to server...";
        exit(0);
    }

    qDebug() << "Connected to server...";

    QString redisKey = QString("redisCollectionData-%1").arg(signalCode);
//    for(int i=0;i<5;i++){
//    consumerRedis->lpush(redisKey,"jsonVectorStr");
//}

    while(true){
        consumerRedis->lpush(redisKey,"jsonVectorStr");
    }



    ThreadSafeQueue<double> saveData;
    while (redisConsumer->theApp->m_icollectState){
        if (redisConsumer->theApp->m_icollectState == 2){
             //暂停状态就卡在这
            msleep(10);
            continue;
        }
        while (redisConsumer->theApp->m_mpredisCollectionDataQueue[signalCode].size() > 0){
            saveData.push(*(redisConsumer->theApp->m_mpredisCollectionDataQueue[signalCode].wait_and_pop()));
            if (saveData.size() == redisConsumer->theApp->m_icollectSignalsStoreCount){
                QString jsonStr = redisConsumer->theApp->m_redis->DataSerialize(saveData);
                consumerRedis->lpush(redisKey,jsonStr);
        }
      }
    }
            //点完停止采集之后，还有数据需要保存！！！
        QVector<double> restVector;
        while (redisConsumer->theApp->m_mpredisCollectionDataQueue[signalCode].size() > 0){
            if(restVector.size()==20000){
                QString jsonVectorStr = redisConsumer->theApp->m_redis->VectorDataSerialize(restVector);
                consumerRedis->lpush(redisKey,jsonVectorStr);
                QVector<double>().swap(restVector);
            }
            saveData.push(*(redisConsumer->theApp->m_mpredisCollectionDataQueue[signalCode].wait_and_pop()));
            shared_ptr<double> signal = saveData.wait_and_pop();
            restVector.append(*signal);

        }

        QString jsonRestVectorStr = redisConsumer->theApp->m_redis->VectorDataSerialize(restVector);
        consumerRedis->lpush(redisKey,jsonRestVectorStr);

}
