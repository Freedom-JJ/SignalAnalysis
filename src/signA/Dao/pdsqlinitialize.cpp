#include "pdsqlinitialize.h"

PDSQL * global_pdsql;

//初始化全局数据库连接
void init_database(){
    global_pdsql = new PDSQL();
    string strIPp = "localhost";
    string strUser = "root";
    string strPassword = "kissme520";
    string strDatabase = "aricraft_db";
    int iPort = 3306;
    global_pdsql->SetMysql(strIPp,strUser,strPassword,strDatabase,iPort);
    global_pdsql->OpenSql();
    qInfo () <<"数据库是否支持事务操作：" << QSqlDatabase::database().driver()->hasFeature(QSqlDriver::Transactions);
}
