#include "SaveCollectionDataThread.h"

SaveCollectionDataThread::SaveCollectionDataThread()
{

}

void SaveCollectionDataThread::OpenThread2SaveCollectionData(){

    thread t(&SaveCollectionDataThread::SaveSumCollectionData, this);
    t.detach();
}

void SaveCollectionDataThread::SaveSumCollectionData(){
        saveThread->theApp.m_bisSave = true;
        map<QString, ThreadSafeQueue<double>>::iterator iter = saveThread->m_mpcolllectioinDataQueue.begin();
        vector<thread> threadVector;//size = 4
        while (iter != saveThread->m_mpcolllectioinDataQueue.end()){
            threadVector.push_back(thread(&SaveCollectionDataThread::SaveCollectionData, this, iter->first));
            iter++;
        }
        for (int i = 0; i < threadVector.size();i++){
            threadVector[i].join();
        }
        //所有线程都完事了，执行保存操作
        saveThread->theApp.m_bisSave = false;
}

void SaveCollectionDataThread::SaveCollectionData(QString signalCode){

       bool exist;
       QString fileName = QString("D:\\QtCollectionData\\%1.txt").arg(signalCode);
       QByteArray data ;
       data.resize(10);
       memset(data.data(),0x00,data.size());

       QDir *folder = new QDir;
       exist = folder->exists("D:\\QtCollectionData");

       QFile f(fileName);

       f.write(data);

       f.close();

}
