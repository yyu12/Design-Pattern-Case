#ifndef _YELLOWHUMAN_H_
#define _YELLOWHUMAN_H_
#include "IHuman.h"
class CYellowHuman:public IHuman
{
public:
    CYellowHuman(void);
    ~CYellowHuman(void);
    void Laugh(void);
    void Cry(void);
    void Talk(void);
};
#endif //_YELLOWHUMAN_H_
