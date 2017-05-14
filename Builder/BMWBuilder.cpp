#include "BmwBuilder.h"
#include "BmwModel.h"
CBmwBuilder::CBmwBuilder(void)
{
    m_pBmw = new CBMWModel();
}
CBmwBuilder::~CBmwBuilder(void)
{
    delete m_pBmw;
}

void CBmwBuilder::SetSequence(vector<string>* pSeq)
{
    m_pBmw->SetSequence(pSeq);
}

CCarModel* CBmwBuilder::GetCarModel()
{
    return m_pBmw;
}
