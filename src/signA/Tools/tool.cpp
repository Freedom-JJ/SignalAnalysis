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

string getCurrentTime()
{
    QDate D = QDate::currentDate();
    QTime T = QTime::currentTime();
    QString currentTime = QString("%2-%3-%4-%5:%6:%7").arg(D.year()).arg(D.month()).arg(D.day()).arg(T.hour()).arg(T.minute()).arg(T.second());
    return currentTime.toStdString();
}
