#ifndef _IUSERINFO_H_
#define _IUSERINFO_H_
#include <iostream>
using std::string;
class IUserInfo
{
public:
    IUserInfo(void){}
    virtual ~IUserInfo(void){}
    virtual string GetUserName() = 0;
    virtual string GetHomeAddress() = 0;
    virtual string GetMobileNumber() = 0;
    virtual string GetOfficeTelNumber() = 0;
    virtual string GetJobPosition() = 0;
    virtual string GetHomeTelNumber() = 0;
};
#endif //_IUSERINFO_H_
