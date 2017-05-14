#include "ModenPostOffice.h"
CModenPostOffice::CModenPostOffice(void)
{
    this->m_pLetterProcess = new CLetterProcessImpl();
    this->m_pLetterPolice = new CLetterPolice();
}
CModenPostOffice::~CModenPostOffice(void)
{
    delete m_pLetterPolice;
    delete m_pLetterProcess;
}
void CModenPostOffice::SendLetter(string context, string address)
{
    m_pLetterProcess->WriteContext(context);
    m_pLetterProcess->FillEnvelope(address);
    m_pLetterPolice->CheckLetter(m_pLetterProcess);
    m_pLetterProcess->LetterIntoEnvelope();
    m_pLetterProcess->SendLetter();
}
