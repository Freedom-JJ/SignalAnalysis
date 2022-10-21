/*
 * 数据库表的父类，实现数据库基础功能
 * 原作者：
 * 重构于2022/10/10, hit ljl
*/
#ifndef PDDATABASE_H
#define PDDATABASE_H
#include "pdsql.h"
#include "pdattribute.h"

class PDDatabase
{
public:
    PDDatabase(PDSQL* pdsql);
    void operator=(const PDDatabase &dbDatabase); //运算符重载，和PDDatabase &dbDatabase相比，这个不能够连续赋值，如a=b=c;
    ~PDDatabase();
    string m_strTableName;//每个类对应的表格名
    int m_iInsertCount;//对应表中字段个数,暂时无用
    PDAttribute *m_key;//主键，这个主键需要从数据库中获取，因为对于某些表它的主键是自增的，当插入元素时，无法获取其主键

    //设置Vector指针容器和字段类型、名称
    void SetVectorAndField(string strSqlword, string strKind, PDAttribute &word);
    //清空对象
    void ClearObjectExceptId();

    //--------------------------查询----------------------------------
    //通过主键查询
    bool SelectByKey();
    bool SelectByKey(vector<PDAttribute *> select);
    //查询符合条件的第一个对象
    bool SelectOneObjectByCondition(string strSqlQueryWhere);

    //--------------------------更新----------------------------------
    //通过主键更新
    bool UpdateByKey();
    bool UpdateByKey(vector<PDAttribute *> update);
    //通过条件更新
    bool UpdateByCondition(string strSqlQueryWhere, bool bIsUpdateKeyId = false);
    bool UpdateByCondition(int &iUpdatedNumber, string strSqlQueryWhere, bool bIsUpdateKeyId = false);
    bool UpdateByCondition(vector<PDAttribute *> update, string strSqlQueryWhere, bool bIsUpdateKeyId = false);
    bool UpdateByCondition(vector<PDAttribute *> update, int &iUpdatedNumber, string strSqlQueryWhere, bool bIsUpdateKeyId = false);

    //--------------------------删除----------------------------------
    //通过主键删除
    bool DeleteByKey();
    //通过条件删除
    bool DeleteByCondition(string strSqlQueryWhere);
    bool DeleteByCondition(int &iDeletedNumber, string strSqlQueryWhere);

    //--------------------------插入----------------------------------
    //插入
    bool Insert(bool bIsInsertKeyId = false);
    bool Insert(int &iGetFirstId, bool bIsInsertKeyId = false);

    //--------------------------其他----------------------------------
    //判断是否存在数据
    bool JudgeTableIsNull();
    bool JudgeTableIsNull(int &iGetDataCountNumber);

    //通过条件获取主键
    bool GetKeyId(string &key, string strSqlQueryWhere);
    bool GetKeyIdList(vector<string> &keyList, string strSqlQueryWhere, int iStartNumber = 0, int iRecordCount = 0);
    bool GetKeyId(string &key, initializer_list<PDAttribute *> part);//weice
    bool GetKeyIdList(vector<string> &keyList, initializer_list<PDAttribute *> part, int iStartNumber = 0, int iRecordCount = 0);//weice


protected:
    //查询所有符合条件的对象，需要重载使用（没用空指针。感觉实现不了）
    bool SelectObjectsByCondition(vector<vector<string>> &selectedValueVector, string strSqlQueryWhere = "");
    bool SelectObjectsByCondition(vector<vector<string>> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere = "");

public:
    vector<PDAttribute *> m_allFieldsVector;//存放全部字段指针。
    PDSQL* pdsql;//数据库连接
    string m_strSqlQuery = "";//数据库操作语句insql_str
    string m_strSelectOneObjectByCondition = "";//判断查询是按主键查还是按条件,更新时是不能更新主键的，插入时对于主键自增，也是不能插入的（没弄明白这个变量为什么出现在这里）
    //类内调用增删查改函数
    bool DBSelect(vector<PDAttribute *> selectVector, string strSqlQueryWhere, int iStartNumber, int iRecordCount, vector<vector<string>> &selectedValueVector);
    bool DBUpdate(vector<PDAttribute *> update, int &iUpdatedNumber, string strSqlQueryWhere, bool bIsUpdateKeyId);
    bool DBDelete(int &iDeletedNumber, string strSqlQueryWhere);
    bool DBInsert(int &iGetFirstId, bool bIsInsertKeyId);
};

#endif // PDDATABASE_H
