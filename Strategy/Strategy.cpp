#include "Context.h"
#include "BackDoor.h"
#include "GivenGreenLight.h"
#include "BlockEnemy.h"
#include <iostream>
using std::cout;
using std::endl;
int main()
{
    CContext *pContext;

    cout<<"第一个"<<endl;
    pContext = new CContext(new CBackDoor());
    pContext->Operate();
    delete pContext;

    cout<<"第二个"<<endl;
    pContext = new CContext(new CBlockEnemy());
    pContext->Operate();
    delete pContext;

    cout<<"第三个"<<endl;
    pContext = new CContext(new CGivenGreenLight());
    pContext->Operate();
    delete pContext;

    return 0;
}