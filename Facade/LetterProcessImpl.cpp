#include "LetterProcessImpl.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

CLetterProcessImpl::CLetterProcessImpl(void){}
CLetterProcessImpl::~CLetterProcessImpl(void){}
void CLetterProcessImpl::WriteContext(string context)
{
    cout<<"填写信的内容。。。 。。。"<<endl;
}
void CLetterProcessImpl::FillEnvelope(string address)
{
    cout<<"填写收件人地址和名字。。。"<<endl;
}
void CLetterProcessImpl::LetterIntoEnvelope()
{
    cout<<"把信放在信封中。。"<<endl;
}
void CLetterProcessImpl::SendLetter()
{
    cout<<"邮递信封。。"<<endl;
}
