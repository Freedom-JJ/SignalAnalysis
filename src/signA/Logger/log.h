#ifndef LOG_H
#define LOG_H

#include <QMessageLogger>
#include <QFile>
#include <qlogging.h>
#include <QTextStream>
#include <QDateTime>
#include <QMutex>
#include <QDebug>

void logSysInit(QString filePath);
void logSysInit();

#endif // LOG_H
