#ifndef _IOUTERUSER_H_
#define _IOUTERUSER_H_
#include "OuterUserBaseInfo.h"
#include "OuterUserHomeInfo.h"
#include "OuterUserOfficeInfo.h"
class IOuterUser
{
public:
    IOuterUser(void){}
    virtual ~IOuterUser(void){}
    COuterUserBaseInfo *GetUserBaseInfo();
    COuterUserHomeInfo *GetUserHomeInfo();
    COuterUserOfficeInfo *GetUserOfficeInfo();
};
#endif //_IOUTERUSER_H_
