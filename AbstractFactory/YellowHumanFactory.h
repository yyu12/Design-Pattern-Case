#ifndef _YELLOWHUMANFACTORY_H_
#define _YELLOWHUMANFACTORY_H_
#include "IHuman.h"
#include "IHumanFactory.h"
class CYellowHumanFactory:public IHumanFactory
{
public:
    CYellowHumanFactory(void);
    virtual ~CYellowHumanFactory(void);
    virtual IHuman* CreateHuman(void);
};
#endif //_YELLOWHUMANFACTORY_H_
