#ifndef PDSQLINITIALIZE_H
#define PDSQLINITIALIZE_H
#include "pdsql.h"
#include <QSqlDatabase>
#include <QSqlDriver>

extern PDSQL* global_pdsql;


//初始化全局数据库连接
void init_database();
#endif // PDSQLINITIALIZE_H
