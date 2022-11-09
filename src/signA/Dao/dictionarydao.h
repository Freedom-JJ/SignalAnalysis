#ifndef DICTIONARYDAO_H
#define DICTIONARYDAO_H

#include "../Domain/dictionary.h"
#include "pdsqlinitialize.h"
#include <vector>

class DictionaryDao
{
public:
    DictionaryDao();

    vector<Dictionary*> listDictionaries(string query_condition="");

    //根据字典id返回记录
    Dictionary* getDictionaryById(long long id);

    //根据dictName返回记录集合
    vector<Dictionary*> getDictionarysByDictName(string dictName);

};

#endif // DICTIONARYDAO_H
