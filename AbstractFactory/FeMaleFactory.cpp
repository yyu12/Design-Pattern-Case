#include "FemaleFactory.h"
#include "YellowHuman.h"
#include "BlackHuman.h"
#include "WhiteHuman.h"
#include <iostream>
using std::cout;
using std::endl;
CFemaleFactory::CFemaleFactory(){}
CFemaleFactory::~CFemaleFactory(){}
void CFemaleFactory::GetSex()
{
    cout<<"女"<<endl;
}
IHuman* CFemaleFactory::CreateYellowHuman(void)
{
    return new CYellowHuman();
}
IHuman* CFemaleFactory::CreateWhiteHuman(void)
{
    return new CWhiteHuman();
}
IHuman* CFemaleFactory::CreateBlackHuman(void)
{
    return new CBlackHuman();
}