
#include "tbproducttype.h"

TbProductType::TbProductType(int Id, string typeName){
    m_Id = Id;
    m_typeName = typeName;
}
bool TbProductType::operator == (TbProductType productType)
{
    bool tag = true;
    if (m_Id != productType.GetId()) tag = false;
    if (m_typeName != productType.GetTypeName()) tag = false;
    return tag;

}

bool TbProductType::operator != (TbProductType productType){
    return *this == productType ? false : true;
}
TbProductType::~TbProductType()
{
}

int TbProductType::GetId() {
    return m_Id;
}

void TbProductType::SetId(int Id) {
    this->m_Id = Id;
}

string TbProductType::GetTypeName() {
    return m_typeName;
}

void TbProductType::SetTypeName(string typeName) {
    this->m_typeName = typeName;
}
