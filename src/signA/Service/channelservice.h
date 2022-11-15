#ifndef CHANNELSERVICE_H
#define CHANNELSERVICE_H

#include "../Dao/channeldao.h"

class ChannelService
{

public:
    ChannelService();
    ~ChannelService();

    //返回所有的通道信息
    vector<Channel*> listChannels();

    //根据通道id返回通道
    Channel* getChannelById(long long id);

    //返回项目id对应的所有通道
    vector<Channel*> getChannelsByProjectId(long long projectId);

    //添加通道
    long long insertChannel(Channel* channel);

    //删除通道
    int deleteChannelById(long long channelId);

    //更新通道信息
    int updateChannelById(Channel* channel);



private:
    ChannelDao* channelDao;
};

#endif // CHANNELSERVICE_H
