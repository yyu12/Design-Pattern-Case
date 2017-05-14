#ifndef _BLACKHUMAN_H_
#define _BLACKHUMAN_H_
#include "IHuman.h"
class CBlackHuman:public IHuman
{
public:
    CBlackHuman(void);
    ~CBlackHuman(void);
    void Laugh();
    void Cry();
    void Talk();
};
#endif //_BLACKHUMAN_H_
