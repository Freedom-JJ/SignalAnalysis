#include "collectionparacontroller.h"

CollectionparaController::CollectionparaController()
{
    this->collectionparaService = new CollectionparaService();
}

CollectionparaController::~CollectionparaController()
{
    delete this->collectionparaService;
}

Result CollectionparaController::findCollectionparaById(long long id, Collectionparas *&collectionparas)
{
    collectionparas = this->collectionparaService->getCollectionparasById(id);
    if(collectionparas){
        return Result(200,"成功找到该采集参数");
    }
    else{
        return Result(201,"采集参数表中不存在该id");
    }
}

Result CollectionparaController::findAllCollectionparas(vector<Collectionparas *> &collectionparas)
{
    collectionparas = this->collectionparaService->listCollectionparas();
    return Result(200,"采集记录表查询成功");
}

Result CollectionparaController::addCollectionpara(Collectionparas *collectionparas, long long &collectionparasId)
{
    //判断指针是否为空
    if(!collectionparas){
        return Result(203,"采集记录为空指针");
    }
    //添加该采集参数类，并返回该id
    collectionparasId = this->collectionparaService->insertCollectionparas(collectionparas);

    //判断是否添加成功
    if(collectionparasId == 0){
        return Result(201,"采集记录添加失败");
    }
    else{
        return Result(200,"采集记录添加成功");
    }

}

Result CollectionparaController::updateCollectionpara(Collectionparas *collectionparas)
{
    if(!collectionparas){
        return Result(203,"采集记录指针为空");
    }

    if(collectionparas->getId()==-1){
        return Result(204,"该采集记录的id未赋值，仍未-1");
    }
    //查询是否存在该采集记录id对应的记录
    Collectionparas* qcollectionparas = this->collectionparaService->getCollectionparasById(collectionparas->getId());
    if(!qcollectionparas){
        return Result(201,"采集记录表中不存在该id对应的记录");
    }

    long long id = this->collectionparaService->updateCollectionparas(collectionparas);
    if(id==-1){
        return Result(202,"该采集记录表更新失败，记录表无变更");
    }
    else{
        return Result(200,"该采集记录表更新成功");
    }
}

Result CollectionparaController::deleteCollectionparaById(long long id)
{
    //查询是否存在该采集记录id对应的记录
    Collectionparas* qcollectionparas = this->collectionparaService->getCollectionparasById(id);
    if(!qcollectionparas){
        return Result(201,"采集记录表中不存在该id对应的记录");
    }

    //若存在该id对应的记录，则删除
    int delete_num = this->collectionparaService->deleteCollectionparasById(id);
    if(delete_num == 0){
        return Result(202,"采集参数表删除失败，没有找到该记录，发生错误");
    }
    else{
        return Result(200,"采集参数表删除成功");
    }
}
