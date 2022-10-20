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
    return Result(true, "success");
}
