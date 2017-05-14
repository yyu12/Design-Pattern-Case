#ifndef _BENZMODEL_H_
#define _BENZMODEL_H_

#include "CarModel.h"
class CBenzModel:public CCarModel
{
public:
    CBenzModel(void){};
    ~CBenzModel(void){};
protected:
    void Start();
    void Stop();
    void Alarm();
    void EngineBoom();
};

#endif //_BENZMODEL_H_
