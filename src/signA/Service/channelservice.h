#ifndef CHANNELSERVICE_H
#define CHANNELSERVICE_H

#include "../Dao/channeldao.h"

class ChannelService
{

public:
    ChannelService();
    ~ChannelService();


private:
    ChannelDao* channelDao;
};

#endif // CHANNELSERVICE_H
