#ifndef COLLECTIONPARAS_H
#define COLLECTIONPARAS_H
#include <string>
#include <vector>
#include "../Logger/log.h"
#include "../Tools/tool.h"

class Collectionparas
{
public:
    Collectionparas();
    Collectionparas(vector<string> collectionparas_attribute);

    void setId(long long id);
    long long getId();

    void setSampleFrequency(int sampleFrequency);
    int getSampleFrequency();

    void setCollectionMethod(int collectionMethod);
    int getCollectionMethod();

    void setTriggerMethod(int triggerMethod);
    int getTriggerMethod();

    void setDataBlocks(int dataBlocks);
    int getDataBlocks();

    void setDelayBlocks(int delayBlocks);
    int getDelayBlocks();

    void setTriggerTimes(int triggerTimes);
    int getTriggerTimes();

    void setLine(int line);
    int getLine();

    void setSampleBatch(int sampleBatch);
    int getSampleBatch();

    void setSampleClk(int sampleClk);
    int getSampleClk();





private:
    long long id;
    int sampleFrequency;//采样频率
    int collectionMethod;//采样方法
    int triggerMethod;//触发方法
    int dataBlocks;//数据块数
    int delayBlocks;//延迟块数
    int triggerTimes;//触发次数
    int line;//采集点数
    int sampleBatch;//采样批次
    int sampleClk;//采样时钟

    int attribute_num = 10;
};

#endif // COLLECTIONPARAS_H
