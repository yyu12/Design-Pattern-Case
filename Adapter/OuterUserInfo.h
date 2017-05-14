#ifndef _OUTERUSERINFO_H_
#define _OUTERUSERINFO_H_
#include "IUserInfo.h"
#include "OuterUser.h"
#include <iostream>
using std::string;
class COuterUserInfo : public IUserInfo
{
public:
    COuterUserInfo(void);
    ~COuterUserInfo(void);
    string GetUserName();
    string GetHomeAddress();
    string GetMobileNumber();
    string GetOfficeTelNumber();
    string GetJobPosition();
    string GetHomeTelNumber();
private:
    COuterUser *m_pOuterUser;
};
#endif //_OUTERUSERINFO_H_
