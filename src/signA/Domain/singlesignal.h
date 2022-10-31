#ifndef SINGLESIGNAL_H
#define SINGLESIGNAL_H
#include <string>
#include <vector>
#include "../Logger/log.h"
#include "../Tools/tool.h"

class SingleSignal
{
public:
    SingleSignal();
    //需要包含所有的属性
    SingleSignal(vector<string> singleSingal_attribute);

    void setId(string id);
    string getId();

    void setChannelId(long long channelId);
    long long getChannelId();

    void setSumSingalId(string sumSignalId);
    string getSumSignalId();

    void setSignalStatus(int signalStatus);
    int getSignalStatus();

    void setDataUrl(string dataUrl);
    string getDataUrl();

    friend ostream &operator<<(ostream &stream, SingleSignal singleSignal)
    {
        stream << "SingleSignal id: " <<singleSignal.getId();
        stream << " channelId: " << singleSignal.getChannelId();
        stream << " sumSignalId: "<<singleSignal.getSumSignalId();
        stream << " signalStatus: "<<singleSignal.getSignalStatus();
        stream << " dataUrl: "<<singleSignal.getDataUrl()<<endl;
        return stream;
    }

private:
    string id; //全局guuid，非空
    long long channelId; //用来保存该通道的参数的记录的id
    string sumSignalId; //用来保存该批次信号的共同id
    int signalStatus; //信号的状态
    string dataUrl; //信号的保存路径
    int attribute_num = 5; //字段个数
};

#endif // SINGLESIGNAL_H
