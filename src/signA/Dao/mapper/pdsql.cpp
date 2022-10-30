#include "pdsql.h"

PDSQL::PDSQL(void)
{
}

PDSQL::~PDSQL(void)
{
}

/**
 * @brief PDSQL::OpenSql 开启odbc
 * @return 1:开启odbc成功；-1:开启odbc失败；
 */
int PDSQL::OpenSql()
{
    //    ::CoInitialize(NULL); //初始化COM环境，但在qt中没有找到这个的定义，所以暂时注释
    m_mysql = QSqlDatabase::addDatabase("QODBC");
    m_mysql.setHostName(QString::fromStdString(m_strMyIp));
    m_mysql.setPort(m_iPort);
    m_mysql.setDatabaseName(QString::fromStdString(m_strMyDatabase));
    m_mysql.setUserName(QString::fromStdString(m_strMyUser));
    m_mysql.setPassword(QString::fromStdString(m_strMyPassword));
    bool isConnected = m_mysql.open();
    if (isConnected){
        cout<<"success connected!"<<endl;
        return 1;
    }
    else{
        cout<<"failed to connect! Please check for your db service"<< m_mysql.lastError().text().toStdString()<<endl;
        return -1;
    }
    return 0;
}

/**
 * @brief PDSQL::CloseMysql 关闭odbc连接
 */
void PDSQL::CloseMysql()
{
    m_mysql.close();
    cout<<"close success"<<endl;
}

/**
 * @brief PDSQL::SetMysql
 * @param strIp odbc中配置的mysql ip
 * @param strUser 用户名
 * @param strPassword 密码
 * @param strDatabase odbc名称
 * @param iPort odbc中配置的mysql端口号
 */
void PDSQL::SetMysql(string strIp, string strUser, string strPassword, string strDatabase, int iPort)
{
    m_strMyIp = strIp;
    m_strMyUser = strUser;
    m_strMyPassword = strPassword;
    m_strMyDatabase = strDatabase;
    m_iPort = iPort;
}

/**
 * @brief PDSQL::SelectMysql 执行select sql语句，将查询到的结果保存在selectedValueVector中，均为string类型
 * @param selectedValueVector 记录查询结果，为二维向量
 * @param strSqlQuery 查询的sql语句
 * @return
 */
bool PDSQL::SelectMysql(vector<vector<string> > &selectedValueVector, string strSqlQuery)
{
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    selectedValueVector.clear();//防止传进时有值
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        int iFields = res.record().count();
        while(res.next()){
            vector<string> tmp;
            for(int i =0;i<iFields;i++){
                string setValueTmp = res.value(i).toString().toStdString();
                tmp.push_back(setValueTmp=="(null)"?"":setValueTmp);
            }
            selectedValueVector.push_back(tmp);
        }
        if(res.isActive()){
            res.finish();
        }
        return true;
    }
    else{
        qWarning()<<"selectMysql failed"<<m_mysql.lastError().text();
    }
    return false;
}
/**
 * @brief PDSQL::SelectMysqlCount 返回查询到的结果的第一行的第一个元素，转为int，用于判断该表是否为空表时使用（该函数可以进一步修改）
 * || 该函数已经修改，在原项目中该函数只作为判断表是否为空表时使用，但当主键为字符串且第一个字符不为数字时，即使有元素也会返回0，改为直接返回1
 * @param iReceiveNumber 返回查询的结果，如果是0，代表该表为空，否则不为空（前提，数据库中表的设计第一元素为整数，且不从0开始）
 * @param strSqlQuery 执行的sql语句
 * @return true: sql语句执行成功；false: sql语句执行失败；
 */
bool PDSQL::SelectMysqlCount(int &iReceiveNumber, string strSqlQuery)
{
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        if(res.next()){
//            iReceiveNumber = atoi(res.value(0).toString().toStdString().data()); 修改，防止主键为字符串的情况
            iReceiveNumber = 1;
        }
        else{
            iReceiveNumber = 0;
        }
        return true;
    }
    else{
        qWarning()<<"SelectMysqlCount failed"+m_mysql.lastError().text();
    }
    return false;
}

/**
 * @brief PDSQL::SelectMysqlOneFiled 执行sql进行查询，返回第一列的所有元素（转为string）
 * @param selectedValue 保存第一列的所有元素（根据数据库表的设计，为主键元素）
 * @param strSqlQuery
 * @return
 */
bool PDSQL::SelectMysqlOneFiled(vector<string> &selectedValue, string strSqlQuery)
{
    selectedValue.clear();//防止传进时有值
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        while(res.next()){
            string setValueTmp = res.value(0).toString().toStdString();
            selectedValue.push_back(setValueTmp=="(null)"?"":setValueTmp);
        }
        if(res.isActive()){
            res.finish();
        }
        return true;
    }
    else{
        qWarning()<<"selectMysqlOneFiled failed"<<m_mysql.lastError().text();
    }
    return false;

}

/**
 * @brief PDSQL::InsertMysql 插入元素返回id
 * @param iReceiveNumber
 * @param strSqlQuery
 * @return
 */
bool PDSQL::InsertMysql(int &iReceiveNumber, string strSqlQuery)
{
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        iReceiveNumber = res.lastInsertId().toInt(); //lastInsertId返回最近插入行的id，只有当主键为int类型才有用，否则返回0
        return true;
    }
    else{
        qWarning()<<"InsertMysql failed"<<m_mysql.lastError().text();
    }
    return false;
}
/**
 * @brief PDSQL::UpdateMysql 更新元素
 * @param iReceiveNumber 更新的数量
 * @param strSqlQuery 更新语句
 * @return
 */
bool PDSQL::UpdateMysql(int &iReceiveNumber, string strSqlQuery)
{
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        iReceiveNumber = res.numRowsAffected();
        return true;
    }
    else{
        qWarning()<<"UpdateMysql failed"<<m_mysql.lastError().text();
    }
    return false;
}

/**
 * @brief PDSQL::DeleteMysql 删除元素
 * @param iReceiveNumber 删除元素的数目
 * @param strSqlQuery 删除sql语句
 * @return
 */
bool PDSQL::DeleteMysql(int &iReceiveNumber, string strSqlQuery)
{
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        iReceiveNumber = res.numRowsAffected();
        return true;
    }
    else{
        qWarning()<<"DeleteMysql failed"<<m_mysql.lastError().text();
    }
    return false;
}

/**
 * @brief PDSQL::QueryMysql 这个函数在原始项目中没有被调用过（可以尝试删除）
 * @param iReceiveNumber
 * @param strSqlQuery
 * @return
 */
bool PDSQL::QueryMysql(int &iReceiveNumber, string strSqlQuery)
{
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        iReceiveNumber = res.numRowsAffected();
        return true;
    }
    return false;
}
