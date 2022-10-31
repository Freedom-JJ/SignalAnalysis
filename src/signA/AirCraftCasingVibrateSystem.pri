HEADERS += \
    $$PWD/Controller/SignalController.h \
    $$PWD/Controller/channelcontroller.h \
    $$PWD/Controller/dictionarycontroller.h \
    $$PWD/Controller/productcontroller.h \
    $$PWD/Controller/usercontroller.h \
    $$PWD/Dao/mapper/pdattribute.h \
    $$PWD/Dao/mapper/pddatabase.h \
    $$PWD/Dao/mapper/pdsql.h \
    $$PWD/Dao/tbchanneldao.h \
    $$PWD/Dao/tbdictionarydao.h \
    $$PWD/Dao/tbequipmentdao.h \
    $$PWD/Dao/tbproductdao.h \
    $$PWD/Dao/tbproducttypedao.h \
    $$PWD/Dao/tbsensordao.h \
    $$PWD/Dao/tbsumsignallabeldao.h \
    $$PWD/Dao/tbtestlocationdao.h \
    $$PWD/Dao/tbuserdao.h \
    $$PWD/Entity/result.h \
    $$PWD/Entity/tbchannel.h \
    $$PWD/Entity/tbdictionary.h \
    $$PWD/Entity/tbequipment.h \
    $$PWD/Entity/tbproduct.h \
    $$PWD/Entity/tbproducttype.h \
    $$PWD/Entity/tbsensor.h \
    $$PWD/Entity/tbsumsignal.h \
    $$PWD/Entity/tbtestlocation.h \
    $$PWD/Entity/tbuser.h \
    $$PWD/Service/cchannelservice.h \
    $$PWD/Service/dictionaryservice.h \
    $$PWD/Service/productservice.h \
    $$PWD/Service/userservice.h \
    $$PWD/Signal/BaseEchoSignal.h \
    $$PWD/Signal/StaticSpectralEchoSignal.h \
    $$PWD/Utils/DataStructure.h \
    $$PWD/Utils/FFTWUtil.h \
    $$PWD/Utils/GetDataThread.h \
    $$PWD/Utils/PlayBackThread.h \
    $$PWD/Utils/SaveCollectionDataThread.h \
    $$PWD/Utils/SignalFeature.h \
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
    $$PWD/Controller/SignalController.cpp \
    $$PWD/Controller/channelcontroller.cpp \
    $$PWD/Controller/dictionarycontroller.cpp \
    $$PWD/Controller/productcontroller.cpp \
    $$PWD/Controller/usercontroller.cpp \
    $$PWD/Dao/mapper/pdattribute.cpp \
    $$PWD/Dao/mapper/pddatabase.cpp \
    $$PWD/Dao/mapper/pdsql.cpp \
    $$PWD/Dao/tbchanneldao.cpp \
    $$PWD/Dao/tbdictionarydao.cpp \
    $$PWD/Dao/tbequipmentdao.cpp \
    $$PWD/Dao/tbproductdao.cpp \
    $$PWD/Dao/tbproducttypedao.cpp \
    $$PWD/Dao/tbsensordao.cpp \
    $$PWD/Dao/tbsumsignallabeldao.cpp \
    $$PWD/Dao/tbtestlocationdao.cpp \
    $$PWD/Dao/tbuserdao.cpp \
    $$PWD/Entity/result.cpp \
    $$PWD/Entity/tbchannel.cpp \
    $$PWD/Entity/tbdictionary.cpp \
    $$PWD/Entity/tbequipment.cpp \
    $$PWD/Entity/tbproduct.cpp \
    $$PWD/Entity/tbproducttype.cpp \
    $$PWD/Entity/tbsensor.cpp \
    $$PWD/Entity/tbsumsignal.cpp \
    $$PWD/Entity/tbtestlocation.cpp \
    $$PWD/Entity/tbuser.cpp \
    $$PWD/Service/cchannelservice.cpp \
    $$PWD/Service/dictionaryservice.cpp \
    $$PWD/Service/productservice.cpp \
    $$PWD/Service/userservice.cpp \
    $$PWD/Signal/BaseEchoSignal.cpp \
    $$PWD/Signal/StaticSpectralEchoSignal.cpp \
    $$PWD/Utils/FFTWUtil.cpp \
    $$PWD/Utils/GetDataThread.cpp \
    $$PWD/Utils/PlayBackThread.cpp \
    $$PWD/Utils/SaveCollectionDataThread.cpp \
    $$PWD/Utils/SignalFeature.cpp \
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
