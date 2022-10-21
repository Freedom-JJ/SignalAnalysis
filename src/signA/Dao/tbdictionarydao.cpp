#include "tbdictionarydao.h"


TbDictionaryDao::TbDictionaryDao(PDSQL* pdsql):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_dictionary";
    m_key = &m_dictId;
    SetVectorAndField("dict_id", "int", m_dictId);
    SetVectorAndField("dict_name", "string", m_dictName);
    SetVectorAndField("dict_value", "string", m_dictValue);
}
TbDictionaryDao::TbDictionaryDao(PDSQL* pdsql,const TbDictionaryDao  & dictionary):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_dictionary";
    m_key = &m_dictId;
    SetVectorAndField("dict_id", "int", m_dictId);
    SetVectorAndField("dict_name", "string", m_dictName);
    SetVectorAndField("dict_value", "string", m_dictValue);
    operator = (dictionary);
}

TbDictionaryDao::~TbDictionaryDao(){}

void TbDictionaryDao::GetTableFieldValues(TbDictionary &dictionary){
    dictionary.SetDictId(m_dictId.GetInt());
    dictionary.SetDictName(m_dictName.m_strValue);
    dictionary.SetDictValue(m_dictValue.m_strValue);
}
void TbDictionaryDao::SetTableFieldValues(TbDictionary dictionary){
    m_dictId.SetValue(dictionary.GetDictId());
    m_dictName.SetValue(dictionary.GetDictName());
    m_dictValue.SetValue(dictionary.GetDictValue());
}
void TbDictionaryDao::SelectByObject(TbDictionary &dictionary){
    m_dictId.SetValue(dictionary.GetDictId());
    bool isSuccess = SelectByKey();
    if (isSuccess){
        GetTableFieldValues(dictionary);
    }
}

bool TbDictionaryDao::SelectObjectsByCondition(vector<TbDictionaryDao> &selectedValueVector, string strSqlQueryWhere){
    return SelectObjectsByCondition(selectedValueVector, 0, 0, strSqlQueryWhere);
}

bool TbDictionaryDao::SelectObjectsByCondition(vector<TbDictionaryDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere){
    vector<string> tmpDetectedObjecIDs;
    TbDictionaryDao dictionary(pdsql);
    if (dictionary.GetKeyIdList(tmpDetectedObjecIDs, strSqlQueryWhere, iStartNumber, iRecordCount))
    {
        for (int iStart = 0; iStart < int(tmpDetectedObjecIDs.size()); iStart++)
        {
            dictionary.m_dictId.m_strValue = tmpDetectedObjecIDs[iStart];
            if (dictionary.SelectByKey())
            {
                selectedValueVector.push_back(dictionary);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}
