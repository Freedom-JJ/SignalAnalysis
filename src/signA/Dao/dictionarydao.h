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

    //根据字典id删除记录,返回删除的记录条数
    int deleteDictionaryById(long long id);

    //添加字典记录，并返回字典id（主键）
    long long insertDictionary(Dictionary* dictionary,bool insert_id=false);

    //更新字典，根据字典主键更新
    long long updateDictionary(Dictionary* dictionary);

};

#endif // DICTIONARYDAO_H
