#include "DataModal.h"

DataModal::DataModal()
{

    m_vchannelCodes = vector<QString>(4);
    for(int i=0;i<4;i++){
        QString channelCode = "0-" + QString::number(i);
        m_vchannelCodes[i] = channelCode;
    }
    for(int i=0;i<m_vchannelCodes.size();i++){
         std::shared_ptr<StaticSpectralEchoSignal> echosignal(new StaticSpectralEchoSignal());
         echoSignalQueue.insert(std::make_pair(m_vchannelCodes[i],echosignal));
    }
    for(int i=0;i<m_vchannelCodes.size();i++){
        dataUrl[m_vchannelCodes[i]] = QString("D:\\QtCollectionData\\change-%1.txt").arg(m_vchannelCodes[i]);
    }
}
