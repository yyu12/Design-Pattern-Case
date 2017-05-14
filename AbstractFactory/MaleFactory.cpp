#include "MaleFactory.h"
#include "YellowHuman.h"
#include "BlackHuman.h"
#include "WhiteHuman.h"
#include <iostream>
using std::cout;
using std::endl;
CMaleFactroy::CMaleFactroy(){}
CMaleFactroy::~CMaleFactroy(){}
void CMaleFactroy::GetSex()
{
    cout<<"男"<<endl;
}
IHuman* CMaleFactroy::CreateYellowHuman(void)
{
    return new CYellowHuman();
}
IHuman* CMaleFactroy::CreateWhiteHuman(void)
{
    return new CWhiteHuman();
}
IHuman* CMaleFactroy::CreateBlackHuman(void)
{
    return new CBlackHuman();
}