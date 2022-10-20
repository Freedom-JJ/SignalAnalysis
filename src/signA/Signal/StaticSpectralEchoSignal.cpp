#include "StaticSpectralEchoSignal.h"

StaticSpectralEchoSignal::StaticSpectralEchoSignal()
{

}

void StaticSpectralEchoSignal::PushEchoSignal(double *chartPoints){

    this->m_staticSpectralEchoSignalQueue.push(chartPoints);
    //qDebug()<<"数据送进去了111_______________________________"<<endl;

}

std::map<QString,QVector<double>> StaticSpectralEchoSignal::PopEchoSignal(){

    if(this->m_staticSpectralEchoSignalQueue.size()==0){
        std::map<QString,QVector<double>> map_tem;
//        map_tem.insert(std::make_pair(QString::fromStdString("0"),QVector<double>(10000,0)));
//        map_tem.insert(std::make_pair(QString::fromStdString("1"),QVector<double>(10000,0)));
//        map_tem.insert(std::make_pair(QString::fromStdString("2"),QVector<double>(10000,0)));
//        map_tem.insert(std::make_pair(QString::fromStdString("3"),QVector<double>(10000,0)));
        return map_tem;
    }

    std::map<QString,QVector<double>> echoSignal;
    for(int code = 0 ; code < 4 ; code ++){
    QVector<double> tem;
    double* fftinput = *this->m_staticSpectralEchoSignalQueue.wait_and_pop();
    int pointCount = _msize(fftinput) / sizeof(*fftinput);
    int line = pointCount / 2;
    SmartFFTWComplexArray fftwOutput(pointCount);
    FFTWUtil::FastFourierTransformation(pointCount, fftinput,fftwOutput.GeFFTWComplexArray());
    fftw_complex * out = fftwOutput.GeFFTWComplexArray();

    for(int j = 0 ; j < line ; j++){
        tem.append(2 * sqrt(out[j][0] * out[j][0] + out[j][1] * out[j][1]));
    }

    echoSignal[QString::number(code)] = tem;
    tem.clear();

    delete fftinput;
    fftinput = nullptr;

    }
    return echoSignal;
}

void StaticSpectralEchoSignal::clearEchoSignal(){
    m_staticSpectralEchoSignalQueue.clear();
    while (!m_staticSpectralEchoSignalQueue.empty()){
        double* fftinput = *m_staticSpectralEchoSignalQueue.wait_and_pop();
        delete fftinput;
    }
}
