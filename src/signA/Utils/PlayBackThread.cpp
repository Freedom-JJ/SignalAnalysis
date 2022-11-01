#include "PlayBackThread.h"

void SumPlayBackThread::run(){

    if (sumPlayThread->theApp->m_blocalSignalExist){
        //设置视图的刷新状态
        sumPlayThread->theApp->m_iplaybackState = 1;

        auto iter = sumPlayThread->theApp->dataUrl.begin();
        while (iter!= sumPlayThread->theApp->dataUrl.end()){
            PlayBackThread *everyBackConsumer  = new PlayBackThread(sumPlayThread,iter->first,iter->second);
            playBackThreadVector.push_back(everyBackConsumer);
            iter++;
        }

        qDebug()<<"threadsize------------------------------------------------------"<<playBackThreadVector.size()<<endl;;
        for (int i = 0; i < playBackThreadVector.size();i++){
            playBackThreadVector[i]->start();
        }
        for (int i = 0; i < playBackThreadVector.size();i++){
            playBackThreadVector[i]->wait();
        }

        }

    emit stopRefresh(); //可以执行,但是界面或者队列已经卡死slots执行不了
    qDebug()<<"所有线程都结束了----------1027"<<endl;
    sumPlayThread->theApp->m_iplaybackState = 0;


}

void PlayBackThread::run(){


    int collectionPoints = playThread->theApp->data_length;
    QString data_url = playThread->theApp->dataUrl[this->signalCode];

    QFile file(data_url);
    if(!file.open(QIODevice::ReadOnly))
    {
        std::cerr << "Cannot open file for reading: "
                  << qPrintable(file.errorString())
                  << std::endl;
    }
    QDataStream inputStream(&file);
    inputStream.setVersion(QDataStream::Qt_5_9);

    while (!inputStream.atEnd()&&playThread->theApp->m_iplaybackState){
        if (playThread->theApp->m_iplaybackState == 2){
            msleep(20);
            continue;
        }
        ///从文件中拿到collectionPoints条数据
        double * fftwInputArray;//傅里叶输入
        playThread->theApp->m_signalController.GetCollectionData(inputStream, collectionPoints, fftwInputArray);

        playThread->theApp->echoSignalQueue[signalCode]->PushEchoSignal(fftwInputArray);

        msleep(600);
    }


}

