#ifndef TOOL_H
#define TOOL_H
#include <string>
#include <sstream>
#include <QString>
#include <QUuid> //非Windows平台且系统不存在/dev/urandom设备,由于生成的UUID由qrand()种子获得,所以产生的UUID不保证具有唯一性
#include <QDate>
#include <QTime>
using namespace std;

long long  mstoll(string str);

string mlltos(long long ll);


float  mstof(string str);

string mftos(float f);

double  mstod(string str);
string mdtos(double d);

int mstoi(string str);
string mitos(int i);

QString mstoqs(string s);
string mqstos(QString s);

string generateUuid();//生成唯一码

string getCurrentTime();//获取当前时间


#endif // TOOL_H
