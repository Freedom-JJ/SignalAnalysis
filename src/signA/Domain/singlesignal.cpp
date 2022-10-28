#include "singlesignal.h"

SingleSignal::SingleSignal()
{
    this->signalStatus = 1;//默认为1 正常状态
}

SingleSignal::SingleSignal(vector<string> singleSingal_attribute)
{
    if(singleSingal_attribute.size()!=attribute_num){
        qCritical()<<"singleSignal initialized falsed, the size of singleSingal_attribute should be equal to attribute_num";
    }
    this->id = singleSingal_attribute[0];
    this->channelId = mstoll(singleSingal_attribute[1]);
    this->sumSignalId = singleSingal_attribute[2];
    this->signalStatus = mstoi(singleSingal_attribute[3]);
    this->dataUrl = singleSingal_attribute[4];
}

void SingleSignal::setId(string id)
{
    this->id = id;
}

string SingleSignal::getId()
{
    return this->id;
}

void SingleSignal::setChannelId(long long channelId)
{
    this->channelId = channelId;
}

long long SingleSignal::getChannelId()
{
    return this->channelId;
}

void SingleSignal::setSumSingalId(string sumSignalId)
{
    this->sumSignalId = sumSignalId;
}

string SingleSignal::getSumSignalId()
{
    return this->sumSignalId;
}

void SingleSignal::setSignalStatus(int signalStatus)
{
    this->signalStatus = signalStatus;
}

int SingleSignal::getSignalStatus()
{
    return this->signalStatus;
}

void SingleSignal::setDataUrl(string dataUrl)
{
    this->dataUrl = dataUrl;
}

string SingleSignal::getDataUrl()
{
    return this->dataUrl;
}
