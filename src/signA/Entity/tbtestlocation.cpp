#include "tbtestlocation.h"

TbTestlocation::TbTestlocation()
{

}
TbTestlocation::TbTestlocation(int locationId, TbProduct product, string locationName, int productTypeId)
{
    SetLocationId(locationId);
    SetProduct(product);
    SetLocationName(locationName);
    SetProductTypeId(productTypeId);
}
TbTestlocation::~TbTestlocation()
{

}
int TbTestlocation::GetLocationId()
{
    return m_locationId;
}
void TbTestlocation::SetLocationId(int locationId)
{
    this->m_locationId = locationId;
}

TbProduct & TbTestlocation::GetProduct()
{
    return this->m_product;
}
void TbTestlocation::SetProduct(TbProduct product)
{
    this->m_product = product;
}

string TbTestlocation::GetLocationName()
{
    return m_locationName;
}
void TbTestlocation::SetLocationName(string locationName)
{
    this->m_locationName = locationName;
}

int TbTestlocation::GetProductTypeId()
{
    return m_productTypeId;
}
void TbTestlocation::SetProductTypeId(int productTypeId)
{
    this->m_productTypeId = productTypeId;
}
