#include "aircraftcasingvibratesystem.h"

AirCraftCasingVibrateSystem::AirCraftCasingVibrateSystem():
    analysisResult(new std::map<QString,QVector<AnalysisResult>>()),
    analysisResultNoChannel(new QVector<AnalysisResult>())
{
    AirCraftCasingVibrateSystemInit();
    //加载默认项目和相关的通道参数
    procon.loadDefaultProject(currentProject);
    channelCon.getChannelsByProjectId(channelVec,currentProject.getId());
}


void AirCraftCasingVibrateSystem::AirCraftCasingVibrateSystemInit(){

    m_vchannelCodes = vector<QString>(channelNumber);
    m_icollectState = 0;
    m_bisSave = false;
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

std::shared_ptr<std::map<QString, QVector<AnalysisResult> > > AirCraftCasingVibrateSystem::getAnalysisResult() const
{
    return analysisResult;
}

void AirCraftCasingVibrateSystem::clearAnalysisResult()
{
    auto it = analysisResult->begin();
    while(it!=analysisResult->end()){
        (*analysisResult)[it->first].clear();
        it++;
    }
}

std::shared_ptr<QVector<AnalysisResult> > AirCraftCasingVibrateSystem::getAnalysisResultNoChannel() const
{
    return analysisResultNoChannel;
}



