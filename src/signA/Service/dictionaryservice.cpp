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

int DictionaryService::deleteDictionaryById(long long id)
{
    return this->dictionaryDao->deleteDictionaryById(id);
}

long long DictionaryService::addDictionary(Dictionary *dictionary)
{
    return this->dictionaryDao->insertDictionary(dictionary);
}

long long DictionaryService::updateDictionary(Dictionary *dictionary)
{
    return this->dictionaryDao->updateDictionary(dictionary);
}
