#include "singlesignalservice.h"

SingleSignalService::SingleSignalService()
{
    this->singleSignalDao = new SingleSignalDao();
}

SingleSignalService::~SingleSignalService()
{
    delete this->singleSignalDao;
}

vector<SingleSignal *> SingleSignalService::getSingleSignalsBySumSignalId(string sumSignalId)
{
    return singleSignalDao->getSingleSignalsBySumSignalId(sumSignalId);
}

SingleSignal *SingleSignalService::getSingleSignalById(string id)
{
    return singleSignalDao->getSingleSignalById(id);
}

vector<SingleSignal *> SingleSignalService::getSingleSignalsByChannelId(long long channelId)
{
    return singleSignalDao->getSingleSignalsByChannelId(channelId);
}

string SingleSignalService::addSingleSignal(SingleSignal *singleSignal)
{
    return singleSignalDao->insert(singleSignal);
}
