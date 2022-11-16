#include "playbacksinglethread.h"

void PLayBackSingleThread::run(){

    int collectionPoints = singlePlayThread->theApp->data_length;

//    //初始化一些遍历容器
//    QVector<QDataStream> streamVector;
//    auto iter = singlePlayThread->theApp->dataUrl.begin();
//    while (iter!= singlePlayThread->theApp->dataUrl.end()){
//        QString channelCode = iter->first;
//        QString data_url = iter->second;

//        QFile file(data_url);

//        if(!file.open(QIODevice::ReadOnly))
//        {
//            std::cerr << "Cannot open file for reading: "
//                      << qPrintable(file.errorString())
//                      << std::endl;
//        }
//        QDataStream inputStream(&file);
//        inputStream.setVersion(QDataStream::Qt_5_9);

//        streamVector.push_back(inputStream);

//        iter++;
//    }

//    auto iterOther = singlePlayThread->theApp->dataUrl.begin();
//    while(!streamVector.atEnd()&&singlePlayThread->theApp->m_iplaybackState){
//        if (singlePlayThread->theApp->m_iplaybackState == 2){
//            msleep(20);
//            continue;
//       }

//        while (iterOther!= singlePlayThread->theApp->dataUrl.end()){
//            double * fftwInputArray;//傅里叶输入
//            QString code = iterOther->first;
//            int codeInt = code.toInt();
//            QString data_url = iterOther->second;

//            QFile file(data_url);

//            if(!file.open(QIODevice::ReadOnly))
//            {
//                std::cerr << "Cannot open file for reading: "
//                          << qPrintable(file.errorString())
//                          << std::endl;
//            }
//            QDataStream inputStream(&file);
//            inputStream.setVersion(QDataStream::Qt_5_9);

//            singlePlayThread->theApp->m_signalController.GetCollectionData(inputStream, collectionPoints, fftwInputArray);

//            singlePlayThread->theApp->echoSignalQueue[code]->PushEchoSignal(fftwInputArray);
//            iterOther++;
//        }



//    }

//    emit playbackSingleDone();




}
