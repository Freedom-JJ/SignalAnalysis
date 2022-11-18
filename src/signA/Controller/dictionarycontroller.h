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

    //根据字典id删除对应的记录
    Result deleteDictionaryByDictId(long long dictId);

    //添加字典记录，并返回字典id(主键),保存在dictId中
    Result addDictionary(Dictionary* dictionary, long long &dictId);

    //更新字典，根据字典主键更新
    Result updateDictionary(Dictionary* dictionary);



private:
    DictionaryService* dictionaryService;

};

#endif // DICTIONARYCONTROLLER_H
