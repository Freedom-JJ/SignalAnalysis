#include "sumsignalservice.h"

SumSignalService::SumSignalService()
{

}

SumSignal *SumSignalService::getSumSignalById(string sumSignalId)
{
    return this->sumSignalDao->getSumSignalById(sumSignalId);
}

vector<SumSignal *> SumSignalService::getSumSignalsByProjectId(long long projectId)
{
    return this->sumSignalDao->getSumSignalsByProjectId(projectId);
}

string SumSignalService::addSumSignal(SumSignal *sumSignal)
{
    return this->sumSignalDao->insert(sumSignal);
}

string SumSignalService::updateSumSignal(SumSignal *sumSignal)
{
    return this->sumSignalDao->update(sumSignal);
}


