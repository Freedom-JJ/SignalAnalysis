#include "dictionarycontroller.h"

DictionaryController::DictionaryController()
{
    this->dictionaryService = new DictionaryService();
}

DictionaryController::~DictionaryController()
{
    delete this->dictionaryService;
}

Result DictionaryController::findDictionaryByDictionaryId(long long dictionaryId, Dictionary *&dictionary)
{
    dictionary = this->dictionaryService->getDictionaryById(dictionaryId);
    if(dictionary){
        return Result(200,"成功找到该字典");
    }
    else{
        return Result(201,"字典表中不存在该id");
    }
}

Result DictionaryController::findDictionariesByDictName(string dictName, vector<Dictionary *>& dictionaries)
{
    dictionaries = this->dictionaryService->getDictionariesByDictName(dictName);
    if(dictionaries.size()==0){
        return Result(201,"字典表中不存在该dictName");
    }
    else{
        return Result(200,"字典表查找成功");
    }
}

