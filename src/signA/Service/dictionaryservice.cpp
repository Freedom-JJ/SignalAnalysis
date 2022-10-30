#include "dictionaryservice.h"

DictionaryService::DictionaryService(PDSQL* pdsql):m_dictionaryDao(pdsql)
{

}


DictionaryService::~DictionaryService()
{
}

bool DictionaryService::GetAllBySearchCondition(vector<TbDictionary> & dictionaryVec, TbDictionary searchEntity){
    string whereSql = "1 = 1 ";
    int tmp = searchEntity.GetDictId();
    if (searchEntity.GetDictId() != 0){ whereSql += " and dict_id = '" + std::to_string(tmp) +"'"; }
    if (searchEntity.GetDictName() != ""){ whereSql += " and dict_name = '" + searchEntity.GetDictName() + "'"; }
    if (searchEntity.GetDictValue() != ""){ whereSql += " and dict_value = '" + searchEntity.GetDictValue() + "'"; }
    m_dictionaryDao.SetTableFieldValues(searchEntity);
    vector<TbDictionaryDao> dictionaryDaoVec;
    bool isSuccess = m_dictionaryDao.SelectObjectsByCondition(dictionaryDaoVec, whereSql);
    if (isSuccess){
        for (auto dictionaryDao : dictionaryDaoVec){
            TbDictionary dict;
            dictionaryDao.GetTableFieldValues(dict);
            dictionaryVec.push_back(dict);
        }
    }
    return isSuccess;
}

bool DictionaryService::DeleteById(TbDictionary dictionary)
{
    m_dictionaryDao.SetTableFieldValues(dictionary);
    bool isSuccess = m_dictionaryDao.DeleteByKey();
    return isSuccess;
}

bool DictionaryService::UpdateDictionary(TbDictionary dictionary)
{

    m_dictionaryDao.SetTableFieldValues(dictionary);
    bool isSuccess = m_dictionaryDao.UpdateByKey();
    return isSuccess;
}


bool DictionaryService::AddDictionary(TbDictionary dictionary)
{

    m_dictionaryDao.SetTableFieldValues(dictionary);
    bool isSuccess = m_dictionaryDao.Insert();
    return isSuccess;

}
