#ifndef COLLECTIONPARACONTROLLER_H
#define COLLECTIONPARACONTROLLER_H
#include "../Result/result.h"
#include "../Service/collectionparaservice.h"

class CollectionparaController
{
public:
    CollectionparaController();
    ~CollectionparaController();

    //根据采集参数记录的id查找采集参数记录
    Result findCollectionparaById(long long id, Collectionparas*& collectionparas);

    //返回所有的采集参数记录集合
    Result findAllCollectionparas(vector<Collectionparas*> & collectionparas);

    //添加采集参数记录，并返回id（注：这里部分参数需要到dictionary类中找对应的键值，数据库中的dictinary表）
    Result addCollectionpara(Collectionparas* collectionparas, long long & collectionparasId);

    //更新采集参数记录
    Result updateCollectionpara(Collectionparas* collectionparas);

    //根据采集参数记录的id，删除采集记录
    Result deleteCollectionparaById(long long id);


private:
    CollectionparaService* collectionparaService;


};

#endif // COLLECTIONPARACONTROLLER_H
