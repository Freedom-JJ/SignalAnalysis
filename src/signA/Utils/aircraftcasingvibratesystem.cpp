#include "aircraftcasingvibratesystem.h"

AirCraftCasingVibrateSystem::AirCraftCasingVibrateSystem()
{
    AirCraftCasingVibrateSystemInit();

}


void AirCraftCasingVibrateSystem::AirCraftCasingVibrateSystemInit(){
    m_vchannelCodes = vector<QString>(channelNumber);
    for(int i=0;i<channelNumber;i++){
        QString channelCode =  QString::number(i);
        m_vchannelCodes[i] = channelCode;
    }
    for(int i=0;i<m_vchannelCodes.size();i++){
         std::shared_ptr<StaticSpectralEchoSignal> echosignal(new StaticSpectralEchoSignal());
         echoSignalQueue.insert(std::make_pair(m_vchannelCodes[i],echosignal));
    }
    for(int i=0;i<m_vchannelCodes.size();i++){
        dataUrl[m_vchannelCodes[i]] = QString("D:\\QtCollectionData\\change-%1.txt").arg(m_vchannelCodes[i]);
    }

    m_redis = new RedisController();

}

