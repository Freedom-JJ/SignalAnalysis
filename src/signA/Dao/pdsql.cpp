#include "pdsql.h"

PDSQL::PDSQL(void)
{
}

PDSQL::~PDSQL(void)
{
}


int PDSQL::OpenSql()
{
    m_mysql = QSqlDatabase::addDatabase("QODBC");
    m_mysql.setHostName(QString::fromStdString(m_strMyIp));
    m_mysql.setPort(m_iPort);
    m_mysql.setDatabaseName(QString::fromStdString(m_strMyDatabase));
    m_mysql.setUserName(QString::fromStdString(m_strMyUser));
    m_mysql.setPassword(QString::fromStdString(m_strMyPassword));
    bool isConnected = m_mysql.open();
    if (isConnected){
        qInfo("success connected!");
        return 1;
    }
    else{
        qCritical()<<"failed to connect! Please check for your db service"<< m_mysql.lastError().text();
        return 0;
    }
}


void PDSQL::CloseMysql()
{
    m_mysql.close();
    qInfo()<<"close success";
}


void PDSQL::SetMysql(string strIp, string strUser, string strPassword, string strDatabase, int iPort)
{
    m_strMyIp = strIp;
    m_strMyUser = strUser;
    m_strMyPassword = strPassword;
    m_strMyDatabase = strDatabase;
    m_iPort = iPort;
}


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
        qCritical()<<"pdsql.cpp SelectMysql selectMysql failed";
    }
    return false;
}


bool PDSQL::SelectMysqlCount(int &iReceiveNumber, string strSqlQuery)
{
    iReceiveNumber = 0;
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        while (res.next()) {
            iReceiveNumber +=1;
        }
        return true;
    }
    else{
        qCritical()<<"SelectMysqlCount failed";
        return false;
    }
}




bool PDSQL::InsertMysql(int &iReceiveNumber, string strSqlQuery)
{
    if(!m_mysql.isOpen()){
        OpenSql();
    }
    QSqlQuery res = QSqlQuery(m_mysql);
    bool execSuccess = res.exec(QString::fromStdString(strSqlQuery));
    if(execSuccess){
        iReceiveNumber = res.lastInsertId().toInt(); //lastInsertId返回最近插入行的id，只有当主键为int类型才有用，否则返回0
        if(iReceiveNumber == 0){
            qWarning()<<"the primary key should be int";
        }
        return true;
    }
    else{
        qCritical()<<"InsertMysql failed";
        return false;
    }
}


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
        qCritical()<<"UpdateMysql failed";
    }
    return false;
}


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
        qCritical()<<"DeleteMysql failed";
    }
    return false;
}
