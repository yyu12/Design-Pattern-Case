#ifndef _BLOCKENEMY_H_
#define _BLOCKENEMY_H_
#include "IStrategy.h"

class CBlockEnemy:public IStrategy
{
public:
    CBlockEnemy(void);
    ~CBlockEnemy(void);
    void Operate(void);
};

#endif
