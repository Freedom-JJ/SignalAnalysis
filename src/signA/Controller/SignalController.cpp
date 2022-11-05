#include "SignalController.h"

SignalController::SignalController()
{

}

SignalController::~SignalController(){

}

Result SignalController::SaveCollectionData2Binary(QDataStream &outputStream, ThreadSafeQueue<double> & acquireSignal){
    int saveCount = acquireSignal.size();
    QVector<double> saveData(saveCount);
    for (int i = 0; i < saveCount; i++){
        //循环采集数据的队列去保存数据
        shared_ptr<double> signal = acquireSignal.wait_and_pop();
        saveData[i] = *signal;
    }
    outputStream << saveData;
    return Result(200, "success");
}

Result SignalController::SaveCollectionData2Vector(QVector<QVector<double> > &sumSignalVector, ThreadSafeQueue<double> &acquireSignal){
    int saveCount = acquireSignal.size();
    QVector<double> saveData(saveCount);
    for (int i = 0; i < saveCount; i++){
        //循环采集数据的队列去保存数据
        shared_ptr<double> signal = acquireSignal.wait_and_pop();
        saveData[i] = *signal;
    }

    sumSignalVector.append(saveData);
    return Result(200, "success");
}

bool SignalController::GetCollectionData(QDataStream &inputStream, int pointCount,double *&fftwInputArray){
    QVector<double> signal;
    inputStream >> signal;
    fftwInputArray = new double[pointCount];
    for(int i=0;i<signal.size();i++){
        fftwInputArray[i]=signal[i];

    }

}

Result SignalController::getAllSumSignalWithProjectName(QVector<SumSignalAndProjectNameVo> &res)
{
    res = QVector<SumSignalAndProjectNameVo>::fromStdVector(service.allSumSignalWithProjectName());
    return Result(200,"成功查询:" +QString::number(res.size()).toStdString());
}
