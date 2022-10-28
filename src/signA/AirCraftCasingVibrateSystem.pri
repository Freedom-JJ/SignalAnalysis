HEADERS += \
    $$PWD/Signal/BaseEchoSignal.h \
    $$PWD/Signal/StaticSpectralEchoSignal.h \
    $$PWD/Utils/DataStructure.h \
    $$PWD/Utils/FFTWUtil.h \
    $$PWD/Utils/GetDataThread.h \
    $$PWD/Utils/PlayBackThread.h \
    $$PWD/Utils/SaveCollectionDataThread.h \
    $$PWD/Utils/SmartFFTWComplexArray.h \
    $$PWD/Utils/ThreadSafeQueue.h \
    $$PWD/Utils/aircraftcasingvibratesystem.h \
    $$PWD/Utils/fftw3.h \
    $$PWD/View/JSpectrumWindow.h \
    $$PWD/View/jbasesamplewindow.h \
    $$PWD/View/jdataviewecho.h \
    $$PWD/View/jsampleview.h \
    $$PWD/View/jvoiceranddata.h \
    $$PWD/View/jvoicesampleview.h \
    $$PWD/View/qcustomplot.h \
    $$PWD/View/spectrum.h


SOURCES += \
    $$PWD/Signal/BaseEchoSignal.cpp \
    $$PWD/Signal/StaticSpectralEchoSignal.cpp \
    $$PWD/Utils/FFTWUtil.cpp \
    $$PWD/Utils/GetDataThread.cpp \
    $$PWD/Utils/PlayBackThread.cpp \
    $$PWD/Utils/SaveCollectionDataThread.cpp \
    $$PWD/Utils/SmartFFTWComplexArray.cpp \
    $$PWD/Utils/aircraftcasingvibratesystem.cpp \
    $$PWD/View/JspectrumWindow.cpp \
    $$PWD/View/jbasesamplewindow.cpp \
    $$PWD/View/jdataviewecho.cpp \
    $$PWD/View/jsampleview.cpp \
    $$PWD/View/jvoiceranddata.cpp \
    $$PWD/View/jvoicesampleview.cpp \
    $$PWD/View/qcustomplot.cpp \
    $$PWD/View/spectrum.cpp


DISTFILES +=

FORMS += \
    $$PWD/View/spectrum.ui
