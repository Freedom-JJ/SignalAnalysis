#include "datautil.h"

string DataUtil::GetCurrentCStringTime(){

    QDateTime dateTime= QDateTime::currentDateTime();//获取系统当前的时间
    QString str = dateTime.toString("yyyy-MM-dd hh:mm:ss");//格式化时间
    std::string str2 = str.toStdString();
    return str2;
}
