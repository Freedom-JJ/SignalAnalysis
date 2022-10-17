/*
 * 数据库中表对应的属性类
 * 原作者：
 * 重构于2022/10/08,hit ljl
*/
#ifndef PDATTRIBUTE_H
#define PDATTRIBUTE_H
#include<string>
#include<QString>
#include<stdlib.h>
#include<QDebug>
using namespace std;

class PDAttribute
{
public:
    PDAttribute();
    PDAttribute(const PDAttribute &dbAttribute);
    //void operator=(const PDAttribute &dbAttribute);
    ~PDAttribute();
public:
    string m_strSqlField;//对应数据库中字段
    string m_strValue;//数据值
    void CreateSQLWord(string strSqlField, string strKind);//设置数据库字段和数据类型

    //格式转换
    void SetValue(double dValue);//设置double类型值
    void SetValue(float fValue);//设置float类型值
    void SetValue(int iValue);//设置int类型值
    void SetValue(long long iValue);//设置longlong类型值
    void SetValue(string strValue);//设置string类型值
    int GetInt();//获取int类型的值
    long long GetLongLong();//获取int类型的值
    float GetFloatOrDouble();//获取float或者double类型的值
    string GetString();//获取float或者double类型的值

private:
    string m_strKind;//数据类型
};

#endif // PDATTRIBUTE_H
