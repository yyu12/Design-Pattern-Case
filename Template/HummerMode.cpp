#include "HummerModel.h"
#include <iostream>
using std::cout;
using std::endl;
CHummerModel::CHummerModel(void){}
CHummerModel::~CHummerModel(void){}
void CHummerModel::Run()
{
    Start();
    EngineBoom();
    if (IsAlarm())
    {
        Alarm();
    }
}
bool CHummerModel::IsAlarm()
{
    return true;
}
