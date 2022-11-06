#ifndef SINGLESIGNALDAO_H
#define SINGLESIGNALDAO_H

#include "../Domain/singlesignal.h"
#include "pdsqlinitialize.h"
#include <vector>

class SingleSignalDao
{
public:
    SingleSignalDao();

    vector<SingleSignal*> listSingleSignals(string query_condition="");

    //根据信号id返回记录
    SingleSignal* getSingleSignalById(string id);

    //根据sumSignalId返回记录集合
    vector<SingleSignal*> getSingleSignalsBySumSignalId(string sumSignalId);

    //根据通道id返回记录集合
    vector<SingleSignal*> getSingleSignalsByChannelId(long long channelId);

    //插入记录，返回主键
    string insert(SingleSignal* singleSignal);


};

#endif // SINGLESIGNALDAO_H
