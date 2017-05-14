#ifndef _WANGPO_H_
#define _WANGPO_H_
#include "IKindWomen.h"
class CWangPo:public IKindWomen
{
public:
    CWangPo(IKindWomen *IKindWomen);
    ~CWangPo(void);
    void HappyWithMan(void);
    void MakeEyesWithMan(void);
private:
    IKindWomen *m_pKindWomen;
};

#endif //_WANGPO_H_