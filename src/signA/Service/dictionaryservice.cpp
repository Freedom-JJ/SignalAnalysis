#include "dictionaryservice.h"

DictionaryService::DictionaryService()
{
    this->dictionaryDao = new DictionaryDao();
}

DictionaryService::~DictionaryService()
{
    delete this->dictionaryDao;
}

Dictionary *DictionaryService::getDictionaryById(long long dictionaryId)
{
    return this->dictionaryDao->getDictionaryById(dictionaryId);
}

vector<Dictionary *> DictionaryService::getDictionariesByDictName(string dictName)
{
    return this->dictionaryDao->getDictionarysByDictName(dictName);
}
