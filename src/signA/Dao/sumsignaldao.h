#ifndef SUMSIGNALDAO_H
#define SUMSIGNALDAO_H

#include "../Domain/sumSignal.h"
#include "pdsqlinitialize.h"
#include <vector>

class SumSignalDao
{
public:
    SumSignalDao();
    //返回所有的sumSignal
    vector<SumSignal*> listSumSignals(string query_condition="");

    //根据sumSignal的id返回sumSignal
    SumSignal* getSumSignalById(string id);

    string insert(SumSignal* sumSignal);

};

#endif // SUMSIGNALDAO_H
