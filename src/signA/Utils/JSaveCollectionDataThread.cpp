#include "JSaveCollectionDataThread.h"

JSaveCollectionDataThread::JSaveCollectionDataThread(MainWindow *st)
{
    this->saveThread = st;
}

/**
 * @brief 保存数据流程如下
 * 1.根据队列数量生成，对应的文件输出流，文件名采用uuid
 * 2.输出完成后，将文件路径保存到数据库
 */
void JSaveCollectionDataThread::run(){
    saveThread->theApp->m_bisSave = true;
    //sumSignalId
    string uuid;
    UUIDUtil::GetUUID(uuid);



    // 初始化采集队列
    std::map<QString, ThreadSafeQueue<double>>::iterator iter = saveThread->theApp->m_mpcolllectioinDataQueue.begin();
    std::map<QString,QDataStream *> streams; // = is private
    std::map<QString,QFile *> fiels; //因为QFile 的=是private
    std::map<QString,int> counts;

    while (iter != saveThread->theApp->m_mpcolllectioinDataQueue.end()){
        QString filePath = QString("D:\\QtCollectionData\\%1-%2.txt").arg(QString::fromStdString(uuid),iter->first);
        QFile  *file = new QFile(filePath);
        if (!file->open(QIODevice::WriteOnly)){
            qDebug()<<"文件打开失败"<<endl;
            continue;
        }
        fiels[iter->first]=file;
        streams[iter->first]=new QDataStream(fiels[iter->first]);
        streams[iter->first]->setVersion(QDataStream::Qt_5_9);
        counts[iter->first] = 0;
        iter++;
    }

    //0为停止采集
    while(saveThread->theApp->m_icollectState != 0 ){
        std::map<QString, ThreadSafeQueue<double>>::iterator it = saveThread->theApp->m_mpcolllectioinDataQueue.begin();
        QVector<double> temp;
        while(it!=saveThread->theApp->m_mpcolllectioinDataQueue.end()){
            while(it->second.size() > 5*20000){ //当前队列有数据,且还有五祯以上就继续保存,要不然切换其他队列，避免队列数据过多,有一定可能性导致按队列保存
                temp.push_back(*(saveThread->theApp->m_mpcolllectioinDataQueue[it->first].wait_and_pop()));
            }
            if(temp.size()>0){
                *(streams[it->first])<<temp;
                counts[it->first] = counts[it->first] + temp.size();
                qDebug()<<"通道:"<<it->first<<"---写入数据:"<<temp.size()<<endl;
                temp.clear();
            }
            it++; //切换下一个队列
        }
    }
    msleep(100);
    //队列中剩余数据清理掉
    std:map<QString, ThreadSafeQueue<double>>::iterator it = saveThread->theApp->m_mpcolllectioinDataQueue.begin();
    QVector<double> temp;
    while(it!=saveThread->theApp->m_mpcolllectioinDataQueue.end()){
        while(it->second.size() > 0){
            temp.push_back(*(saveThread->theApp->m_mpcolllectioinDataQueue[it->first].wait_and_pop()));
        }
        if(temp.size()>0){
            *(streams[it->first])<<temp;
            counts[it->first] = counts[it->first] + temp.size();
             qDebug()<<"通道:"<<it->first<<"---写入剩余数据:"<<temp.size()<<endl;
            temp.clear();
        }
        fiels[it->first]->close();
        qDebug()<<"通道"<<it->first<<"所有点数"<<counts[it->first]<<endl;
        it++; //切换下一个队列
    }
    qDebug()<<"保存线程结束"<<endl;
    //彻底吃掉所有数据
    saveThread->theApp->m_mpcolllectioinDataQueue.clear();


    saveThread->theApp->m_sumSignal.setEndTime(DataUtil::GetCurrentCStringTime());
    //调用controller的updateSumSignal

    //所有线程都完事了，执行保存操作
    saveThread->theApp->m_bisSave = false;

}
