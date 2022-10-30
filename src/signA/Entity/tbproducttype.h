#ifndef TBPRODUCTTYPE_H
#define TBPRODUCTTYPE_H
#include <string>
using namespace std;

class TbProductType
{
public:
    TbProductType(int Id = 0, string typeName = "");
    ~TbProductType();

    bool operator == (TbProductType productType);

    bool operator != (TbProductType productType);

    int m_Id;
    string m_typeName;

    int GetId();
    void SetId(int Id);
    string GetTypeName();
    void SetTypeName(string typeName);
};

#endif // TBPRODUCTTYPE_H
