
#include "pdattribute.h"
#include <assert.h>
PDAttribute::PDAttribute()
{
}

PDAttribute::PDAttribute(const PDAttribute &dbAttribute)
{
    this->m_strKind = dbAttribute.m_strKind;
    this->m_strSqlField = dbAttribute.m_strSqlField;
    this->m_strValue = dbAttribute.m_strValue;
}

//void PDAttribute::operator = (const PDAttribute &dbAttribute)
//{
//	this->m_strKind = dbAttribute.m_strKind;
//	this->m_strSqlField = dbAttribute.m_strSqlField;
//	this->m_strValue = dbAttribute.m_strValue;
//}

PDAttribute::~PDAttribute()
{
}

void PDAttribute::CreateSQLWord(string strSqlField, string strKind)
{
    this->m_strSqlField = strSqlField;
    this->m_strKind = strKind;
    this->m_strValue = "";
}

void PDAttribute::SetValue(int value)
{
    assert(this->m_strKind == "int" || this->m_strKind == "char");
    QString tmp;
    this->m_strValue = tmp.sprintf("%d",value).toStdString();
}
void PDAttribute::SetValue(long long value){
    assert(this->m_strKind == "longlong");
    QString tmp;
    this->m_strValue = tmp.sprintf("%I64d", value).toStdString();
}

void PDAttribute::SetValue(float value)
{
    assert(this->m_strKind == "float");
    QString tmp;
    this->m_strValue = tmp.sprintf("%.6f", value).toStdString();
}

void PDAttribute::SetValue(double value)
{
    assert(this->m_strKind == "double");
    QString tmp;
    this->m_strValue = tmp.sprintf("%.6lf", value).toStdString();
}

void PDAttribute::SetValue(string value)
{
    assert(this->m_strKind == "string");
    this->m_strValue = value;
}

int PDAttribute::GetInt()
{
    if (this->m_strKind == "int" || this->m_strKind=="char")
        return atoi(this->m_strValue.data());
    else
        assert(0);
}

long long PDAttribute::GetLongLong(){
    if (this->m_strKind == "longlong"){
        return atoll(this->m_strValue.data());
    }
    else{
        assert(0);
    }
}


float PDAttribute::GetFloatOrDouble()
{
    if (this->m_strKind == "float" || this->m_strKind == "double")
        return atof(this->m_strValue.data());
    else{
        qWarning()<<"GetFloatOrDouble failed";
        assert(0);
    }
}

string PDAttribute::GetString()
{
    if (this->m_strKind == "string"){
        return this->m_strValue;
    }
    else{
        qWarning()<<"GetString failed";
        assert(0);
    }

}


