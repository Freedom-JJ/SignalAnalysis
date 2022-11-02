
#include "UUIDUtil.h"

QString UUIDUtil::GetUUID(){
    QUuid uuid = QUuid::createUuid();
//    uuidstr = uuid.toString();
    QString str = uuid.toString();
    return str.mid(1,str.size()-2);
}
