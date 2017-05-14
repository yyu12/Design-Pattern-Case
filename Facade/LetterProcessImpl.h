#ifndef _LETTERPROCESSIMPL_H_
#define _LETTERPROCESSIMPL_H_
#include "ILetterProcess.h"
class CLetterProcessImpl:public ILetterProcess
{
public:
    CLetterProcessImpl(void);
    ~CLetterProcessImpl(void);

    void WriteContext(string context);
    void FillEnvelope(string address);
    void LetterIntoEnvelope();
    void SendLetter();
};
#endif //_LETTERPROCESSIMPL_H_
