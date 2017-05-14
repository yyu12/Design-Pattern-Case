#ifndef _IHUMANFACTORY_H_
#define _IHUMANFACTORY_H_
#include "IHuman.h"
class IHumanFactory
{
public:
    IHumanFactory(void){}
    virtual ~IHumanFactory(void){}
    virtual void GetSex() = 0;
    virtual IHuman* CreateYellowHuman() = 0;
    virtual IHuman* CreateWhiteHuman() = 0;
    virtual IHuman* CreateBlackHuman() = 0;
};
#endif //_IHUMANFACTORY_H_
