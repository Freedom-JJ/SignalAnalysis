#ifndef CHANNEL_H
#define CHANNEL_H

#include "../Logger/log.h"
#include "Tools/tool.h"
#include <string>
#include <vector>

class Channel
{
public:
    Channel();
    Channel(vector<string> channels_attribute);
    ~Channel();

    void setId(long long id);
    long long getId();

    void setChannelCode(string channelCode);
    string getChannelCode();

    void setChannelDesc(string channelDesc);
    string getChannelDesc();

    void setMeasureType(string measureType);
    string getMeasureType();

    void setFullValue(int fullValue);
    int getFullValue();

    void setInputMode(string inputMode);
    string getInputMode();


    void setUpFreq(int upFreq);
    int getUpFreq();

    void setElcPressure(int elcPressure);
    int getElcPressure();

    void setProjectId(long long projectId);
    long long getProjectId();

private:
    long long id;
    string channelCode; //传感器标识
    string channelDesc; //传感器描述
    string measureType;
    int fullValue;
    string inputMode;
    int upFreq;
    int elcPressure;
    long long projectId;
    int attribute_num = 9;
};

#endif // CHANNEL_H
