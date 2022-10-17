#include "StaticSpectralEchoSignal.h"

StaticSpectralEchoSignal::StaticSpectralEchoSignal()
{

}

void StaticSpectralEchoSignal::PushEchoSignal(double *chartPoints){

    this->m_staticSpectralEchoSignalQueue.push(chartPoints);
    qDebug()<<"数据送进去了111_______________________________"<<endl;

}

std::map<QString,QVector<double>> StaticSpectralEchoSignal::PopEchoSignal(){
    std::map<QString,QVector<double>> echoSignal;
//    for(int i=0;i<4;i++){
//        double* fftinput = *this->m_staticSpectralEchoSignalQueue.wait_and_pop();
////        int pointCount = _msize(fftinput) / sizeof(*fftinput);
////        int line = pointCount / 2;
////        SmartFFTWComplexArray fftwOutput(pointCount);
////        FFTWUtil::FastFourierTransformation(pointCount, fftinput,fftwOutput.GeFFTWComplexArray());
////        fftw_complex * out = fftwOutput.GeFFTWComplexArray();

////        vector<double> singleSignal(line,0);
////        for(int i=0;i<line;i++){
////            singleSignal[i] = 2 * sqrt(out[i][0] * out[i][0] + out[i][1] * out[i][1]);
////        }
////        echoSignal.push_back(singleSignal);

////        delete fftinput; // 删除new出来的傅立叶变换输入数组。
////        fftinput = nullptr;

//    }


        QVector<double> tem;
        static double  qq = 0;
        for(int code = 0 ; code < 4 ; code ++){
            for(int j = 0 ; j < 10000 ; j++){
                double signal = sin(qq + j * 0.01);
                tem.append(signal);
            }
            echoSignal[QString::number(code)] = tem;
            tem.clear();
        }
        qq += 0.2;
    return echoSignal;
}
