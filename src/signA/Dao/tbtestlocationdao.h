#ifndef TBTESTLOCATIONDAO_H
#define TBTESTLOCATIONDAO_H
#include "mapper/pddatabase.h"
#include "entity/tbtestlocation.h"

class TbTestlocationDao :public PDDatabase
{
public:
    TbTestlocationDao(PDSQL* pdsql);
    TbTestlocationDao(PDSQL* pdsql,const TbTestlocationDao &testlocation);
    ~TbTestlocationDao();

public:
    PDAttribute m_locationId;
    PDAttribute m_locationName;
    PDAttribute m_productTypeId;

    void SetTableFieldValues(TbTestlocation testlocation);
    void GetTableFieldValues(TbTestlocation &testlocation);

    bool SelectObjectsByCondition(vector<TbTestlocationDao> &selectedValueVector, string strSqlQueryWhere = "");
    bool SelectObjectsByCondition(vector<TbTestlocationDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere = "");

};

#endif // TBTESTLOCATIONDAO_H
