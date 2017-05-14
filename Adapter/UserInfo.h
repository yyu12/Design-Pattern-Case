#ifndef _USERINFO_H_
#define _USERINFO_H_
#include "IUserInfo.h"
class CUserInfo:public IUserInfo
{
public:
    CUserInfo(void);
    ~CUserInfo(void);
    string GetUserName();
    string GetHomeAddress();
    string GetMobileNumber();
    string GetOfficeTelNumber();
    string GetJobPosition();
    string GetHomeTelNumber();
};
#endif //_USERINFO_H_
