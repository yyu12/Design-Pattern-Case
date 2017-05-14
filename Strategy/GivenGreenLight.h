#ifndef _GIVENGREENLIGHT_H_
#define _GIVENGREENLIGHT_H_
#include "IStrategy.h"

class CGivenGreenLight:public IStrategy
{
public:
    CGivenGreenLight(void);
    ~CGivenGreenLight(void);
    void Operate(void);
};

#endif
