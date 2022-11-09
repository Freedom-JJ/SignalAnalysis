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

private:
    DictionaryDao* dictionaryDao;
};

#endif // DICTIONARYSERVICE_H
