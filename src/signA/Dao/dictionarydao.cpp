#include "dictionarydao.h"

DictionaryDao::DictionaryDao()
{

}

vector<Dictionary *> DictionaryDao::listDictionaries(string query_condition)
{
    vector<vector<string> > query_result;
    string query_sql = "select * from dictionary "+query_condition;
    global_pdsql->SelectMysql(query_result,query_sql);
    vector<Dictionary*> dictionaries;
    for(vector<string> dictionary_attributes:query_result){
        Dictionary* dictionary = new Dictionary(dictionary_attributes);
        dictionaries.push_back(dictionary);
    }
    return dictionaries;
}

Dictionary *DictionaryDao::getDictionaryById(long long id)
{
    string query_condition = "where id ='"+ mlltos(id) + "'";
    vector<Dictionary*> dictionaries = listDictionaries(query_condition);
    if(dictionaries.size()==0){
        return nullptr;
    }
    else{
        return dictionaries[0];
    }
}

vector<Dictionary *> DictionaryDao::getDictionarysByDictName(string dictName)
{
    string query_condition = "where dictName = '"+dictName+"'";
    vector<Dictionary*> dictionaries = listDictionaries(query_condition);
    return dictionaries;
}
