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

    friend ostream &operator<<(ostream &stream,Collectionparas collectionparas){
        stream << "Collectionparas id:"<<collectionparas.getId();
        stream << " sampleFrequency:"<<collectionparas.getSampleFrequency();
        stream << " collectinMethod:"<<collectionparas.getCollectionMethod();
        stream << " triggerMethod:"<<collectionparas.getTriggerMethod();
        stream << " dataBlocks:"<<collectionparas.getDataBlocks();
        stream << " delayBlocks:"<<collectionparas.getDelayBlocks();
        stream << " triggerTimes:"<<collectionparas.getTriggerTimes();
        stream << " line:"<<collectionparas.getLine();
        stream << " sampleBatch:"<<collectionparas.getSampleBatch();
        stream << " sampleClk:"<<collectionparas.getSampleClk();
    }


private:
    long long id;
    int sampleFrequency;
    int collectionMethod;
    int triggerMethod;
    int dataBlocks;
    int delayBlocks;
    int triggerTimes;
    int line;
    int sampleBatch;
    int sampleClk;

    int attribute_num = 10;
};

#endif // COLLECTIONPARAS_H
