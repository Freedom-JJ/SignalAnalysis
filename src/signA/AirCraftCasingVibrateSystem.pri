HEADERS += \
    $$PWD/Dao/pdsql.h \
    $$PWD/Dao/pdsqlinitialize.h \
    $$PWD/Dao/postdao.h \
    $$PWD/Dao/sumsignaldao.h \
    $$PWD/Dao/userdao.h \
    $$PWD/Domain/post.h \
    $$PWD/Domain/project.h \
    $$PWD/Domain/singlesignal.h \
    $$PWD/Domain/sumSignal.h \
    $$PWD/Domain/user.h \
    $$PWD/Logger/log.h \
    $$PWD/Signal/BaseEchoSignal.h \
    $$PWD/Signal/StaticSpectralEchoSignal.h \
    $$PWD/Tools/tool.h \
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
    $$PWD/Dao/pdsql.cpp \
    $$PWD/Dao/pdsqlinitialize.cpp \
    $$PWD/Dao/postdao.cpp \
    $$PWD/Dao/sumsignaldao.cpp \
    $$PWD/Dao/userdao.cpp \
    $$PWD/Domain/post.cpp \
    $$PWD/Domain/project.cpp \
    $$PWD/Domain/singlesignal.cpp \
    $$PWD/Domain/sumSignal.cpp \
    $$PWD/Domain/user.cpp \
    $$PWD/Logger/log.cpp \
    $$PWD/Signal/BaseEchoSignal.cpp \
    $$PWD/Signal/StaticSpectralEchoSignal.cpp \
    $$PWD/Tools/tool.cpp \
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


DISTFILES += \
    $$PWD/Dao/aricraft_db.sql

FORMS += \
    $$PWD/View/spectrum.ui
