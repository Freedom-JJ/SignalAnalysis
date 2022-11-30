#include "channeldao.h"

ChannelDao::ChannelDao()
{

}

vector<Channel *> ChannelDao::listChannels(string query_condition)
{
    vector<vector<string> > query_result;
    string query_sql  = "select * from channel " + query_condition;
    qInfo()<<mstoqs(query_sql);
    global_pdsql->SelectMysql(query_result,query_sql);
    vector<Channel*> channels;
    for(vector<string> channel_attribute:query_result){
        Channel* channel = new Channel(channel_attribute);
        channels.push_back(channel);
    }
    return channels;
}

Channel *ChannelDao::getChannelById(long long id)
{
    string query_condition = "where id = '" + mlltos(id) + "'";
    vector<Channel*> channels = listChannels(query_condition);
    if(channels.size()==0){
        return nullptr;
    }
    else{
        return channels[0];
    }

}

vector<Channel *> ChannelDao::getChannelsByProjectId(long long id)
{
    string query_condition = "where projectId = '" + mlltos(id) + "'";
    vector<Channel*> channels = listChannels(query_condition);
    return channels;

}

long long ChannelDao::insertChannel(Channel *channel, bool insert_id)
{
    int id = 0;
    if(!channel){
        return -1;
    }
    QString sql;
    if(insert_id){
        sql = "insert into channel(`channelCode`,`channelDesc`,`measureType`,`fullValue`,"
              "`inputMode`,`upFreq`,`elcPressure`,`projectId`) values ('%1','%2','%3','%4','%5','%6','%7','%8')";
        sql = sql.arg(mstoqs(channel->getChannelCode()))
                .arg(mstoqs(channel->getChannelDesc())).arg(mstoqs(channel->getMeasureType()))
                .arg(mstoqs(mitos(channel->getFullValue()))).arg(mstoqs(channel->getInputMode()))
                .arg(mstoqs(mitos(channel->getUpFreq()))).arg(mstoqs(mitos(channel->getElcPressure())))
                .arg(mstoqs(mlltos(channel->getProjectId())));
    }
    else{
        sql = "insert into channel(`channelCode`,`channelDesc`,`measureType`,`fullValue`,"
              "`inputMode`,`upFreq`,`elcPressure`,`projectId`) values ('%1','%2','%3','%4','%5','%6','%7','%8')";
        sql = sql.arg(mstoqs(channel->getChannelCode()))
                .arg(mstoqs(channel->getChannelDesc())).arg(mstoqs(channel->getMeasureType()))
                .arg(mstoqs(mitos(channel->getFullValue()))).arg(mstoqs(channel->getInputMode()))
                .arg(mstoqs(mitos(channel->getUpFreq()))).arg(mstoqs(mitos(channel->getElcPressure())))
                .arg(mstoqs(mlltos(channel->getProjectId())));
    }
    qInfo()<<"插入通道记录"<<sql;
    global_pdsql->InsertMysql(id,mqstos(sql));
    return id;
}

int ChannelDao::deleteChannelById(long long channelId)
{
    string delete_sql = "delete from channel where id ='" + mlltos(channelId)+"'";
    int delete_num = 0 ;
    global_pdsql->DeleteMysql(delete_num,delete_sql);
    qInfo()<< "删除通道记录"<< mstoqs(delete_sql);
    return delete_num;
}

int ChannelDao::updateChannelById(Channel* channel)
{
    int affected_num = 0;
    if(!channel){
        return -1;
    }
    QString sql;
    sql = "update channel set channelCode = '%1', channelDesc = '%2', measureType = '%3'"
          ",fullValue = '%4',inputMode = '%5',upFreq = '%6', elcPressure = '%7', projectId = '%8' where id = '%9'";
    sql = sql.arg(mstoqs(channel->getChannelCode()))
            .arg(mstoqs(channel->getChannelDesc())).arg(mstoqs(channel->getMeasureType()))
            .arg(mstoqs(mitos(channel->getFullValue()))).arg(mstoqs(channel->getInputMode()))
            .arg(mstoqs(mitos(channel->getUpFreq()))).arg(mstoqs(mitos(channel->getElcPressure())))
            .arg(mstoqs(mlltos(channel->getProjectId())));
    qInfo()<< "更新通道参数"<< sql;
    //执行更新命令
    global_pdsql->UpdateMysql(affected_num,mqstos(sql));
    return affected_num;
}
