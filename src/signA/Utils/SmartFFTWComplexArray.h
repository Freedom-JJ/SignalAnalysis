#ifndef SMARTFFTWCOMPLEXARRAY_H
#define SMARTFFTWCOMPLEXARRAY_H

/******************************************************************************
 * Copyright 2022/10/12 Co., Ltd.
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       SmartFFTWComplexArray.h
 * @brief      文件概述：智能傅里叶复数数组类
 *
 * @author     wangzexin<wangzexin19990311@163.com>
 * @date       2022/10/12
 * @location   哈尔滨理工大学人工智能实验室
 *****************************************************************************/
#include <stdio.h>
#include <string.h>
#include "fftw3.h"
#include "DataStructure.h"
class SmartFFTWComplexArray
{

private:

    LinearTable<fftw_complex> m_fftwComplexArray; //傅里叶数据存储区

public:
    SmartFFTWComplexArray(int size = 1000);
    ~SmartFFTWComplexArray();

    SmartFFTWComplexArray(const SmartFFTWComplexArray &fftwComplexArray);
    void operator=(const SmartFFTWComplexArray &fftwComplexArray);

    /**********************************************************************
    功能描述：向智能傅里叶复数数组的最后插入元素
    ----------------------------------------------------------------------
    ***********************************************************************/
    void push_back(fftw_complex fftwComplex);



    /**********************************************************************
    功能描述：清空傅里叶复数数组
    ----------------------------------------------------------------------
    ***********************************************************************/
    void clear();



    /**********************************************************************
    功能描述：清空傅里叶复数数组长度
    ----------------------------------------------------------------------
    ***********************************************************************/
    int size();



    /**********************************************************************
    功能描述：得到傅里叶复数数组
    ----------------------------------------------------------------------
    ***********************************************************************/
    fftw_complex * GeFFTWComplexArray();

};

#endif // SMARTFFTWCOMPLEXARRAY_H
