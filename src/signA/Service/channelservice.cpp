#include "channelservice.h"

ChannelService::ChannelService()
{
    this->channelDao = new ChannelDao();
}

ChannelService::~ChannelService()
{
    delete this->channelDao;
}

vector<Channel *> ChannelService::listChannels()
{
    return this->channelDao->listChannels();
}

Channel *ChannelService::getChannelById(long long id)
{
    return this->channelDao->getChannelById(id);
}

vector<Channel *> ChannelService::getChannelsByProjectId(long long projectId)
{
    return this->channelDao->getChannelsByProjectId(projectId);
}

long long ChannelService::insertChannel(Channel *channel)
{
    return this->channelDao->insertChannel(channel);
}

int ChannelService::deleteChannelById(long long channelId)
{
    return deleteChannelById(channelId);
}

int ChannelService::updateChannelById(Channel *channel)
{
    return this->channelDao->updateChannelById(channel);
}



