***2022/10/23 21.11***
1. 更新JSpectrumWindow类
2. 添加void setYAxisRange(double start , double end)设置4个窗口y轴范围，需要取消动态伸缩才能起效
3. void setY_isScale(bool scale)设置Y轴是否动态伸缩
4. setXAxisRange(int count);设置X范围 0 - count
5. 改进思想 可以分别设置X，Y轴范围？
     
     
     /**
      * @brief 设置频谱范围
      * @param count为最大频谱，0为最小，那么就是总共count+1跟谱线
      */
     void 