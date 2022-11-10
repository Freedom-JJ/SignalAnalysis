#ifndef DICTIONARYSERVICE_H
#define DICTIONARYSERVICE_H

#include "../Dao/dictionarydao.h"

class DictionaryService
{
public:
    DictionaryService();
    ~DictionaryService();

    //根据dictionaryId返回记录
    Dictionary* getDictionaryById(long long dictionaryId);

    //根据dictName返回记录集合
    vector<Dictionary*> getDictionariesByDictName(string dictName);

    //根据字典id删除记录，返回删除的记录条数
    int deleteDictionaryById(long long id);

    //添加字典及记录，并返回字典id(主键)
    long long addDictionary(Dictionary* dictionary);

    //更新字典，根据字典主键更新
    long long updateDictionary(Dictionary* dictionary);

private:
    DictionaryDao* dictionaryDao;
};

#endif // DICTIONARYSERVICE_H
