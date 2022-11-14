#ifndef CHANNELDAO_H
#define CHANNELDAO_H

#include "../Domain/channel.h"
#include "pdsqlinitialize.h"
#include <vector>

class ChannelDao
{
public:
    ChannelDao();

    //返回所有通道记录
    vector<Channel*> listChannels(string query_condition="");

    //返回指定通道id对应的通道记录
    Channel* getChannelById(long long id);

    //返回执行项目id对应的所有通道
    vector<Channel*> getChannelsByProjectId(long long id);

    //添加通道，返回添加的通道id
    long long insertChannel(Channel* channel, bool insert_id);

    //删除通道,根据通道id，返回删除记录个数
    int deleteChannelById(long long channelId);

    //更改通道,根据通道id，返回更新数目
    int updateChannelById(Channel* channel);
};

#endif // CHANNELDAO_H
