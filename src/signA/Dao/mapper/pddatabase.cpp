#include "pddatabase.h"

/**
 * @brief PDDatabase::PDDatabase 初始化，传入数据库操作接口
 * @param db 数据库操作接口
 */
PDDatabase::PDDatabase(PDSQL *pdsql)
{
    this->pdsql = pdsql;
    m_iInsertCount = 0; //初始化，设置当前表中已经插入的属性个数
}

/**
 * @brief PDDatabase::operator = 操作符重载，从浅拷贝转为深拷贝
 * @param dbDatabase 新的PDDatabase
 */
void PDDatabase::operator = (const PDDatabase &dbDatabase)
{
    for (int i = 0; i < int(m_allFieldsVector.size()); i++)
    {
        this->m_allFieldsVector[i]->m_strValue = dbDatabase.m_allFieldsVector[i]->m_strValue;
    }
}

/**
 * @brief PDDatabase::~PDDatabase 析构函数
 */
PDDatabase::~PDDatabase()
{
    m_key = nullptr;
    for (int i = 0; i < int(m_allFieldsVector.size()); i++)
    {
        m_allFieldsVector[i] = nullptr;
    }
    //clear函数并不会真正清空vector，只是将size转为0，真正的释放要在析构函数中
    m_allFieldsVector.clear();
}

/**
 * @brief PDDatabase::SetVectorAndField 用于初始化表的属性
 * @param strSqlword 数据库表的字段的名称
 * @param strKind 数据库表的字段的数据类型
 * @param word 类中对应数据库表中字段的对象
 */
void PDDatabase::SetVectorAndField(string strSqlword, string strKind, PDAttribute &word)
{
    //为类中的对象赋值
    word.CreateSQLWord(strSqlword,strKind);
    //当前类中的字段数量
    m_iInsertCount++;
    //当前类的总字段集合
    m_allFieldsVector.push_back(&word);
}

/**
 * @brief PDDatabase::ClearObjectExceptId 清空当前类的字段集合
 */
void PDDatabase::ClearObjectExceptId()
{
    for(int i = 1;i< int(m_allFieldsVector.size());i++){
        m_allFieldsVector[i]->m_strValue="";
    }
}

/**
 * @brief PDDatabase::SelectByKey 判断当前表中对应的对象是否存在于数据库中
 * @return
 */
bool PDDatabase::SelectByKey()
{
    return SelectByKey(m_allFieldsVector);
}

/**
 * @brief PDDatabase::SelectByKey 根据select中的属性值，判断数据库中是否存在符合的对象
 * @param select 参与筛选的属性
 * @return 是否找到符合条件的记录
 */
bool PDDatabase::SelectByKey(vector<PDAttribute *> select)
{
    vector<vector<string>> selectedValueByKey;
    int iStartNumber = 0;
    int iRecordCount = 0;
    string strSqlQueryWhere;
    //如果查询条件为空，则按照主键进行查询
    if (m_strSelectOneObjectByCondition.empty())
    {
        strSqlQueryWhere = m_key->m_strSqlField + " = '" + m_key->m_strValue + "'";
    }
    else
    {
        strSqlQueryWhere = m_strSelectOneObjectByCondition;
    }
    bool endResult;
    if (select.size() == 0)
    {
        return false;
    }
    else
    {
        //查值
        endResult = DBSelect(select, strSqlQueryWhere, iStartNumber, iRecordCount, selectedValueByKey);
        //赋值
        ClearObjectExceptId();
        if (selectedValueByKey.size() != 0)
        {
            for (int i = 0; i < int(selectedValueByKey[0].size()); i++)
            {
                select[i]->m_strValue = selectedValueByKey[0][i];
            }
        }
    }

    return endResult;
}

/**
 * @brief PDDatabase::SelectOneObjectByCondition 根据条件查询，一般用这个
 * @param strSqlQueryWhere where后的条件语句，例如 id=1,a=2
 * @return 是否存在符合条件的记录
 */
