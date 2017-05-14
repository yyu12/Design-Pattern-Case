#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

#include "BenzModel.h"
#include "BmwModel.h"
#include "BenzBuilder.h"
#include "BmwBuilder.h"
#include <vector>
using std::vector;
using std::string;

class CDirector
{
public:
    CDirector(void);
    ~CDirector(void);
    CBenzModel* GetABenzModel();
    CBenzModel* GetBBenzModel();
    CBMWModel* GetCBMWModel();
    CBMWModel* GetDBMWModel();
private:
    vector<string>* m_pSeqence;
    CBenzBuilder* m_pBenzBuilder;
    CBmwBuilder* m_pBMWBuilder;
};

#endif //_DIRECTOR_H_