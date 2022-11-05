#include "SignalController.h"

SignalController::SignalController()
{
    this->singleSignalService = new SingleSignalService();
    this->sumSignalService = new SumSignalService();
}

SignalController::~SignalController(){
    delete this->singleSignalService;
    delete this->sumSignalService;
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

Result SignalController::saveSumSignal(SumSignal *sumSignal)
{
    if(!sumSignal){
        return Result(205,"传入的sumSignal为空");
    }
    qInfo()<<"执行查找sumSignal根据Id";
    SumSignal* qsumSignal = sumSignalService->getSumSignalById(sumSignal->getId());
    if(qsumSignal){
        return Result(202,"该SumSignal已经存在");
    }
    qInfo()<<"执行添加sumSignal";
    string id =  sumSignalService->addSumSignal(sumSignal);
    if(id.empty()){
        return Result(201,"添加SumSignal失败");
    }
    else{
        return Result(200,"添加SumSignal成功");
    }
}

Result SignalController::saveSingleSignal(SingleSignal *singleSignal)
{
    if(!singleSignal){
        return Result(205,"传入的SingleSignal 为空");
    }
    SingleSignal* qSingleSignal = singleSignalService->getSingleSignalById(singleSignal->getId());
    if(qSingleSignal){
        return Result(202,"该SingleSignal已经存在");
    }
    string id = singleSignalService->addSingleSignal(singleSignal);
    if(id.empty()){
        return Result(201,"添加singleSignal失败");
    }
    else{
        return Result(200,"添加singleSignal成功");
    }
}

Result SignalController::findSingleSignalsBySumSignalId(string sumSignalId, vector<SingleSignal *> &singleSignals)
{
    singleSignals = singleSignalService->getSingleSignalsBySumSignalId(sumSignalId);
    if(singleSignals.size()==0){
        return Result(206,"findSingleSignalsBySumSignalId找到结果为空");
    }
    else{
        return Result(200,"findSingleSignalsBySumSignalId成功");
    }
}

Result SignalController::findSumSignalByProjectId(long long projectId, vector<SumSignal *> &sumSignals)
{
    sumSignals = sumSignalService->getSumSignalsByProjectId(projectId);
    if(sumSignals.size()==0){
        return Result(206,"该项目id下对应的sumSignal记录为空");
    }
    else{
        return Result(200,"findSumSignalByProjectId成功");
    }
}

Result SignalController::updateSumSignal(SumSignal *sumSignal)
{
    SumSignal* qsumSignal = sumSignalService->getSumSignalById(sumSignal->getId());
    if(sumSignal->getId()==""){
        return Result(205,"该sumSignal的id未赋值，不应该为空");
    }
    if(!qsumSignal){
        return Result(206,"该sumSignal对应id在数据库中不存在");
    }
    string id = sumSignalService->updateSumSignal(sumSignal);
    if(id==""){
        return Result(203,"sumSignal更新失败,当前传入sumSignal和数据库中保存的值一致");
    }
    else{
        return Result(200,"sumSignal更新成功");
    }

}
