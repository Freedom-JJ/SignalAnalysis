#include "PlayBackThread.h"

void PlayBackThread::run(){


    int collectionPoints = playThread->theApp->data_length;
    //QString data_url = playThread->theApp->dataUrl[this->signalCode];

    QFile file(DataUrl);
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

        delete fftwInputArray;
        fftwInputArray = nullptr;
        msleep(600);
    }

}

void PlayBackThread::GetDataUrl(QString dataUrl){
    this->DataUrl = dataUrl;
}
