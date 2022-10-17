#include "SmartFFTWComplexArray.h"

SmartFFTWComplexArray::SmartFFTWComplexArray(int size){
    this->m_fftwComplexArray.size = size;
    this->m_fftwComplexArray.index = 0;
    this->m_fftwComplexArray.data = (fftw_complex*)fftw_malloc(sizeof(fftw_complex)* this->m_fftwComplexArray .size);
}


SmartFFTWComplexArray::~SmartFFTWComplexArray()
{
    fftw_free(m_fftwComplexArray.data);
    m_fftwComplexArray.data = NULL;
}

SmartFFTWComplexArray::SmartFFTWComplexArray(const SmartFFTWComplexArray &fftwComplexArray){
    *this = fftwComplexArray;
}

void SmartFFTWComplexArray::operator=(const SmartFFTWComplexArray &fftwComplexArray){
    this->m_fftwComplexArray.size = fftwComplexArray.m_fftwComplexArray.size;
    this->m_fftwComplexArray.index = fftwComplexArray.m_fftwComplexArray.index;
    this->m_fftwComplexArray.data = (fftw_complex*)fftw_malloc(sizeof(fftw_complex)* this->m_fftwComplexArray.size);
    memcpy(this->m_fftwComplexArray.data, fftwComplexArray.m_fftwComplexArray.data, sizeof(fftw_complex)* fftwComplexArray.m_fftwComplexArray.index);
}

void SmartFFTWComplexArray::push_back(fftw_complex fftwComplex){
    if (m_fftwComplexArray.index >= m_fftwComplexArray.size){
        /////数组长度不够时，动态扩充数组长度
        ///创建临时的傅立叶数据的数组
        fftw_complex *dintemp = (fftw_complex*)fftw_malloc(sizeof(fftw_complex)* this->m_fftwComplexArray.size*2);
        memcpy(dintemp, m_fftwComplexArray.data, sizeof(fftw_complex)* this->m_fftwComplexArray.size);
        ////让指针数据指向新创建的内容
        m_fftwComplexArray.size = 2 * m_fftwComplexArray.size;
        fftw_free(m_fftwComplexArray.data);
        this->m_fftwComplexArray.data = dintemp;
        /*this->m_fftwComplexArray.data = (fftw_complex*)fftw_malloc(sizeof(fftw_complex)* this->m_fftwComplexArray.size);
        memcpy(m_fftwComplexArray.data, dintemp, sizeof(fftw_complex)* this->m_fftwComplexArray.size);*/
    }
    m_fftwComplexArray.data[m_fftwComplexArray.index][0] = fftwComplex[0];
    m_fftwComplexArray.data[m_fftwComplexArray.index][1] = fftwComplex[1];
    m_fftwComplexArray.index++;
}
int SmartFFTWComplexArray::size(){
    return m_fftwComplexArray.index;
}

void SmartFFTWComplexArray::clear(){
    m_fftwComplexArray.index = 0;
}
fftw_complex * SmartFFTWComplexArray::GeFFTWComplexArray(){
    return m_fftwComplexArray.data;
}
