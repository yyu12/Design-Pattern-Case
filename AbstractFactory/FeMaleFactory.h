#ifndef _FEMALEFACTORY_H_
#define _FEMALEFACTORY_H_
#include "IHumanFactory.h"
#include "IHuman.h"
class CFemaleFactory:public IHumanFactory
{
public:
    CFemaleFactory();
    ~CFemaleFactory();
    void GetSex();
    IHuman* CreateYellowHuman(void);
    IHuman* CreateWhiteHuman(void);
    IHuman* CreateBlackHuman(void);
};
#endif //_FEMALEFACTORY_H_
