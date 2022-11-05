#include "singnalcontrollertest.h"



void testmSaveSumSignal()
{
    SumSignal* sumSignal = new SumSignal();
    sumSignal->setId(generateUuid());
    sumSignal->setProjectId(1);
    sumSignal->setStartTime(getCurrentTime());
    sumSignal->setEndTime(getCurrentTime());
    qInfo()<<"新建sumSignal";
    SignalController signalController = SignalController();
    signalController.saveSumSignal(sumSignal);
    return;
}

void testmSaveSingleSignal()
{
    SumSignal* sumSignal = new SumSignal();
    sumSignal->setId(generateUuid());
    sumSignal->setProjectId(1);
    sumSignal->setStartTime(getCurrentTime());
    sumSignal->setEndTime(getCurrentTime());

    SingleSignal* singleSignal = new SingleSignal();
    singleSignal->setId(generateUuid());
    singleSignal->setDataUrl("/data/hello/1.txt");
    singleSignal->setChannelId(1);
    //这里应该传入的是一个sumSignal的id
    singleSignal->setSumSingalId(sumSignal->getId());
    singleSignal->setSignalStatus(1);

    SignalController signalController = SignalController();
    Result result = signalController.saveSingleSignal(singleSignal);
    qInfo()<<QString::fromStdString(result.getMsg());
}



void testSignalController()
{
    SignalController signalController = SignalController();

    SumSignal* sumSignal = new SumSignal();
    sumSignal->setId(generateUuid());
    sumSignal->setProjectId(1);
    sumSignal->setStartTime(getCurrentTime());

    //添加sumSignal
    signalController.saveSumSignal(sumSignal);

    SingleSignal* singleSignal = new SingleSignal();
    singleSignal->setId(generateUuid());
    singleSignal->setDataUrl("/data/hello/1.txt");
    singleSignal->setChannelId(1);
    singleSignal->setSignalStatus(1);
    singleSignal->setSumSingalId(sumSignal->getId());

    //添加singleSignal
    signalController.saveSingleSignal(singleSignal);

    SingleSignal* singleSignal2 = new SingleSignal();
    singleSignal2->setId(generateUuid());
    singleSignal2->setDataUrl("/data/hello/1.txt");
    singleSignal2->setChannelId(1);
    singleSignal2->setSignalStatus(1);
    singleSignal2->setSumSingalId(sumSignal->getId());

    signalController.saveSingleSignal(singleSignal2);

    sumSignal->setEndTime(getCurrentTime());

    //更新sumSignal
    signalController.updateSumSignal(sumSignal);

    vector<SingleSignal *> singleSignals;

    signalController.findSingleSignalsBySumSignalId(sumSignal->getId(),singleSignals);
    qInfo()<<"添加singleSignal个数为"<<singleSignals.size();
    qInfo()<<QString::fromStdString(singleSignals[0]->getId());


}
