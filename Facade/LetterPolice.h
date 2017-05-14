#ifndef _LETTERPOLICE_H_
#define _LETTERPOLICE_H_
#include "ILetterProcess.h"
class CLetterPolice
{
public:
    CLetterPolice(void);
    ~CLetterPolice(void);
    void CheckLetter(ILetterProcess *pLetterProcess);
};
#endif //_LETTERPOLICE_H_
