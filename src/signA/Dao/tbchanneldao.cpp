#include "tbchanneldao.h"


TbChannelDao::TbChannelDao(PDSQL* pdsql):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_channel";
    m_key = &m_id;
    SetVectorAndField("id", "int", m_id);
    SetVectorAndField("channel_code", "string", m_channelCode);
    SetVectorAndField("sensor_id", "int", m_sensorId);
    SetVectorAndField("channel_desc", "string", m_channelDesc);
    SetVectorAndField("channel_status", "char", m_sersorStatus);
    SetVectorAndField("measure_type", "int", m_messureType);
    SetVectorAndField("window_type", "int", m_windowType);
    SetVectorAndField("trigger_magnitude", "float", m_triggerMagnitude);
    SetVectorAndField("trigger_polarity", "int", m_triggerPolarity);
    SetVectorAndField("point_num", "int", m_pointNum);
    SetVectorAndField("coordinate_system", "int", m_coordinateSystem);
    SetVectorAndField("coordinate_systemdirection", "int", m_coordinateSystemDirection);
    SetVectorAndField("is_reference", "int", m_isReference);
    SetVectorAndField("engineering_units", "int", m_engineeringUnits);
    SetVectorAndField("sensitivity", "float", m_sensitivity);//灵敏度
    SetVectorAndField("full_value", "int", m_fullvalue);//满度量程
    SetVectorAndField("integral_type", "int", m_integralType);
    SetVectorAndField("integral_units", "int", m_integralUnits);
    SetVectorAndField("input_mode", "int", m_inputMode);//输入方式
    SetVectorAndField("anti_aliasing_filtering", "char", m_antiAliasingFiltering);
    SetVectorAndField("up_freq", "int", m_upFreq);//上限频率
    SetVectorAndField("elc_pressure", "int", m_elcpressure);//电压测量范围
    SetVectorAndField("project_id", "int", m_projectId);//项目编号
    SetVectorAndField("testlocaton_id", "int", m_testlocatonId);//测点位置编号
    SetVectorAndField("x_min", "double", m_xMin); //X轴最小值
    SetVectorAndField("x_max", "double", m_xMax);//X轴最大值
    SetVectorAndField("y_min", "double", m_yMin);//Y轴最小值
    SetVectorAndField("y_max", "double", m_yMax);//Y轴最大值
}

TbChannelDao::~TbChannelDao()
{

}
TbChannelDao::TbChannelDao(PDSQL* pdsql,const TbChannelDao & channel):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_channel";
    m_key = &m_id;
    SetVectorAndField("id", "int", m_id);
    SetVectorAndField("channel_code", "string", m_channelCode);
    SetVectorAndField("sensor_id", "int", m_sensorId);
    SetVectorAndField("channel_desc", "string", m_channelDesc);
    SetVectorAndField("channel_status", "char", m_sersorStatus);
    SetVectorAndField("measure_type", "int", m_messureType);
    SetVectorAndField("window_type", "int", m_windowType);
    SetVectorAndField("trigger_magnitude", "float", m_triggerMagnitude);
    SetVectorAndField("trigger_polarity", "int", m_triggerPolarity);
    SetVectorAndField("point_num", "int", m_pointNum);
    SetVectorAndField("coordinate_system", "int", m_coordinateSystem);
    SetVectorAndField("coordinate_systemdirection", "int", m_coordinateSystemDirection);
    SetVectorAndField("is_reference", "int", m_isReference);
    SetVectorAndField("engineering_units", "int", m_engineeringUnits);
    SetVectorAndField("sensitivity", "float", m_sensitivity);//灵敏度
    SetVectorAndField("full_value", "int", m_fullvalue);//满度量程
    SetVectorAndField("integral_type", "int", m_integralType);
    SetVectorAndField("integral_units", "int", m_integralUnits);
    SetVectorAndField("input_method", "int", m_inputMode);//输入方式
    SetVectorAndField("anti_aliasing_filtering", "char", m_antiAliasingFiltering);
    SetVectorAndField("up_freq", "int", m_upFreq);//上限频率
    SetVectorAndField("elc_pressure", "int", m_elcpressure);//电压测量范围
    SetVectorAndField("project_id", "int", m_projectId);//项目编号
    SetVectorAndField("testlocaton_id", "int", m_testlocatonId);//测点位置编号
    SetVectorAndField("x_min", "double", m_xMin); //X轴最小值
    SetVectorAndField("x_max", "double", m_xMax);//X轴最大值
    SetVectorAndField("y_min", "double", m_yMin);//Y轴最小值
    SetVectorAndField("y_max", "double", m_yMax);//Y轴最大值
    operator = (channel);
}

bool TbChannelDao::SelectObjectsByCondition(vector<TbChannelDao> &selectedValueVector, string strSqlQueryWhere){

    int iStartNumberIn = 0; int iRecordCountIn = 0;
    return SelectObjectsByCondition(selectedValueVector, iStartNumberIn, iRecordCountIn, strSqlQueryWhere);
}

