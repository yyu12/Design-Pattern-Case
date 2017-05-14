#ifndef _ICARBUILDER_H_
#define _ICARBUILDER_H_

#include "CarModel.h"
#include <iostream>
#include <vector>
using std::string;
using std::vector;

class ICarBuilder
{
public:
    ICarBuilder(void){}
    virtual ~ICarBuilder(void){}
    virtual void SetSequence(vector<string> *pSeq) = 0;
    virtual CCarModel* GetCarModel() = 0;
};

#endif //_ICARBUILDER_H_
