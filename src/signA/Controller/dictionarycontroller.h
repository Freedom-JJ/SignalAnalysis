#ifndef DICTIONARYCONTROLLER_H
#define DICTIONARYCONTROLLER_H
#include "../Result/result.h"
#include "../Service/dictionaryservice.h"


class DictionaryController
{
public:
    DictionaryController();
    ~DictionaryController();

    //根据字典id找到对应的记录，dictionary中为查询到的字典类
    Result findDictionaryByDictionaryId(long long dictionaryId,Dictionary*& dictionary);

    //根据字典name找到对应的记录集合，
    Result findDictionariesByDictName(string dictName,vector<Dictionary*>& dictionaries);

private:
    DictionaryService* dictionaryService;

};

#endif // DICTIONARYCONTROLLER_H
