#ifndef _OUTERUSER_H_
#define _OUTERUSER_H_
#include "IOuterUser.h"
#include "OuterUserBaseInfo.h"
#include "OuterUserHomeInfo.h"
#include "OuterUserOfficeInfo.h"
class COuterUser:public IOuterUser
{
public:
    COuterUser(void);
    ~COuterUser(void);
    COuterUserBaseInfo *GetUserBaseInfo();
    COuterUserHomeInfo *GetUserHomeInfo();
    COuterUserOfficeInfo *GetUserOfficeInfo();
};
#endif //_OUTERUSER_H_
