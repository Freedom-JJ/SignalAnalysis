#ifndef TBCHANNEL_H
#define TBCHANNEL_H

#include "tbdictionary.h"
#include "tbtestlocation.h"
#include "tbsensor.h"

class TbChannel
{

private:

    int m_id;//通道ID
    string m_channelCode;//通道编号
    TbSensor m_sensor;//对应传感器

    std::pair<int,string> m_fullvalue;//满度量程
    std::pair<int, string> m_upFreq;//上限频率
    std::pair<int, string> m_inputMode;//输入方式
    float m_sensitivity;//灵敏度
    std::pair<int, string> m_elcpressure;//电压测量范围
    std::pair<int, string> m_messureType;//测量类型
    int m_projectId;
    TbTestlocation m_testLocation;
    double m_xMin; //X轴最小值
    double m_xMax; //X轴最大值
    double m_yMin; //Y轴最小值
    double m_yMax; //Y轴最大值

    TbDictionary m_channelStatus;
    int m_collectionparasId;
    string m_channelDesc;
    TbDictionary m_windowType;
    float m_triggerMagnitude;
    TbDictionary m_triggerPolarity;
    int m_pointNum;
    TbDictionary m_coordinateSystem;
    TbDictionary m_coordinateSystemDirection;
    char m_isReference;
    TbDictionary m_engineeringUnits;
    TbDictionary m_integralType;
    TbDictionary m_integralUnits;
    char m_antiAliasingFiltering;



public:
    TbChannel(int channelCode = 0);
    ~TbChannel();

    void SetId(int id);
    int GetId();
    void SetChannelCode(string channel);
    string GetChannelCode();

    //灵敏度
    float GetSensitivity();
    void SetSensitivity(float sensitivity);
    //满度量程
    std::pair<int, string> GetFullValue();
    void SetFullValue(std::pair<int, string> fullvalue);

    //输入方式
    std::pair<int, string>  GetInputMode();
    void SetInputMode(std::pair<int, string> inputMethod);

    //上限频率
    std::pair<int, string> GetUpFreq();
    void SetUpFreq(std::pair<int, string> maxFrequency);

    //电压测量范围
    std::pair<int, string> GetElcPressure();
    void SetElcPressure(std::pair<int, string> elcPressure);

    //项目编号
    int GetProjectId();
    void SetProjectId(int projectId);

    // 测点位置
    TbTestlocation & GetTestLocation();
    void SetTestLocation(TbTestlocation testLocation);

    //测量类型
    std::pair<int, string> & GetMessureType();
    void SetMessureType(std::pair<int, string> messureType);

    //设置控件的横坐标最小值
    void SetXMin(double xmin);
    double GetXMin();
    //设置空间横坐标的最大值
    void SetXMax(double xmax);
    double GetXMax();
    //设置纵坐标的最小值
    void SetYMin(double xmin);
    double GetYMin();
    //设置纵坐标的最大值
    void SetYMax(double ymax);
    double GetYMax();

    char GetAntiAliasingFiltering();
    void SetAntiAliasingFiltering(char antiAliasingFiltering);
    TbDictionary & GetIntegralType();
    void SetIntegralType(TbDictionary integralType);
    TbDictionary & GetIntegralUnits();
    void SetIntegralUnits(TbDictionary integralUnits);
    string GetChannels();
    TbDictionary & GetChannelStatus();
    void SetChannelStatus(TbDictionary ChannelStatus);

    string GetChannelDesc();
    void SetChannelDesc(string channelDesc);
    TbDictionary & GetWindowType();
    void SetWindowType(TbDictionary windowType);
    float GetTriggerMagnitude();
    void SetTriggerMagnitude(float triggerMagnitude);
    TbDictionary & GetTriggerPolarity();
    void SetTriggerPolarity(TbDictionary triggerPolarity);
    int GetPointNum();
    void SetPointNum(int pointNum);
    TbDictionary & GetCoordinateSystem();
    void SetCoordinateSystem(TbDictionary coordinateSystem);
    TbDictionary & GetCoordinateSystemDirection();
    void SetCoordinateSystemDirection(TbDictionary coordinateSystemDirection);
    char GetIsReference();
    void SetIsReference(char isReference);
    TbDictionary & GetEngineeringUnits();
    void SetEngineeringUnits(TbDictionary engineeringUnits);




    void SetSensor(TbSensor sensor);
    TbSensor & GetSensor();


};



#endif // TBCHANNEL_H
