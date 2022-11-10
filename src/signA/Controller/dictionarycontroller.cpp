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

Result DictionaryController::deleteDictionaryByDictId(long long dictId)
{
    //查询是否存在该dictId对应的记录
    Dictionary* qdictionary = this->dictionaryService->getDictionaryById(dictId);
    if(!qdictionary){
        return Result(201,"字典表中不存在该id对应的记录");
    }

    //若存在该dictId对应的记录，则删除
    int delete_num = this->dictionaryService->deleteDictionaryById(dictId);
    if(delete_num == 0){
        return Result(202,"字典表删除失败，没有找到该记录，发生错误");
    }
    else{
        return Result(200,"字典表删除记录成功");
    }
}

Result DictionaryController::addDictionary(Dictionary *dictionary, long long &dictId)
{
    //判断指针是否为空
    if(!dictionary){
        return Result(203,"字典指针为空");
    }
    //添加该字典类,并返回该id
    dictId = this->dictionaryService->addDictionary(dictionary);
    if(dictId == 0){
        return Result(201,"字典添加记录失败");
    }
    else{
        return Result(200,"字典添加记录成功");
    }
}

Result DictionaryController::updateDictionary(Dictionary *dictionary)
{
    if(!dictionary){
        return Result(203,"字典指针为空");
    }
    if(dictionary->getId()==-1){
        return Result(204,"该字典类的id未赋值，仍为-1");
    }

    //查询是否存在该dictId对应的记录
    Dictionary* qdictionary = this->dictionaryService->getDictionaryById(dictionary->getId());
    if(!qdictionary){
        return Result(201,"字典表中不存在该id对应的记录");
    }

    long long id  = this->dictionaryService->updateDictionary(dictionary);
    if(id==-1){
        return Result(202,"该字典类更新失败,没有找到该记录，发生错误");
    }
    else{
        return Result(200,"该字典类更新成功");
    }
}



