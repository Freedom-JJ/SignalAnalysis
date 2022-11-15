#include "channelcontroller.h"

ChannelController::ChannelController()
{
    this->channelService = new ChannelService();
}

ChannelController::~ChannelController()
{
    delete this->channelService;
}
