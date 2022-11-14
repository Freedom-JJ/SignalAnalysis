#ifndef COLLECTIONPARASERVICE_H
#define COLLECTIONPARASERVICE_H

#include "../Dao/collectionparasdao.h"

class CollectionparaService
{
public:
    CollectionparaService();
    ~CollectionparaService();

    //返回所有的参数记录
    vector<Collectionparas*> listCollectionparas();

    //根据参数id返回记录
    Collectionparas* getCollectionparasById(long long id);

    //添加采集参数记录
    long long insertCollectionparas(Collectionparas* collectionparas);

    //更新采集记录，根据id
    long long updateCollectionparas(Collectionparas* collectionparas);

    //删除采集记录
    int deleteCollectionparasById(long long id);

private:
    CollectionparasDao* collectionparasDao;
};

#endif // COLLECTIONPARASERVICE_H
