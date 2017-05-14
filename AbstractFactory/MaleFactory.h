#ifndef _MALEFACTORY_H_
#define _MALEFACTORY_H_
#include "IHumanFactory.h"
#include "IHuman.h"
class CMaleFactroy:public IHumanFactory
{
public:
    CMaleFactroy();
    ~CMaleFactroy();
    void GetSex();
    IHuman* CreateYellowHuman(void);
    IHuman* CreateWhiteHuman(void);
    IHuman* CreateBlackHuman(void);
};
#endif //_MALEFACTORY_H_
