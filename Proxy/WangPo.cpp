#include "WangPo.h"
CWangPo::CWangPo(IKindWomen *pKindWomen)
{
    this->m_pKindWomen = pKindWomen;
}

CWangPo::~CWangPo(void)
{
    delete this->m_pKindWomen;
}

void CWangPo::HappyWithMan()
{
    this->m_pKindWomen->HappyWithMan();
}

void CWangPo::MakeEyesWithMan()
{
    this->m_pKindWomen->MakeEyesWithMan();
}