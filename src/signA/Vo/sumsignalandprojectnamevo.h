#ifndef SUMSIGNALANDPROJECTNAMEVO_H
#define SUMSIGNALANDPROJECTNAMEVO_H

#include "Domain/sumSignal.h"
#include "Domain/project.h"
#include "Tools/tool.h"
class SumSignalAndProjectNameVo
{
public:
    SumSignalAndProjectNameVo();
    SumSignalAndProjectNameVo(vector<string> res);
    SumSignalAndProjectNameVo(string id , string start,string end,long long projectId, string proName);
    void setId(string id);
    void setStartTime(string time);
    void setEndTime(string time);
    void setProjectId(long long id);
    void setProjectName(string name);
    string getId();
    string getStartTime();
    string getEndTime();
    long long getProjectId();
    string getProjectName();
private:
    string id; //该批次信号的公共id
    string startTime; //该批信号的开始采集时间
    string endTime; //该批信号的结束采集时间
    long long  projectId; //项目id
    string projectName;
    int attribute_num = 5;
};

#endif // SUMSIGNALANDPROJECTNAMEVO_H
