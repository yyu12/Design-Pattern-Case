#ifndef _ILETTERPROCESS_H_
#define _ILETTERPROCESS_H_
#include <iostream>
using std::string;
class ILetterProcess
{
public:
    ILetterProcess(void){}
    virtual ~ILetterProcess(void){}
    virtual void WriteContext(string context) = 0;
    virtual void FillEnvelope(string address) = 0;
    virtual void LetterIntoEnvelope() = 0;
    virtual void SendLetter() = 0;
};
#endif //_ILETTERPROCESS_H_
