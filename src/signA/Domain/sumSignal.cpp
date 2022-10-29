#include "sumSignal.h"

SumSignal::SumSignal()
{

}

SumSignal::SumSignal(vector<string> sumSignal_attribute)
{
    if(sumSignal_attribute.size()!=attribute_num){
         qCritical()<<"sumSignal initialized falsed, the size of sumSignal_attribute should be equal to attribute_num";
    }
    this->id = sumSignal_attribute[0];
    this->startTime = sumSignal_attribute[1];
    this->endTime = sumSignal_attribute[2];
}

void SumSignal::setId(string id)
{
    this->id = id;
}

string SumSignal::getId()
{
    return this->id;
}

void SumSignal::setStartTime(string startTime)
{
    this->startTime = startTime;
}

string SumSignal::getStartTime()
{
    return this->startTime;
}

void SumSignal::setEndTime(string endTime)
{
    this->endTime = endTime;
}

string SumSignal::getEndTime()
{
    return this->endTime;
}
