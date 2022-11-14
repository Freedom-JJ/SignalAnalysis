#ifndef COLLECTIONPARASDAO_H
#define COLLECTIONPARASDAO_H

#include "../Domain/collectionparas.h"
#include "pdsqlinitialize.h"
#include <vector>

class CollectionparasDao
{
public:
    CollectionparasDao();

    //返回所有记录
    vector<Collectionparas*> listCollectionparas(string query_condition="");

    //根据参数id返回记录
    Collectionparas* getCollectionparasById(long long id);

    //添加采集参数
    long long insertCollectionparas(Collectionparas* collectionparas,bool insert_id = false);

    //更新采集参数记录
    long long updateCollectionparas(Collectionparas* collectionparas);

    //删除采集参数记录
    int deleteCollectionparasById(long long id);
};

#endif // COLLECTIONPARASDAO_H
