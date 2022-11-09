#include "dictionary.h"

Dictionary::Dictionary()
{

}

Dictionary::Dictionary(vector<string> dictionary_attribute)
{
    if(int(dictionary_attribute.size())!=attribute_num){
        qCritical()<<"dictionary initialized falsed, the size of dictionary_attribute should be equal to attribute_num";
    }
    this->id = mstoll(dictionary_attribute[0]);
    this->dictName = dictionary_attribute[1];
    this->dictValue = dictionary_attribute[2];
}

void Dictionary::setId(long long id)
{
    this->id = id;
}

long long Dictionary::getId()
{
    return this->id;
}

void Dictionary::setDictName(string dictName)
{
    this->dictName = dictName;
}

string Dictionary::getDictName()
{
    return this->dictName;
}

void Dictionary::setDictValue(string dictValue)
{
    this->dictValue = dictValue;
}

string Dictionary::getDictValue()
{
    return this->dictValue;
}
