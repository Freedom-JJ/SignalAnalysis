#include "uuidutil.h"

Result UUIDUtil::GetUUID(string &uuid){

    QUuid id = QUuid::createUuid();
    QString strId = id.toString();
    strId.remove("{").remove("}");
    uuid = strId.toStdString();
    return Result(true,"成功生成uuid");
}
