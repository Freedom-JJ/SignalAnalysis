#ifndef SINGLESIGNALSERVICE_H
#define SINGLESIGNALSERVICE_H
#include "../Domain/singlesignal.h"
#include "../Dao/singlesignaldao.h"

class SingleSignalService
{
public:
    SingleSignalService();

    //根据sumSignalId获得所有的SingleSignal
    vector<SingleSignal*> getSingleSignalsBySumSignalId(string sumSignalId);

    //根据信号id返回记录
    SingleSignal* getSingleSignalById(string id);

    //根据通道id返回记录
    vector<SingleSignal*> getSingleSignalsByChannelId(long long channelId);

    //添加单通道信号,返回主键
    string addSingleSignal(SingleSignal* singleSignal);


private:
    SingleSignalDao* singleSignalDao;

};

#endif // SINGLESIGNALSERVICE_H
