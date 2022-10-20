#include "FFTWUtil.h"

FFTWUtil::FFTWUtil()
{

}

FFTWUtil::~FFTWUtil(){

}
std::mutex FFTWUtil::m_hMutex;
bool FFTWUtil::FastFourierTransformation(int nCounts, double *din, fftw_complex *out){
    m_hMutex.lock();
    if ((din == NULL) || (out == NULL))
    {
        printf("Error:insufficient available memory\n");
        return false;
    }
    fftw_plan plan = fftw_plan_dft_r2c_1d(nCounts, din, out,FFTW_ESTIMATE);
    fftw_execute(plan);
    fftw_destroy_plan(plan);
    m_hMutex.unlock();
    return false;
}
