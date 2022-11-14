#include "channelservice.h"

ChannelService::ChannelService()
{
    this->channelDao = new ChannelDao();
}

ChannelService::~ChannelService()
{
    delete this->channelDao;
}
