#ifndef _BLACKHUMANFACTORY_H_
#define _BLACKHUMANFACTORY_H_
#include "IHuman.h"
#include "IHumanFactory.h"
class CBlackHumanFactory:public IHumanFactory
{
public:
    CBlackHumanFactory(void);
    virtual ~CBlackHumanFactory(void);
    virtual IHuman* CreateHuman(void);
};
#endif //_BLACKHUMANFACTORY_H_
