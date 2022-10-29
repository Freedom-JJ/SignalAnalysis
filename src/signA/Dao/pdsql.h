#ifndef PDSQL_H
#define PDSQL_H


#include <QSqlDatabase>
#include<QSqlError>
#include<QDebug>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QStringList>
#include<vector>
#include<string>
#include<QString>
#include<iostream>
#include<stdlib.h>
#include "../Logger/log.h"

using namespace std;

class PDSQL
{
public:
    PDSQL(void);
    ~PDSQL(void);
    //数据库连接
    QSqlDatabase m_mysql;


    /**
     * @brief OpenSql 开启数据库
     * @return 0 开启失败；1 开启成功
     */
    int OpenSql();


    /**
     * @brief CloseMysql 关闭数据库
     */
    void CloseMysql();



    /**
     * @brief SetMysql 设置数据库参数
     * @param strIp ip
     * @param strUser user
     * @param strPassword password
     * @param strDatabase odbc连接名称
     * @param iPort 端口号
     */
    void SetMysql(string strIp, string strUser, string strPassword, string strDatabase, int iPort = 3306);



    /**
     * @brief SelectMysql 根据sql查询语句，返回符合条件所有的记录（不要采用select * from 这种语句来查询结果，返回的字段顺序是不确定的）
     * @param selectedValueVector 存储查询结果
     * @param strSqlQuery sql查询语句
     * @return false: sql查询语句执行失败，说明sql语句出现错误
     */
    bool SelectMysql(vector<vector<string> > &selectedValueVector, string strSqlQuery);



    /**
     * @brief SelectMysqlCount 查询符合条件的记录数目
     * @param iReceiveNumber 查询到符合条件的记录数目
     * @param strSqlQuery sql查询语句
     * @return false: sql查询语句执行失败，说明sql语句出现错误
     */
    bool SelectMysqlCount(int &iReceiveNumber, string strSqlQuery);



    /**
     * @brief InsertMysql 插入数据库，返回主键id（数据库的表设计默认采用自增主键）
     * @param iReceiveNumber 返回主键id
     * @param strSqlQuery sql插入语句
     * @return false: sql插入语句执行失败，说明sql语句出现错误
     */
    bool InsertMysql(int &iReceiveNumber, string strSqlQuery);


    /**
     * @brief UpdateMysql 更新数据库
     * @param iReceiveNumber 返回更新记录的数量
     * @param strSqlQuery sql更新语句
     * @return false: sql更新语句执行失败，说明sql语句出现错误
     */
    bool UpdateMysql(int &iReceiveNumber, string strSqlQuery);


    /**
     * @brief DeleteMysql 删除数据库记录
     * @param iReceiveNumber 返回删除记录的数目
     * @param strSqlQuery sql删除语句
     * @return false: sql删除语句执行失败，说明sql语句出现错误
     */
    bool DeleteMysql(int &iReceiveNumber, string strSqlQuery);

private:
    //连接数据库的ip,用户名，密码，ODBC连接名称
    string m_strMyIp, m_strMyUser, m_strMyPassword, m_strMyDatabase;
    int m_iPort;
};

#endif // PDSQL_H
