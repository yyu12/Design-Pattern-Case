#ifndef _IHUMANFACTORY_H_
#define _IHUMANFACTORY_H_
#include "IHuman.h"
class IHumanFactory
{
public:
    IHumanFactory(void){}
    virtual ~IHumanFactory(void){}
    virtual IHuman* CreateHuman() = 0;
};
#endif //_IHUMANFACTORY_H_