bool PDDatabase::SelectOneObjectByCondition(string strSqlQueryWhere)
{
    m_strSelectOneObjectByCondition = strSqlQueryWhere;
    bool endResult = SelectByKey(m_allFieldsVector);
    m_strSelectOneObjectByCondition = "";//在查询后清空
    return endResult;
}

/**
 * @brief PDDatabase::UpdateByKey 根据主键更新，除主键外的所有字段
 * @return
 */
bool PDDatabase::UpdateByKey()
{
    //感觉这里传个空vector都行
    return UpdateByKey(m_allFieldsVector);
}

/**
 * @brief PDDatabase::UpdateByKey 根据主键更新，更新update中的属性
 * @param update 待更新的属性
 * @return 是否更新成功
 */
bool PDDatabase::UpdateByKey(vector<PDAttribute *> update)
{
    int iUpdatedNumber; //为了调用函数而定义，正常情况下值为1
    bool bIsUpdateKeyId = false;
    if (!m_key->m_strValue.empty())
    {
        qWarning()<<"updateByKey the primary key should not be empty";
        return false;
    }
    string strSqlQueryWhere = m_key->m_strSqlField + " = '" + m_key->m_strValue + "'";
    return DBUpdate(update, iUpdatedNumber, strSqlQueryWhere, bIsUpdateKeyId);
}

/**
 * @brief PDDatabase::UpdateByCondition 根据条件更新除主键外所有属性
 * @param strSqlQueryWhere 查询条件语句
 * @param bIsUpdateKeyId 是否更新主键，这个参数似乎没有用，不过默认为false,之后不用就删了
 * @return 是否更新成功
 */
bool PDDatabase::UpdateByCondition(string strSqlQueryWhere, bool bIsUpdateKeyId)
{
    int iUpdatedNumber;
    return UpdateByCondition(m_allFieldsVector, iUpdatedNumber, strSqlQueryWhere, bIsUpdateKeyId);
}

/**
 * @brief PDDatabase::UpdateByCondition 根据条件更新
 * @param iUpdatedNumber 更新记录数目
 * @param strSqlQueryWhere 条件语句
 * @param bIsUpdateKeyId 是否包含主键，这个参数似乎没有用，不过默认为false,之后不用就删了
 * @return 是否更新成功
 */
bool PDDatabase::UpdateByCondition(int &iUpdatedNumber, string strSqlQueryWhere, bool bIsUpdateKeyId)
{
    return UpdateByCondition(m_allFieldsVector, iUpdatedNumber, strSqlQueryWhere, bIsUpdateKeyId);
}

/**
 * @brief PDDatabase::UpdateByCondition 根据条件更新
 * @param update 待更新的属性
 * @param strSqlQueryWhere 条件语句
 * @param bIsUpdateKeyId 待更新的属性中是否包含主键，这个设置错误也没关系，因为DBUpdate会跳过主键
 * @return 是否更新成功
 */
bool PDDatabase::UpdateByCondition(vector<PDAttribute *> update, string strSqlQueryWhere, bool bIsUpdateKeyId)
{
    int iUpdatedNumber;
    return UpdateByCondition(update, iUpdatedNumber, strSqlQueryWhere, bIsUpdateKeyId);
}

/**
 * @brief PDDatabase::UpdateByCondition 根据条件更新
 * @param update 待更新的属性
 * @param iUpdatedNumber 保存更新记录的数目
 * @param strSqlQueryWhere  条件语句
 * @param bIsUpdateKeyId 待更新的属性中是否包含主键
 * @return 是否更新成功
 */
bool PDDatabase::UpdateByCondition(vector<PDAttribute *> update, int &iUpdatedNumber, string strSqlQueryWhere, bool bIsUpdateKeyId)
{
    return DBUpdate(update, iUpdatedNumber, strSqlQueryWhere, bIsUpdateKeyId);
}

bool PDDatabase::DeleteByKey()
{
    string strSqlQueryWhere = m_key->m_strSqlField + " = '" + m_key->m_strValue + "'";
    return DeleteByCondition(strSqlQueryWhere);
}

