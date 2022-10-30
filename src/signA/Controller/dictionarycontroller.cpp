#include "dictionarycontroller.h"

DictionaryController::DictionaryController(PDSQL* pdsql):m_dictionaryService(pdsql)
{

}


DictionaryController::~DictionaryController()
{
}
Result DictionaryController::FindAllBySearchCondition(vector<TbDictionary> & dictionaryVec, int dictId  , string dictName  , string dictValue ){
    bool isSuccess = m_dictionaryService.GetAllBySearchCondition(dictionaryVec, TbDictionary(dictId,dictName,dictValue));
    if (isSuccess){
        return Result(true,"字典表查询成功");
    }
    return Result(false, "字典表查询失败");
}


Result DictionaryController::DeleteById(TbDictionary dictionary)
{
    bool isSuccess = m_dictionaryService.DeleteById(dictionary);
    if (isSuccess){
        return Result(true, "字典表查询成功");
    }
    return Result(false, "字典表查询失败");

}


Result DictionaryController::UpdateDictionary(TbDictionary dictionary)
{
    bool isSuccess = m_dictionaryService.UpdateDictionary(dictionary);
    if (isSuccess){
        return Result(true, "字典表查询成功");
    }
    return Result(false, "字典表查询失败");

}

Result DictionaryController::AddDictionary(TbDictionary dictionary)
{

    bool isSuccess = m_dictionaryService.AddDictionary(dictionary);
    if (isSuccess){
        return Result(true, "字典表查询成功");
    }
    return Result(false, "字典表查询失败");
}
