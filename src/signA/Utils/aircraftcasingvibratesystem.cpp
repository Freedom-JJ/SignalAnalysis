#include "aircraftcasingvibratesystem.h"

AirCraftCasingVibrateSystem::AirCraftCasingVibrateSystem()
{
    AirCraftCasingVibrateSystemInit();

}

void AirCraftCasingVibrateSystem::AirCraftCasingVibrateSystemInit(){
    m_vchannelCodes = vector<QString>(4);
    for(int i=0;i<4;i++){
        QString channelCode = "0-" + QString::number(i);
        m_vchannelCodes[i] = channelCode;
    }
    for(int i=0;i<m_vchannelCodes.size();i++){
         std::shared_ptr<StaticSpectralEchoSignal> echosignal(new StaticSpectralEchoSignal());
         echoSignalQueue.insert(std::make_pair(m_vchannelCodes[i],echosignal));
    }

}

