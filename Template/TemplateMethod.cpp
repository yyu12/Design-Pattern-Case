#include "HummerModel.h"
#include "HummerH1Model.h"
#include "HummerH2Model.h"
int main()
{
    CHummerModel *ph1 = new CHummerH1Model();
    ph1->Run();
    delete ph1;

    CHummerModel *ph2 = new CHummerH2Model();
    ph2->Run();
    delete ph2;

    CHummerH1Model *ph11 = new CHummerH1Model();
    ph11->SetAlarm(false);
    ph11->Run();
    delete ph11;

    return 0;
}
