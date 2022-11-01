#include "singlesignaldao.h"

SingleSignalDao::SingleSignalDao()
{

}

vector<SingleSignal *> SingleSignalDao::listSingleSignals(string query_condition)
{
    vector< vector<string> > query_result;
    string query_sql = "select * from single_signal "+query_condition;
    global_pdsql->SelectMysql(query_result,query_sql);
    vector<SingleSignal*> singleSignals;
    for(vector<string> singleSignal_attributes:query_result){
        SingleSignal* singleSignal = new SingleSignal(singleSignal_attributes);
        singleSignals.push_back(singleSignal);
    }
    return singleSignals;
}

SingleSignal *SingleSignalDao::getSingleSignalById(string id)
{
    string query_condition = "where id = '"+ id +"'";
    vector<SingleSignal*> singleSignals = listSingleSignals(query_condition);
    if(singleSignals.size()==0){
        return nullptr;
    }
    else{
        return singleSignals[0];
    }
}

vector<SingleSignal *> SingleSignalDao::getSingleSignalsBySumSignalId(string sumSignalId)
{
    string query_condition = "where sumSignalId = '"+ sumSignalId +"'";
    vector<SingleSignal*> singleSignals = listSingleSignals(query_condition);
    return singleSignals;
}

vector<SingleSignal *> SingleSignalDao::getSingleSignalsByChannelId(long long channelId)
{
    string query_condition = "where channelId = '"+ mlltos(channelId) +"'";
    vector<SingleSignal*> singleSignals = listSingleSignals(query_condition);
    return singleSignals;
}

string SingleSignalDao::insert(SingleSignal *singleSignal)
{
    int id = 0;
    if(!singleSignal){
        return nullptr;
    }
    QString sql;
    sql = "insert into single_signal values ('%1','%2','%3','%4','%5')";
    sql = sql.arg(mstoqs(singleSignal->getId())).arg(mstoqs(mlltos(singleSignal->getChannelId())))
            .arg(mstoqs(singleSignal->getSumSignalId())).arg(mstoqs(mitos(singleSignal->getSignalStatus())))
            .arg(mstoqs(singleSignal->getDataUrl()));
    qInfo()<<"执行"<<sql;
    global_pdsql->InsertMysql(id,mqstos(sql));
    return singleSignal->getId();

}
