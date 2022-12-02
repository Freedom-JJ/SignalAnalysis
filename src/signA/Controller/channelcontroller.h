#ifndef CHANNELCONTROLLER_H
#define CHANNELCONTROLLER_H

#include "../Service/channelservice.h"
#include "../Result/result.h"

class ChannelController
{
public:
    ChannelController();
    ~ChannelController();

    //返回所有的通道,返回的通道集合保存在channels中
    Result listAllChannels(vector<Channel*> &channels);


    //返回指定通道id对应的通道
    Result getChannelByChannelId(long long channelId,Channel* &channel);

    //添加通道
    Result addChannel(Channel* channel,long long &channelId);

    //根据通道id删除通道
    Result deleteChannel(Channel* channel);

    //更新通道（根据通道id找到要更新的通道）
    Result updateChannel(Channel* channel);

    Result getChannelsByProjectId(std::vector<Channel*> &channel,long long projectId);



private:
    ChannelService* channelService;

};

#endif // CHANNELCONTROLLER_H
