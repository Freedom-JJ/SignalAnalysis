#include "channel.h"

Channel::Channel()
{
    this->id = -1;
    this->channelCode = "";
    this->channelDesc = "";
    this->measureType = "电压测量";
    this->fullValue = 20000;
    this->inputMode = "";
    this->upFreq = 0;
    this->elcPressure = 0;
    this->projectId = -1;
}

Channel::Channel(vector<string> channels_attribute)
{
    if(int(channels_attribute.size())!=this->attribute_num){
        qCritical()<<"Channel initialized falsed, the size of channels_attribute should be equal to attribute_num";
    }
    this->id = mstoll(channels_attribute[0]);
    this->channelCode = channels_attribute[1];
    this->channelDesc = channels_attribute[2];
    this->measureType = mstoi(channels_attribute[3]);
    this->fullValue = mstoi(channels_attribute[4]);
    this->inputMode = mstoi(channels_attribute[5]);
    this->upFreq = mstoi(channels_attribute[6]);
    this->elcPressure = mstoi(channels_attribute[7]);
    this->projectId = mstoll(channels_attribute[8]);
}

Channel::~Channel()
{

}

void Channel::setId(long long id)
{
    this->id = id;
}

long long Channel::getId()
{
    return this->id;
}

void Channel::setChannelCode(string channelCode)
{
    this->channelCode = channelCode;
}

string Channel::getChannelCode()
{
    return this->channelCode;
}

void Channel::setChannelDesc(string channelDesc)
{
    this->channelDesc = channelDesc;
}

string Channel::getChannelDesc()
{
    return this->channelDesc;
}

void Channel::setMeasureType(string measureType)
{
    this->measureType = measureType;
}

string Channel::getMeasureType()
{
    return this->measureType;
}

void Channel::setFullValue(int fullValue)
{
    this->fullValue = fullValue;
}

int Channel::getFullValue()
{
    return this->fullValue;
}

void Channel::setInputMode(string inputMode)
{
    this->inputMode = inputMode;
}

string Channel::getInputMode()
{
    return this->inputMode;
}

void Channel::setUpFreq(int upFreq)
{
    this->upFreq = upFreq;
}

int Channel::getUpFreq()
{
    return this->upFreq;
}

void Channel::setElcPressure(int elcPressure)
{
    this->elcPressure = elcPressure;
}

int Channel::getElcPressure()
{
    return this->elcPressure;
}

void Channel::setProjectId(long long projectId)
{
    this->projectId = projectId;
}

long long Channel::getProjectId()
{
    return this->projectId;
}
