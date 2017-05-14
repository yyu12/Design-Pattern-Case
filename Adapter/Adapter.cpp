#include "IUserInfo.h"
#include "OuterUserInfo.h"
#include "UserInfo.h"
void DoIt()
{
    IUserInfo *pYouGirl = new CUserInfo();
    cout<<pYouGirl->GetMobileNumber()<<endl;
    delete pYouGirl;
}
void NowDoIt()
{
    IUserInfo *pYouGirl = new COuterUserInfo();
    cout<<pYouGirl->GetMobileNumber()<<endl;
    delete pYouGirl;
}

int main()
{
    DoIt();
    NowDoIt();
    return 0;
}
