/*
 * 数据库的CUDR接口实现
 * 原作者：
 * 重构于2022/10/08，hit ljl
*/
#ifndef PDSQL_H
#define PDSQL_H

#include <QSqlDatabase>
#include<QSqlError>
#include<QMessageBox>
#include<QDebug>
#include<QSqlQuery>
#include<QSqlRecord>
#include<QStringList>
#include<vector>
#include<string>
#include<QString>
#include<iostream>
#include<stdlib.h>
using namespace std;
class PDSQL
{
public:
    PDSQL(void);
    ~PDSQL(void);
    //数据库连接
    QSqlDatabase m_mysql;
    int OpenSql();
    void CloseMysql();
    void SetMysql(string strIp, string strUser, string strPassword, string strDatabase, int iPort = 3306);

    bool SelectMysql(vector<vector<string>> &selectedValueVector, string strSqlQuery);
    bool SelectMysqlCount(int &iReceiveNumber, string strSqlQuery);
    bool SelectMysqlOneFiled(vector<string> &selectedValue, string strSqlQuery);
    bool InsertMysql(int &iReceiveNumber, string strSqlQuery);
    bool UpdateMysql(int &iReceiveNumber, string strSqlQuery);
    bool DeleteMysql(int &iReceiveNumber, string strSqlQuery);
    bool QueryMysql(int &iReceiveNumber, string strSqlQuery);

private:
    //连接数据库的ip,用户名，密码，ODBC连接名称
    string m_strMyIp, m_strMyUser, m_strMyPassword, m_strMyDatabase;
    int m_iPort;
};

#endif // PDSQL_H
