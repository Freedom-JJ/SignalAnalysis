#include "channelcontroller.h"

ChannelController::ChannelController()
{
    this->channelService = new ChannelService();
}

ChannelController::~ChannelController()
{
    delete this->channelService;
}

Result ChannelController::listAllChannels(vector<Channel *> &channels)
{
    channels = channelService->listChannels();
    return Result(200,"返回所有的通道");
}

Result ChannelController::getChannelByChannelId(long long channelId, Channel *&channel)
{
    channel = this->channelService->getChannelById(channelId);
    if(!channel){
        return Result(201,"数据库没有该id对应的通道");
    }
    else{
        return Result(200,"查询通道成功");
    }
}

Result ChannelController::addChannel(Channel *channel, long long &channelId)
{
    if(!channel){
        return Result(205,"传入的通道指针为空");
    }
    Channel* qchannel = channelService->getChannelById(channel->getId());
    if(qchannel){
        return Result(202,"该通道id已经存在，无法继续添加");
    }

    channelId = channelService->insertChannel(channel);
    if(channelId==0){
        return Result(203,"添加通道失败");
    }
    else{
        return Result(200,"添加通道成功");
    }
}

Result ChannelController::deleteChannel(Channel *channel)
{
    if(!channel){
        return Result(205,"传入的通道为空");
    }
    if(channel->getId()==-1){
        return Result(202,"该通道的id仍为默认值-1，id没有更新");
    }
    //判断该通道id对应的通道是否存在于数据库中
    Channel* qchannel = channelService->getChannelById(channel->getId());

    if(!qchannel){
        return Result(203,"传入通道的id在数据库中并不存在");
    }

    int delete_num = channelService->deleteChannelById(channel->getId());
    if(delete_num == 0){
        return Result(203,"删除通道失败");
    }
    else{
        return Result(200,"删除通道成功");
    }



}

Result ChannelController::updateChannel(Channel *channel)
{
    if(!channel){
        return Result(205,"传入的通道为空");
    }
    if(channel->getId()==-1){
        return Result(202,"该通道的id仍为默认值-1，id没有更新");
    }
    //判断该通道id对应的通道是否存在于数据库中
    Channel* qchannel = channelService->getChannelById(channel->getId());

    if(!qchannel){
        return Result(203,"传入通道的id在数据库中并不存在");
    }

    int affected_num = channelService->updateChannelById(channel);
    if(affected_num == 0){
        return Result(201,"传入通道的参数无需更新，或者数据库中不存在");
    }
    else{
        return Result(200,"更新通道成功");
    }

}

// Result ChannelController::getChannelsByProjectId(std::vector<Channel*> &channel , long long projectId){
//         channel = channelService->getChannelsByProjectId(projectId);
//         return Result(200,"获取通道成功");
// }


Result ChannelController::getChannelsByProjectId(QVector<Channel *> &res, long long projectId)
{
    res = QVector<Channel *>::fromStdVector( channelService->getChannelsByProjectId(projectId));
    return Result(200,"更新通道成功");
}




