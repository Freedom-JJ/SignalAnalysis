#include "tool.h"

long long  mstoll(string str){
    long long  result;
    istringstream is(str);
    is >> result;
    return result;
}

string mlltos(long long ll){
    ostringstream os;
    os << ll;
    string result;
    istringstream is(os.str());
    is >> result;
    return result;
}


float  mstof(string str){
    float  result;
    istringstream is(str);
    is >> result;
    return result;
}

string mftos(float f){
    ostringstream os;
    os << f;
    string result;
    istringstream is(os.str());
    is >> result;
    return result;
}

double  mstod(string str){
    double  result;
    istringstream is(str);
    is >> result;
    return result;
}

string mdtos(double d)
{
    ostringstream os;
    os<<d;
    string result;
    istringstream is(os.str());
    is>>result;
    return result;
}

int mstoi(string str)
{
    int  result;
    istringstream is(str);
    is >> result;
    return result;
}

string mitos(int i)
{
    ostringstream os;
    os<<i;
    string result;
    istringstream is(os.str());
    is>>result;
    return result;
}

QString mstoqs(string s)
{
    return QString::fromStdString(s);
}

string mqstos(QString s)
{
    return s.toStdString();
}

string generateUuid()
{
    QUuid qUuid = QUuid::createUuid();
    QString strUuid = qUuid.toString();
    strUuid.remove("{").remove("}").remove("-");
    return strUuid.toStdString();
}