bool TbChannelDao::SelectObjectsByCondition(vector<TbChannelDao> &selectedValueVector, int iStartNumberIn, int iRecordCountIn, string strSqlQueryWhere)//zuihou
{
    vector<string> tmpDetectedObjecIDs;
    TbChannelDao channelDao(pdsql);
    if (channelDao.GetKeyIdList(tmpDetectedObjecIDs, strSqlQueryWhere, iStartNumberIn, iRecordCountIn))
    {
        for (int iStart = 0; iStart < int(tmpDetectedObjecIDs.size()); iStart++)
        {
            channelDao.m_id.m_strValue = tmpDetectedObjecIDs[iStart];
            if (channelDao.SelectByKey())
            {
                selectedValueVector.push_back(channelDao);
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}
/**
 * @brief TbChannelDao::GetTableFieldValues 这里和原始项目中有所不同，原始项目中是直接传递了一个theApp全局对象，这样不符合解耦的思想，改为调用时传入一些变量
 * @param channel
 * @param m_listUpFreq
 */
void  TbChannelDao::GetTableFieldValues(TbChannel & channel,vector<string> m_listInputMode,vector<string> m_listUpFreq,vector<string> m_listMessaueType,vector<string> m_listFullValue,vector<string> m_listElcpressure){
    channel.SetId(m_id.GetInt());
    channel.SetChannelCode(m_channelCode.m_strValue);
    channel.SetAntiAliasingFiltering(m_antiAliasingFiltering.GetInt());
    channel.GetCoordinateSystem().SetDictId(m_coordinateSystem.GetInt());
    channel.GetCoordinateSystemDirection().SetDictId(m_coordinateSystemDirection.GetInt());
    channel.GetEngineeringUnits().SetDictId(m_engineeringUnits.GetInt());
    channel.SetInputMode(std::make_pair(m_inputMode.GetInt(), m_listInputMode[m_inputMode.GetInt()]));
    channel.GetIntegralType().SetDictId(m_integralType.GetInt());
    channel.GetIntegralUnits().SetDictId(m_integralUnits.GetInt());
    channel.SetIsReference(m_isReference.GetInt());
    channel.SetUpFreq(std::make_pair(m_upFreq.GetInt(), m_listUpFreq[m_upFreq.GetInt()]));
    channel.SetMessureType(std::make_pair(m_messureType.GetInt(), m_listMessaueType[m_messureType.GetInt()]));
    channel.SetFullValue(std::make_pair(m_fullvalue.GetInt(), m_listFullValue[m_fullvalue.GetInt()]));
    channel.SetPointNum(m_pointNum.GetInt());
    channel.SetSensitivity(m_sensitivity.GetFloatOrDouble());
    channel.SetChannelDesc(m_channelDesc.m_strValue);
    channel.GetChannelStatus().SetDictId(m_sersorStatus.GetInt());
    channel.SetTriggerMagnitude(m_triggerMagnitude.GetFloatOrDouble());
    channel.GetTriggerPolarity().SetDictId(m_triggerPolarity.GetInt());
    channel.GetWindowType().SetDictId(m_windowType.GetInt());
    channel.GetSensor().SetSensorId(m_sensorId.GetInt());
    channel.SetProjectId(m_projectId.GetInt());
    channel.SetElcPressure(std::make_pair(m_elcpressure.GetInt(), m_listElcpressure[m_elcpressure.GetInt()]));
    channel.GetTestLocation().SetLocationId(m_testlocatonId.GetInt());
    channel.SetXMin(m_xMin.GetFloatOrDouble());
    channel.SetXMax(m_xMax.GetFloatOrDouble());
    channel.SetYMin(m_yMin.GetFloatOrDouble());
    channel.SetYMax(m_yMax.GetFloatOrDouble());
}
void TbChannelDao::SetTableFieldValues(TbChannel channel){
    m_antiAliasingFiltering.SetValue(channel.GetAntiAliasingFiltering());
    m_coordinateSystem.SetValue(channel.GetCoordinateSystem().GetDictId());
    m_coordinateSystemDirection.SetValue(channel.GetCoordinateSystemDirection().GetDictId());
    m_engineeringUnits.SetValue(channel.GetEngineeringUnits().GetDictId());
    m_id.SetValue(channel.GetId());
    m_inputMode.SetValue(channel.GetInputMode().first);
    m_integralType.SetValue(channel.GetIntegralType().GetDictId());
    m_integralUnits.SetValue(channel.GetIntegralUnits().GetDictId());
    m_isReference.SetValue(channel.GetIsReference());
    m_upFreq.SetValue(channel.GetUpFreq().first);
    m_messureType.SetValue(channel.GetMessureType().first);
    m_fullvalue.SetValue(channel.GetFullValue().first);
    m_pointNum.SetValue(channel.GetPointNum());
    m_sensitivity.SetValue(channel.GetSensitivity());
    m_channelDesc.SetValue(channel.GetChannelDesc());
    m_channelCode.SetValue(channel.GetChannelCode());
    m_sersorStatus.SetValue(channel.GetChannelStatus().GetDictId());
    m_triggerMagnitude.SetValue(channel.GetTriggerMagnitude());
    m_triggerPolarity.SetValue(channel.GetTriggerPolarity().GetDictId());
    m_windowType.SetValue(channel.GetWindowType().GetDictId());
    m_sensorId.SetValue(channel.GetSensor().GetSensorId());
    m_projectId.SetValue(channel.GetProjectId());
    m_elcpressure.SetValue(channel.GetElcPressure().first);
    m_testlocatonId.SetValue(channel.GetTestLocation().GetLocationId());
    m_xMin.SetValue(channel.GetXMin());
    m_xMax.SetValue(channel.GetXMax());
    m_yMin.SetValue(channel.GetYMin());
    m_yMax.SetValue(channel.GetYMax());
}
