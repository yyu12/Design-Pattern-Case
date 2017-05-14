#ifndef _OUTERUSERHOMEINFO_H_
#define _OUTERUSERHOMEINFO_H_
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class COuterUserHomeInfo
{
public:
    COuterUserHomeInfo(void){}
    ~COuterUserHomeInfo(void){}
    string GetHomeAddress()
    {
        cout<<"Home address ..."<<endl;
        return "1";
    }
    string GetHomeTelNumber()
    {
        cout<<"Home tel-number ..."<<endl;
        return "1";
    }
};
#endif //_OUTERUSERHOMEINFO_H_
