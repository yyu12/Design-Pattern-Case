#ifndef _OUTERUSEROFFICEINFO_H_
#define _OUTERUSEROFFICEINFO_H_
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class COuterUserOfficeInfo
{
public:
    COuterUserOfficeInfo(void){}
    ~COuterUserOfficeInfo(void){}
    string GetOfficeTelNumber()
    {
        cout<<"Office tel-number ..."<<endl;
        return "1";
    }
    string GetJobPosition()
    {
        cout<<"Job position ..."<<endl;
        return "1";
    }
};
#endif //_OUTERUSEROFFICEINFO_H_
