#ifndef FFTWUTIL_H
#define FFTWUTIL_H
/******************************************************************************
 * Copyright 2022/10/12 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       FFTWUtil.h
 * @brief      文件概述：傅里叶变换Util
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/12
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/

#include <mutex>
#include "fftw3.h"


class FFTWUtil
{

public:
    static std::mutex m_hMutex;

public:
    FFTWUtil();
    ~FFTWUtil();

    /**********************************************************************
        功能描述： FFT变换，将原始数据转换成傅里叶数据
    ***********************************************************************/
    static bool FastFourierTransformation(int nCounts, double *din, fftw_complex *out);
};

#endif // FFTWUTIL_H
