#ifndef SIGNALCONTROLLER_H
#define SIGNALCONTROLLER_H


#include <QFile>
#include <QDataStream>
#include <QVector>
#include <QDebug>
#include "../Result/result.h"
#include "Utils/ThreadSafeQueue.h"
#include "../Service/singlesignalservice.h"
#include "Vo/sumsignalandprojectnamevo.h"
#include "Service/sumsignalservice.h"
class SignalController
{
public:
    SignalController();

    ~SignalController();

public:
    /**********************************************************************
    功能描述： 保存采样数据为二进制文件
    输入参数：outputStream--输出流；acquireSigna--采集信号
    ***********************************************************************/
    Result SaveCollectionData2Binary(QDataStream &outputStream, ThreadSafeQueue<double> & acquireSignal);

    /**********************************************************************
    功能描述： 将采样数据全部存到一个二维vector，最后再执行保存
    输入参数：acquireSigna--采集信号
    ***********************************************************************/
    Result SaveCollectionData2Vector(QVector<QVector<double>> &sumSignalVector, ThreadSafeQueue<double> & acquireSignal);

    /**********************************************************************
    功能描述:   回放取数据
    输入参数：
    ***********************************************************************/
    bool GetCollectionData(QDataStream &inputStream,int pointCount,double*& fftwInputArray);


    //保存sumSignal
    Result saveSumSignal(SumSignal* sumSignal);

    //保存singleSignal
    Result saveSingleSignal(SingleSignal* singleSignal);

    //根据sumSignalId,找到统一批次保存到singleSignal
    Result findSingleSignalsBySumSignalId(string sumSignalId,vector<SingleSignal*> &singleSignals);

    //根据项目id，找到该项目下的所有sumSignal
    Result findSumSignalByProjectId(long long projectId,vector<SumSignal*> &sumSignals);

    //更新总信号，在老系统中用于更新sumSignal的endTime
    Result updateSumSignal(SumSignal* sumSignal);

    Result getAllSumSignalWithProjectName(QVector<SumSignalAndProjectNameVo> &res);

private:
    SingleSignalService* singleSignalService;
    SumSignalService* sumSignalService;


    /**********************************************************************
    功能描述:   得到所有sumSignal携带ProJectName(多表查询)
    输入参数：
    ***********************************************************************/

    
private:
    SumSignalService service;
};

#endif // SIGNALCONTROLLER_H
