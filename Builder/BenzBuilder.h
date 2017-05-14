#ifndef _BENZBUILDER_H_
#define _BENZBUILDER_H_

#include "ICarBuilder.h"
class CBenzBuilder:public ICarBuilder
{
public:
    CBenzBuilder(void);
    ~CBenzBuilder(void);

    void SetSequence(vector<string>* pSeq);
    CCarModel* GetCarModel(void);

private:
    CCarModel* m_pBenz;
};

#endif //_BENZBUILDER_H_
