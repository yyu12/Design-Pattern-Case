#ifndef _BMWMODEL_H_
#define _BMWMODEL_H_

#include "CarModel.h"
class CBMWModel:public CCarModel
{
public:
    CBMWModel(void){};
    ~CBMWModel(void){};
protected:
    void Start();
    void Stop();
    void Alarm();
    void EngineBoom();
};

#endif //_BMWMODEL_H_