#ifndef TBTESTLOCATION_H
#define TBTESTLOCATION_H
#include "entity/tbproduct.h"
#include <string>
using namespace std;

class TbTestlocation
{
public:
    TbTestlocation();
    TbTestlocation(int locationId, TbProduct product, string locationName, int productTypeId);
    ~TbTestlocation();
private:
    int m_locationId;
    TbProduct m_product;
    string m_locationName;
    int  m_productTypeId;
public:
    int GetLocationId();
    void SetLocationId(int locationId);

    TbProduct & GetProduct();
    void SetProduct(TbProduct product);

    string GetLocationName();
    void SetLocationName(string locationName);

    int GetProductTypeId();
    void SetProductTypeId(int productTypeId);
};

#endif // TBTESTLOCATION_H
