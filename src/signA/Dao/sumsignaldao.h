#ifndef SUMSIGNALDAO_H
#define SUMSIGNALDAO_H

#include "../Domain/sumSignal.h"
#include "pdsqlinitialize.h"
#include "Vo/sumsignalandprojectnamevo.h"
#include <vector>

class SumSignalDao
{
public:
    SumSignalDao();
    //返回所有的sumSignal
    vector<SumSignal*> listSumSignals(string query_condition="");

    //根据sumSignal的id返回sumSignal
    SumSignal* getSumSignalById(string id);

    //根据项目的id返回sumSingal集合
    vector<SumSignal*> getSumSignalsByProjectId(long long projectId);

    //插入sumSignal
    string insert(SumSignal* sumSignal);

    //更新sumSignal
    string update(SumSignal* sumSignal);


    vector<SumSignalAndProjectNameVo> getAllSumSigWithProjectName();
};

#endif // SUMSIGNALDAO_H