bool PDDatabase::DeleteByCondition(string strSqlQueryWhere)
{
    int iDeletedNumber;
    return DeleteByCondition(iDeletedNumber, strSqlQueryWhere);
}

bool PDDatabase::DeleteByCondition(int &iDeletedNumber, string strSqlQueryWhere)
{
    return DBDelete(iDeletedNumber,strSqlQueryWhere);
}

bool PDDatabase::Insert(bool bIsInsertKeyId)
{
    int iGetFirstId;
    return Insert(iGetFirstId, bIsInsertKeyId);
}

/**
 * @brief PDDatabase::Insert 插入
 * @param iGetFirstId 返回插入id
 * @param bIsInsertKeyId 是否插入主键
 * @return
 */
bool PDDatabase::Insert(int &iGetFirstId, bool bIsInsertKeyId)
{
    if (DBInsert(iGetFirstId, bIsInsertKeyId))
    {
        //这个值适合于主键为int类型，如果主键为字符串，那iGetFirstId为0
        QString tmp;
        m_key->m_strValue = tmp.sprintf("%d", iGetFirstId).toStdString();
        return true;
    }
    else
    {
        return false;
    }
}

bool PDDatabase::JudgeTableIsNull()
{
    int iGetDataCountNumber;
    return JudgeTableIsNull(iGetDataCountNumber);
}

