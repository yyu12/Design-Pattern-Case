#include "IHuman.h"
#include "YellowHuman.h"
#include "WhiteHuman.h"
#include "BlackHuman.h"
#include "IHumanFactory.h"
#include "MaleFactory.h"
#include "FemaleFactory.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

void DoFactoryMethod1()
{
 cout << "----------第一批人是这样的：女人" << endl;
    IHumanFactory *pHumanFactory = new CFemaleFactory();
    pHumanFactory->GetSex();
    IHuman *pHuman = pHumanFactory->CreateYellowHuman();
    pHuman->Cry();
    pHuman->Laugh();
    pHuman->Talk();
    delete pHuman;
    delete pHumanFactory;
}
void DoFactoryMethod2()
{
    cout << "----------第二批人是这样的：男人" << endl;
    IHumanFactory *pHumanFactory = new CMaleFactroy();
    pHumanFactory->GetSex();
    IHuman *pHuman = pHumanFactory->CreateBlackHuman();
    pHuman->Cry();
    pHuman->Laugh();
    pHuman->Talk();
    delete pHuman;
    delete pHumanFactory;
}
int main()
{
    cout << "----------工厂方法：" << endl;
    DoFactoryMethod1();
    DoFactoryMethod2();
    return 0;
}
