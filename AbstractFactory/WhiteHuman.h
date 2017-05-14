#ifndef _WHITEHUMAN_H_
#define _WHITEHUMAN_H_
#include "IHuman.h"
class CWhiteHuman:public IHuman
{
public:
    CWhiteHuman(void);
    ~CWhiteHuman(void);
    void Laugh();
    void Cry();
    void Talk();
};
#endif //_WHITEHUMAN_H_
