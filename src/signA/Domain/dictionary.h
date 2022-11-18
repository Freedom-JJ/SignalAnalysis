#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <vector>
#include "../Logger/log.h"
#include "../Tools/tool.h"

class Dictionary
{
public:
    Dictionary();
    Dictionary(vector<string> dictionary_attribute);
    void setId(long long id);
    long long getId();
    void setDictName(string dictName);
    string getDictName();
    void setDictValue(string dictValue);
    string getDictValue();

private:
    long long id;
    string dictName;
    string dictValue;

    int attribute_num = 3;
};

#endif // DICTIONARY_H
