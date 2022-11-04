#include "sumsignalservice.h"

SumSignalService::SumSignalService()
{
    this->sumSignalDao = new SumSignalDao();
}

SumSignal *SumSignalService::getSumSignalById(string sumSignalId)
{
    qInfo()<<"执行根据dao层的getSumSignalById"<<QString::fromStdString(sumSignalId);
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


