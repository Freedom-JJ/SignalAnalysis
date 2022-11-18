#include "collectionparaservice.h"

CollectionparaService::CollectionparaService()
{
    this->collectionparasDao = new CollectionparasDao();
}

CollectionparaService::~CollectionparaService()
{
    delete this->collectionparasDao;
}

vector<Collectionparas *> CollectionparaService::listCollectionparas()
{
    return this->collectionparasDao->listCollectionparas();
}

Collectionparas *CollectionparaService::getCollectionparasById(long long id)
{
    return this->collectionparasDao->getCollectionparasById(id);
}

long long CollectionparaService::insertCollectionparas(Collectionparas *collectionparas)
{
    return this->collectionparasDao->insertCollectionparas(collectionparas);
}

long long CollectionparaService::updateCollectionparas(Collectionparas *collectionparas)
{
    return this->collectionparasDao->updateCollectionparas(collectionparas);
}

int CollectionparaService::deleteCollectionparasById(long long id)
{
    return this->collectionparasDao->deleteCollectionparasById(id);
}
