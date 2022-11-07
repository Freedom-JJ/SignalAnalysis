#include "sumsignalandprojectnamevo.h"

SumSignalAndProjectNameVo::SumSignalAndProjectNameVo()
{

}

SumSignalAndProjectNameVo::SumSignalAndProjectNameVo(vector<string> res)
{
    if(res.size()!=attribute_num){
        qCritical()<<"singleSignal initialized falsed, the size of singleSingal_attribute should be equal to attribute_num";
    }
    new (this)SumSignalAndProjectNameVo(res[0],res[1],res[2],mstoll(res[3]),res[4]);
//    this->SumSignalAndProjectNameVo(res[0],res[1],res[2],mstoll(res[3]),res[4]);
}



SumSignalAndProjectNameVo::SumSignalAndProjectNameVo(string id , string start,string end,long long projectId, string proName){
    setId(id);
    setStartTime(start);
    setEndTime(end);
    setProjectId(projectId);
    setProjectName(proName);
}



void SumSignalAndProjectNameVo::setId(string id)
{
    this->id = id;
}

void SumSignalAndProjectNameVo::setStartTime(string time)
{
    this->startTime = time;
}

void SumSignalAndProjectNameVo::setEndTime(string time)
{
    this->endTime = time;
}

void SumSignalAndProjectNameVo::setProjectId(long long id)
{
    this->projectId = id;
}

void SumSignalAndProjectNameVo::setProjectName(string name)
{
    this->projectName = name;
}

string SumSignalAndProjectNameVo::getId()
{
    return this->id;
}

string SumSignalAndProjectNameVo::getStartTime()
{
    return this->startTime;
}

string SumSignalAndProjectNameVo::getEndTime()
{
    return this->endTime;
}

long long SumSignalAndProjectNameVo::getProjectId()
{
    return this->projectId;
}

string SumSignalAndProjectNameVo::getProjectName()
{
    return this->projectName;
}
