#include "StaticSpectralEchoSignal.h"

StaticSpectralEchoSignal::StaticSpectralEchoSignal()
{

}

void StaticSpectralEchoSignal::PushEchoSignal(double *chartPoints){

    this->m_staticSpectralEchoSignalQueue.push(chartPoints);
    //qDebug()<<"数据送进去了111_______________________________"<<endl;

}

QVector<double> StaticSpectralEchoSignal::PopEchoSignal(){

    if(this->m_staticSpectralEchoSignalQueue.size()==0){
        QVector<double> map_tem;
        return map_tem;
    }
    QVector<double> echoSignal;
    double* fftinput = *this->m_staticSpectralEchoSignalQueue.wait_and_pop();
    int pointCount = _msize(fftinput) / sizeof(*fftinput);
    qDebug()<<"读取点数:"<<pointCount<<endl;
    int line = pointCount / 2;
    SmartFFTWComplexArray fftwOutput(pointCount);
    FFTWUtil::FastFourierTransformation(pointCount, fftinput,fftwOutput.GeFFTWComplexArray());
    fftw_complex * out = fftwOutput.GeFFTWComplexArray();

    for(int j = 0 ; j < line ; j++){
        echoSignal.append(2 * sqrt(out[j][0] * out[j][0] + out[j][1] * out[j][1]));
    }

    delete fftinput;
    fftinput = nullptr;

    return echoSignal;
}

void StaticSpectralEchoSignal::clearEchoSignal(){
    m_staticSpectralEchoSignalQueue.clear();
    while (!m_staticSpectralEchoSignalQueue.empty()){
        double* fftinput = *m_staticSpectralEchoSignalQueue.wait_and_pop();
        delete fftinput;
    }
}
