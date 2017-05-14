#ifndef _WHITEHUMANFACTORY_H_
#define _WHITEHUMANFACTORY_H_
#include "IHumanFactory.h"
#include "IHuman.h"
class CWhiteHumanFactory:public IHumanFactory
{
public:
    CWhiteHumanFactory(void);
    virtual ~CWhiteHumanFactory(void);
    virtual IHuman* CreateHuman(void);
};
#endif //_WHITEHUMANFACTORY_H_
