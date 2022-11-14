#include "collectionparasdao.h"

CollectionparasDao::CollectionparasDao()
{

}

vector<Collectionparas *> CollectionparasDao::listCollectionparas(string query_condition)
{
    vector<vector<string> > query_result;
    string query_sql = "select * from collectionparas "+query_condition;
    qInfo()<<mstoqs(query_sql);
    global_pdsql->SelectMysql(query_result,query_sql);
    vector<Collectionparas*> collectionparas;
    for(vector<string> collectionpara_attributes:query_result){
        Collectionparas* collectionpara = new Collectionparas(collectionpara_attributes);
        collectionparas.push_back(collectionpara);
    }
    return collectionparas;
}

Collectionparas *CollectionparasDao::getCollectionparasById(long long id)
{
    string query_condition = "where id ='"+ mlltos(id) + "'";
    vector<Collectionparas*> collectionparas = listCollectionparas(query_condition);
    if(collectionparas.size()==0){
        return nullptr;
    }
    else{
        return collectionparas[0];
    }
}

long long CollectionparasDao::insertCollectionparas(Collectionparas *collectionparas, bool insert_id)
{
    int id = 0;
    if(!collectionparas){
        return -1;
    }
    QString sql;
    if(insert_id){
        sql = "insert into collectionparas(`id`,`sampleFrequency`,`collectionMethod`,`triggerMethod`"
              ",`dataBlocks`,`delayBlocks`,`triggerTimes`,`line`,`sampleBatch`,`sampleClk`) values ('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10')";
        sql = sql.arg(mstoqs(mlltos(collectionparas->getId()))).arg(mstoqs(mitos(collectionparas->getSampleFrequency()))).arg(mstoqs(mitos(collectionparas->getCollectionMethod())))
                .arg(mstoqs(mitos(collectionparas->getTriggerMethod()))).arg(mstoqs(mitos(collectionparas->getDataBlocks()))).arg(mstoqs(mitos(collectionparas->getDelayBlocks())))
                .arg(mstoqs(mitos(collectionparas->getTriggerTimes()))).arg(mstoqs(mitos(collectionparas->getLine()))).arg(mstoqs(mitos(collectionparas->getSampleBatch())))
                .arg(mstoqs(mitos(collectionparas->getSampleClk())));
    }
    else{
        sql = "insert into collectionparas(`sampleFrequency`,`collectionMethod`,`triggerMethod`"
              ",`dataBlocks`,`delayBlocks`,`triggerTimes`,`line`,`sampleBatch`,`sampleClk`) values ('%1','%2','%3','%4','%5','%6','%7','%8','%9')";
        sql = sql.arg(mstoqs(mitos(collectionparas->getSampleFrequency()))).arg(mstoqs(mitos(collectionparas->getCollectionMethod())))
                .arg(mstoqs(mitos(collectionparas->getTriggerMethod()))).arg(mstoqs(mitos(collectionparas->getDataBlocks()))).arg(mstoqs(mitos(collectionparas->getDelayBlocks())))
                .arg(mstoqs(mitos(collectionparas->getTriggerTimes()))).arg(mstoqs(mitos(collectionparas->getLine()))).arg(mstoqs(mitos(collectionparas->getSampleBatch())))
                .arg(mstoqs(mitos(collectionparas->getSampleClk())));
    }
    qInfo()<<"插入采集参数记录"<<sql;
    //执行插入
    global_pdsql->InsertMysql(id,mqstos(sql));
    return id;
}

long long CollectionparasDao::updateCollectionparas(Collectionparas *collectionparas)
{
    int affected_num = 0;
    if(!collectionparas){
        return -1;
    }
    QString sql;
    sql = "update collectionparas set sampleFrequency='%1',collectionMethod='%2',triggerMethod='%3',dataBlocks='%4',delayBlocks='%5',triggerTimes='%6',line='%7',sampleBatch='%8',sampleClk='%9' where id='%10'";
    sql = sql.arg(mstoqs(mitos(collectionparas->getSampleFrequency()))).arg(mstoqs(mitos(collectionparas->getCollectionMethod())))
            .arg(mstoqs(mitos(collectionparas->getTriggerMethod()))).arg(mstoqs(mitos(collectionparas->getDataBlocks()))).arg(mstoqs(mitos(collectionparas->getDelayBlocks())))
            .arg(mstoqs(mitos(collectionparas->getTriggerTimes()))).arg(mstoqs(mitos(collectionparas->getLine()))).arg(mstoqs(mitos(collectionparas->getSampleBatch())))
            .arg(mstoqs(mitos(collectionparas->getSampleClk()))).arg(mstoqs(mlltos(collectionparas->getId())));
    qInfo()<<"更新采集参数记录"<<sql;
    //执行更新命令
    global_pdsql->UpdateMysql(affected_num,mqstos(sql));
    if(affected_num==0){
        return -1;
    }
    else{
        return collectionparas->getId();
    }
}

int CollectionparasDao::deleteCollectionparasById(long long id)
{
    string delete_sql = "delete from collectionparas where id = '" + mlltos(id)+"'";
    int delete_num = 0;
    global_pdsql->DeleteMysql(delete_num,delete_sql);
    qInfo()<<"删除采集参数记录"<<mstoqs(delete_sql);

    return delete_num;
}