bool PDDatabase::JudgeTableIsNull(int &iGetDataCountNumber)
{
    m_strSqlQuery = "SELECT COUNT(*) FROM " + m_strTableName;
    int res = pdsql->SelectMysqlCount(iGetDataCountNumber, m_strSqlQuery);
    if (res > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool PDDatabase::GetKeyId(string &key, string strSqlQueryWhere)
{
    int iStartNumber = 0;
    int iRecordCount = 2;
    vector<string> keyList;
    if (GetKeyIdList(keyList, strSqlQueryWhere, iStartNumber, iRecordCount))
    {
        key = keyList[0];
        return true;
    }
    else
    {
        key = "";
        return false;
    }
}
/**
 * @brief PDDatabase::GetKeyIdList 返回主键列表
 * @param keyList 主键列表，类型string
 * @param strSqlQueryWhere
 * @param iStartNumber
 * @param iRecordCount
 * @return
 */
bool PDDatabase::GetKeyIdList(vector<string> &keyList, string strSqlQueryWhere, int iStartNumber, int iRecordCount)
{
    m_strSqlQuery = "SELECT " + m_key->m_strSqlField + " FROM " + m_strTableName + " WHERE " + strSqlQueryWhere;
    string strStartNumber = "";
    string strRecordCount = "";
    QString tmp;
    tmp.sprintf("%d", iStartNumber);
    strStartNumber = tmp.toStdString();
    tmp.sprintf("%d", iRecordCount);
    strRecordCount = tmp.toStdString();
    if (iRecordCount != 0)
    {
        m_strSqlQuery += " LIMIT " + strStartNumber + "," + strRecordCount;
    }

    qDebug()<<"........................."<<QString::fromStdString(m_strSqlQuery);
    int res = pdsql->SelectMysqlOneFiled(keyList, m_strSqlQuery);
    if (res > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/**
 * @brief PDDatabase::GetKeyId
 * @param key
 * @param part initializer_list是一种模板类型
 * @return
 */
bool PDDatabase::GetKeyId(string &key, initializer_list<PDAttribute *> part)
{
    string strSqlQueryWhere = "";
    if (part.size() == 0)
    {
        qWarning()<<"GetKeyId part should not be empty";
        return false;
    }
    for (auto ptr = part.begin(); ptr != part.end(); ptr++)
    {
        strSqlQueryWhere += (*ptr)->m_strSqlField + "=" + (*ptr)->m_strValue;
    }
    return GetKeyId(key, strSqlQueryWhere);
}

bool PDDatabase::GetKeyIdList(vector<string> &keyList, initializer_list<PDAttribute *> part, int iStartNumber, int iRecordCount)
{
    string strSqlQueryWhere = "";
    if (part.size() == 0)
    {
        qWarning()<<"GetKeyId part should not be empty";
        return false;
    }
    for (auto ptr = part.begin(); ptr != part.end(); ptr++)
    {
        strSqlQueryWhere += (*ptr)->m_strSqlField + "=" + (*ptr)->m_strValue;
    }
    return GetKeyIdList(keyList, strSqlQueryWhere, iStartNumber, iRecordCount);
}

bool PDDatabase::SelectObjectsByCondition(vector<vector<string> > &selectedValueVector, string strSqlQueryWhere)
{
    int iStartNumber = 0; int iRecordCount = 0;
    return SelectObjectsByCondition(selectedValueVector, iStartNumber, iRecordCount, strSqlQueryWhere);
}

bool PDDatabase::SelectObjectsByCondition(vector<vector<string> > &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere)
{
    bool endResult = DBSelect(m_allFieldsVector, strSqlQueryWhere, iStartNumber, iRecordCount, selectedValueVector);
    return endResult;
}

/**
 * @brief PDDatabase::DBSelect
 * @param selectVector 要查询的属性集合
 * @param strSqlQueryWhere where后的条件语句，例如：id=1,a=2
 * @param iStartNumber 分页查询时使用，忽略多少（这么写会造成性能损失，可以使用inner join查询id后在查询需要的属性，但这个项目不需要考虑这个）
 * @param iRecordCount 查询的条数
 * @param selectedValueVector 保存查询结果
 * @return
 */
bool PDDatabase::DBSelect(vector<PDAttribute *> selectVector, string strSqlQueryWhere, int iStartNumber, int iRecordCount, vector<vector<string> > &selectedValueVector)
{
    m_strSqlQuery = "SELECT";
    int i;
    bool bResult;
    //拼接查询字段
    for(i=0;i<int(selectVector.size())-1;i++){
        m_strSqlQuery += selectVector[i]->m_strSqlField+",";
    }
    m_strSqlQuery += selectVector[i]->m_strSqlField+" FROM "+ this->m_strTableName;
    if (strSqlQueryWhere != ""){
        m_strSqlQuery += " WHERE " + strSqlQueryWhere;
    }
    //拼接分页语句，建议使用子查询实现，inner join ,这样的性能损失比较大
    if(iRecordCount!=0){
        QString strStartNumber;
        QString strRecordCount;
        strStartNumber.sprintf("%d",iStartNumber);
        strRecordCount.sprintf("%d",iRecordCount);
        m_strSqlQuery += " LIMIT " + strStartNumber.toStdString() + "," + strRecordCount.toStdString();
    }
    //底层查询
    bResult = pdsql->SelectMysql(selectedValueVector,m_strSqlQuery);
    return bResult;
}

/**
 * @brief PDDatabase::DBUpdate 更新数据库，如果执行错误会返回(注意，会对输出的属性进行检查是否包含主键元素，如果包含主键元素，并且主键元素不是第一个会报错)
 * @param update 待更新的属性
 * @param iUpdatedNumber 更新的行数
 * @param strSqlQueryWhere 查询语句
 * @param isUpdatedKeyId 更新属性中是否包含主键（默认为第一个元素）
 * @return 更新语句是否正确执行
 */
bool PDDatabase::DBUpdate(vector<PDAttribute *> update, int &iUpdatedNumber, string strSqlQueryWhere, bool bIsUpdateKeyId)
{
    if (update.size() == 0){
        iUpdatedNumber = 0;
        return false;
    }
    //是否更新的属性中是否包含主键
    int i = 0;
    if(bIsUpdateKeyId){
        //此时update更新的是所有字段，但bIsUpdateKeyId为false，
        //所以应该跳过第一个字段。若恰好传入字段等于总字段个数，则为调用函数输入错误，概不负责。
        i = 1;
    }
    else{
        if (int(update.size()) == m_iInsertCount)
        {
            //此时update更新的是所有字段，但bIsUpdateKeyId为false，
            //所以应该跳过第一个字段。若恰好传入字段等于总字段个数，则为调用函数输入错误，概不负责。
            i = 1;
        }
        else
        {
            //此时update更新的是传入字段，但bIsUpdateKeyId为false。
            //所以不能跳过第一个字段，但需要检测传入字段是否含有Id字段。
            i = 0;
            for (int iCheck = 0; iCheck < int(update.size()); iCheck++)
            {
                if (update[iCheck]->m_strSqlField==m_key->m_strSqlField)
                {
                    qWarning()<<"you shouldn't update the primary key";
                    return false;
                }
            }
        }
    }

    //拼接更新字段
    m_strSqlQuery = "UPDATE " + m_strTableName + " SET ";
    for (; i < int(update.size()) -1 ; i++)
    {
        if (update[i]->m_strValue == "")
        {
            update[i]->m_strValue = "NULL";
        }
        m_strSqlQuery += update[i]->m_strSqlField + " = '" + update[i]->m_strValue + "',";
    }
    m_strSqlQuery += update.back()->m_strSqlField + " = '" + update.back()->m_strValue;

    //拼接更新条件
    m_strSqlQuery += " WHERE " + strSqlQueryWhere;

    bool bResult = pdsql->UpdateMysql(iUpdatedNumber, m_strSqlQuery);
    return bResult;
}

/**
 * @brief PDDatabase::DBDelete 数据库删除
 * @param iDeletedNumber 返回删除条目的个数
 * @param strSqlQueryWhere 删除语句
 * @return 返回删除语句是否执行成功
 */
bool PDDatabase::DBDelete(int &iDeletedNumber, string strSqlQueryWhere)
{
    m_strSqlQuery = "DELETE FROM " + m_strTableName;

    m_strSqlQuery += " WHERE " + strSqlQueryWhere;
    bool bResult = pdsql->DeleteMysql(iDeletedNumber, m_strSqlQuery);
    return bResult;
}

/**
 * @brief PDDatabase::DBInsert 插入当前类中保存的对象
 * @param iGetFirstId 插入返回的主键，如果主键是数字类型，否则为0
 * @param bIsInsertKeyId 是否插入主键属性，因为对于某些表它的主键是自增的，
 * @return
 */
bool PDDatabase::DBInsert(int &iGetFirstId, bool bIsInsertKeyId)
{
    int iField; int iValue;
    m_strSqlQuery = "INSERT INTO " + m_strTableName + "(";
    if (bIsInsertKeyId)
    {
        if (m_key->m_strValue=="")
        {
            qWarning()<<"the key is null, you can't use the primary key";
            return false;
        }
        else
        {
            iField = 0; iValue = 0;
        }
    }
    else
    {
        iField = 1; iValue = 1;
    }
    //拼接插入字段，最后处理逗号
    for (; iField < int(m_allFieldsVector.size()); iField++)
    {
        //值不为空则插入
        if (!m_allFieldsVector[iField]->m_strValue.empty())
        {
            m_strSqlQuery += m_allFieldsVector[iField]->m_strSqlField + ",";
        }
    }

    m_strSqlQuery = m_strSqlQuery.substr(0,m_strSqlQuery.size()-1);//删除最后的逗号
    m_strSqlQuery += ") VALUES ";
    m_strSqlQuery += "(";
    //拼接插入值，最后处理逗号
    for (; iValue < int(m_allFieldsVector.size()); iValue++)
    {
        if (!m_allFieldsVector[iValue]->m_strValue.empty())
        {
            m_strSqlQuery += "'" + m_allFieldsVector[iValue]->m_strValue + "',";
        }
    }
    m_strSqlQuery = m_strSqlQuery.substr(0,m_strSqlQuery.size()-1);//删除最后的逗号
    m_strSqlQuery += ")";
    qDebug()<<"db insert sql: "<<QString::fromStdString(m_strSqlQuery);
    bool bResult = pdsql->InsertMysql(iGetFirstId, m_strSqlQuery);
    return bResult;
}



