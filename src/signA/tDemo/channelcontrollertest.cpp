#include "channelcontrollertest.h"



void testListAllChannels()
{
   ChannelController channelController = ChannelController();
   vector<Channel*> channels;
   Result result = channelController.listAllChannels(channels);
   qInfo()<<mstoqs(result.getMsg());
   qInfo()<<channels.size();
   if(channels.size()!=0){
       for(Channel* channel:channels){
           qInfo()<<channel->getId();
       }
   }
}



void test_Channel_Select()
{
    //根据通道id，返回指定通道
    Channel* channel;
    ChannelController channelController = ChannelController();
    Result result = channelController.getChannelByChannelId(4,channel);
    qInfo()<<mstoqs(result.getMsg())<<result.getCode();
    qInfo()<<mstoqs(channel->getChannelCode())<<channel->getProjectId();
}

void test_Channel_Add()
{
    ChannelController channelController = ChannelController();
    Channel* channel = new Channel();
    channel->setChannelCode("higehi");
    channel->setChannelDesc("新通道");
    channel->setElcPressure(299);
    channel->setFullValue(223423);
    channel->setProjectId(1);//这个项目id很重要，在数据库中添加项目后在设置该项,其它字段赋不赋值都可以
    long long channelId;
    Result result = channelController.addChannel(channel,channelId);
    qInfo()<<mstoqs(result.getMsg());
    qInfo()<<channelId;
    if(result.getCode()==200){
        qInfo()<<"添加成功";
        channel->setId(channelId);//需要更新id，因为这个id是数据库返回的自增id
    }

}

void test_Channel_Update()
{
    ChannelController channelController = ChannelController();
    //要更新一个通道，首先从数据库中获取一个通道，或者已经知道一个通道的id
    //首先添加一个通道
    Channel* channel = new Channel();
    channel->setChannelCode("higehi");
    channel->setChannelDesc("新通道");
    channel->setElcPressure(299);
    channel->setFullValue(223423);
    channel->setProjectId(1);//这个项目id很重要，在数据库中添加项目后在设置该项,其它字段赋不赋值都可以
    long long channelId;
    Result result = channelController.addChannel(channel,channelId);
    if(result.getCode()==200){
        //更新数据库返回的自增id
        channel->setId(channelId);

        //进行更新操作
        channel->setChannelCode("新Code");
        result = channelController.updateChannel(channel);
        qInfo()<<result.getCode()<<mstoqs(result.getMsg());
    }


}

void test_Channel_Delete()
{
    //删除指定id的通道,这里既可以是一个已知的通道（id已经赋值），也可以是一个新建的通道，其它变量没有赋值但是id已经赋值，因为是根据通道id来进行删除，与其它字段无关
    //删除id为6的通道类
    Channel* channel = new Channel();
    channel->setId(6);
    ChannelController channelController = ChannelController();
    Result result = channelController.deleteChannel(channel);
    if(result.getCode()==200){
        qInfo()<<mstoqs(result.getMsg());
    }
    else{
        qInfo()<<result.getCode();
    }
}
