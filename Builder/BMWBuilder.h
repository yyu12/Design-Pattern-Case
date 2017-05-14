#ifndef _BMWBUILDER_H_
#define _BMWBUILDER_H_

#include "ICarBuilder.h"
class CBmwBuilder:public ICarBuilder
{
public:
    CBmwBuilder(void);
    ~CBmwBuilder(void);

    void SetSequence(vector<string>* pSeq);
    CCarModel* GetCarModel(void);

private:
    CCarModel* m_pBmw;
};

#endif //_BMWBUILDER_H_
