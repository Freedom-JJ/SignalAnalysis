/*******************************
*   File:       itimeaxis.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-16
*   eMail:      1714203542@qq.com
*   brief:      开启频谱图对时间轴的支持，使用接口的目的是为了在其他地方支持对时间轴的修改，避免直接传送频谱图对象
********************************/
#ifndef ITIMEAXIS_H
#define ITIMEAXIS_H

#include"Vo/analysisresult.h"
class ITimeAxis
{
public:
    ITimeAxis();
   virtual void openTimeAxis() = 0;
   virtual void closeTimeAxis() = 0;
   /**
    * @brief 往时间轴添加数据,供外部调用
    * @param res
    */
   virtual void addDataTimeAxis(QVector<AnalysisResult> res) = 0;
   virtual void addDataTimeAxis(AnalysisResult)=0;
};

#endif // ITIMEAXIS_H
