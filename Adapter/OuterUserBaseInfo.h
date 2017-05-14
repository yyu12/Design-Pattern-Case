#ifndef _OUTERUSERBASEINFO_H_
#define _OUTERUSERBASEINFO_H_
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class COuterUserBaseInfo
{
public:
    COuterUserBaseInfo(void){}
    ~COuterUserBaseInfo(void){}
    string GetUserName()
    {
        cout<<"Name is ..."<<endl;
        return "1";
    }
    string GetMobileNumber()
    {
        cout<<"Mobile number is ..."<<endl;
        return "1";
    }
};
#endif //_OUTERUSERBASEINFO_H_
