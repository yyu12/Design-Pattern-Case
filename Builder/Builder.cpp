#include "CarModel.h"
#include "BenzModel.h"
#include "BMWModel.h"
#include "BenzBuilder.h"
#include "BMWBuilder.h"
#include "Director.h"
#include <iostream>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::endl;

void DoBenzRun()
{
    cout<<"----Benz----"<<endl;
    CBenzModel *pBenz = new CBenzModel();
    vector<string> seq;
    seq.push_back("engine boom");
    seq.push_back("start");
    seq.push_back("stop");

    pBenz->SetSequence(&seq);
    pBenz->Run();
    delete pBenz;
}

void DoBuilder()
{
    cout<<"use same sequence，build model"<<endl;
    vector<string> seq;
    seq.push_back("engine boom");
    seq.push_back("start");
    seq.push_back("stop");

    CBenzBuilder benzBuilder;
    benzBuilder.SetSequence(&seq);
    CBenzModel *pBenz = dynamic_cast<CBenzModel*>(benzBuilder.GetCarModel()); 
    pBenz->Run();

    CBmwBuilder bmwBuilder;
    bmwBuilder.SetSequence(&seq);
    CBMWModel *pBmw = dynamic_cast<CBMWModel*>(bmwBuilder.GetCarModel()); 
    pBmw->Run();
}

void DoDirector()
{
    cout<<"-----all----"<<endl;
    CDirector director;
    for(int i=0; i<2; ++i)
        director.GetABenzModel()->Run();

    for(int i=0; i<2; ++i)
        director.GetBBenzModel()->Run();

    for(int i=0; i<2; ++i)
        director.GetCBMWModel()->Run();
}

int main()
{
    DoBenzRun();
    DoBuilder();
    DoDirector();
    
    return 0;
}
