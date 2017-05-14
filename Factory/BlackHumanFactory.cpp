#include "BlackHumanFactory.h"
#include "BlackHuman.h"
CBlackHumanFactory::CBlackHumanFactory(void){}
CBlackHumanFactory::~CBlackHumanFactory(void){}
IHuman* CBlackHumanFactory::CreateHuman(void)
{
    return new CBlackHuman();
}
