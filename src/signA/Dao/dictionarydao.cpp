#include "dictionarydao.h"

DictionaryDao::DictionaryDao()
{

}

vector<Dictionary *> DictionaryDao::listDictionaries(string query_condition)
{
    vector<vector<string> > query_result;
    string query_sql = "select * from dictionary "+query_condition;
    qInfo()<<mstoqs(query_sql);
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

int DictionaryDao::deleteDictionaryById(long long id)
{
    string delete_sql = "delete from dictionary where id = '" + mlltos(id)+"'";
    int delete_num = 0;
    global_pdsql->DeleteMysql(delete_num,delete_sql);
    qInfo()<<"删除字典记录"<<mstoqs(delete_sql);
    return delete_num;
}

long long DictionaryDao::insertDictionary(Dictionary* dictionary,bool insert_id)
{
    int id = 0;
    if(!dictionary){
        return -1;//返回-1，代表插入的字典为空指针
    }
    QString sql;
    if(insert_id){
        sql = "insert into dictionary(`id`,`dictName`,`dictValue`) values ('%1','%2','%3')";
        sql.arg(mstoqs(mlltos(dictionary->getId()))).arg(mstoqs(dictionary->getDictName())).arg(mstoqs(dictionary->getDictValue()));
    }
    else{
        sql = "insert into dictionary(`dictName`,`dictValue`) values ('%1','%2')";
        sql = sql.arg(mstoqs(dictionary->getDictName())).arg(mstoqs(dictionary->getDictValue()));
    }
    qInfo()<<"插入字典记录"<<sql;
    //执行插入
    global_pdsql->InsertMysql(id,mqstos(sql));
    return id;
}

long long DictionaryDao::updateDictionary(Dictionary* dictionary)
{
    int affected_num = 0;
    if(!dictionary){
        return -1;
    }
    QString sql;
    sql = "update dictionary set dictName = '%1',dictValue = '%2' where id = '%3'";
    sql = sql.arg(mstoqs(dictionary->getDictName())).arg(mstoqs(dictionary->getDictValue())).arg(mstoqs(mlltos(dictionary->getId())));
    qInfo()<< "更新字典记录"<<sql;
    //执行更新命令
    global_pdsql->UpdateMysql(affected_num,mqstos(sql));
    if(affected_num==0){
        return -1;
    }
    else{
        return dictionary->getId();
    }
}
