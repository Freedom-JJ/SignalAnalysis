#include "collectionparacontrollertest.h"


void testCollectionpara_select()
{
    CollectionparaController collectionparaController = CollectionparaController();
    Collectionparas * a = new Collectionparas();
    Result result = collectionparaController.findCollectionparaById(1,a);
    qInfo()<<mstoqs(result.getMsg());
    if(result.getCode()==200){
        qInfo()<< a->getSampleBatch();
        qInfo()<<a->getId();
    }
    vector<Collectionparas*> co;
    result = collectionparaController.findAllCollectionparas(co);
    qInfo()<< mstoqs(result.getMsg())<<"找到记录条数为"<<co.size();
}


void testCollectionpara_add(){
    Collectionparas * a = new Collectionparas();
    a->setDelayBlocks(20000);
    CollectionparaController collectionparaController = CollectionparaController();
    long long id = 0;
    Result result = collectionparaController.addCollectionpara(a,id);
    qInfo()<<mstoqs(result.getMsg())<<"新增id为"<<id;
}


void testCollectionpara_update(){
    CollectionparaController collectionparaController = CollectionparaController();
    Collectionparas * a = new Collectionparas();
    Result result = collectionparaController.findCollectionparaById(1,a);

    a->setCollectionMethod(2004004);
    result = collectionparaController.updateCollectionpara(a);
    qInfo()<<mstoqs(result.getMsg());
}

void testCollectionpara_delete(){
    CollectionparaController collectionparaController = CollectionparaController();
    Result result;
    result = collectionparaController.deleteCollectionparaById(2);
    qInfo()<<mstoqs(result.getMsg());
}
