#ifndef SUMSIGNAL_H
#define SUMSIGNAL_H
#include <string>
#include <vector>
#include "../Logger/log.h"
#include "../Tools/tool.h"

class SumSignal
{
public:
    SumSignal();
    SumSignal(vector<string> sumSignal_attribute);

    void setId(string id);
    string getId();

    void setStartTime(string startTime);
    string getStartTime();

    void setEndTime(string endTime);
    string getEndTime();

    void setProjectId(long long id);
    long long getProjectId();


    friend ostream &operator<<(ostream &stream, SumSignal sumSignal)
    {
        stream << "sumSignal id: " <<sumSignal.getId();
        stream << " startTime: " << sumSignal.getStartTime();
        stream << " endTime: "<<sumSignal.getEndTime()<<endl;
        return stream;
    }



private:
    string id; //该批次信号的公共id
    string startTime; //该批信号的开始采集时间
    string endTime; //该批信号的结束采集时间
    long long  projectId; //项目id

    int attribute_num = 4;
};

#endif // SUMSIGNAL_H
