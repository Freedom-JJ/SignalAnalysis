#include "collectionparas.h"

Collectionparas::Collectionparas()
{
    this->sampleFrequency = 0;
    this->collectionMethod = 0;
    this->triggerMethod = 0;
    this->dataBlocks = 0;
    this->delayBlocks = 0;
    this->triggerTimes = 0;
    this->line = 0;
    this->sampleBatch = 0;
    this->sampleClk = 0;
}

Collectionparas::Collectionparas(vector<string> collectionparas_attribute)
{
    if(int(collectionparas_attribute.size())!=attribute_num){
        qCritical()<<"Collectionparas initialized falsed, the size of collectionparas_attribute should be equal to attribute_num";
    }
    this->id = mstoll(collectionparas_attribute[0]);
    this->sampleFrequency = mstoi(collectionparas_attribute[1]);
    this->collectionMethod = mstoi(collectionparas_attribute[2]);
    this->triggerMethod = mstoi(collectionparas_attribute[3]);
    this->dataBlocks = mstoi(collectionparas_attribute[4]);
    this->delayBlocks = mstoi(collectionparas_attribute[5]);
    this->triggerTimes = mstoi(collectionparas_attribute[6]);
    this->line = mstoi(collectionparas_attribute[7]);
    this->sampleBatch = mstoi(collectionparas_attribute[8]);
    this->sampleClk = mstoi(collectionparas_attribute[9]);

}

void Collectionparas::setId(long long id)
{
    this->id = id;
}

long long Collectionparas::getId()
{
    return this->id;
}

void Collectionparas::setSampleFrequency(int sampleFrequency)
{
    this->sampleFrequency = sampleFrequency;
}

int Collectionparas::getSampleFrequency()
{
    return this->sampleFrequency;
}

void Collectionparas::setCollectionMethod(int collectionMethod)
{
    this->collectionMethod = collectionMethod;
}

int Collectionparas::getCollectionMethod()
{
    return this->collectionMethod;
}

void Collectionparas::setTriggerMethod(int triggerMethod)
{
    this->triggerMethod = triggerMethod;
}

int Collectionparas::getTriggerMethod()
{
    return this->triggerMethod;
}

void Collectionparas::setDataBlocks(int dataBlocks)
{
    this->dataBlocks = dataBlocks;
}

int Collectionparas::getDataBlocks()
{
    return this->dataBlocks;
}

void Collectionparas::setDelayBlocks(int delayBlocks)
{
    this->delayBlocks = delayBlocks;
}

int Collectionparas::getDelayBlocks()
{
    return this->delayBlocks;
}

void Collectionparas::setTriggerTimes(int triggerTimes)
{
    this->triggerTimes = triggerTimes;
}

int Collectionparas::getTriggerTimes()
{
    return this->triggerTimes;
}

void Collectionparas::setLine(int line)
{
    this->line = line;
}

int Collectionparas::getLine()
{
    return this->line;
}

void Collectionparas::setSampleBatch(int sampleBatch)
{
    this->sampleBatch = sampleBatch;
}

int Collectionparas::getSampleBatch()
{
    return this->sampleBatch;
}

void Collectionparas::setSampleClk(int sampleClk)
{
    this->sampleClk = sampleClk;
}

int Collectionparas::getSampleClk()
{
    return this->sampleClk;
}
