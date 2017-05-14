#ifndef _CARMODEL_H_
#define _CARMODEL_H_

#include <vector>
#include <iostream>
using std::vector;
using std::string;
using std::cout;
using std::endl;

class CCarModel
{
public:
    CCarModel(void){};
    virtual ~CCarModel(void){};
    void Run();
    void SetSequence(vector<string> *pSeq);
protected:
    virtual void Start() = 0;
    virtual void Stop() = 0;
    virtual void Alarm() = 0;
    virtual void EngineBoom() = 0;
private:
    vector<string> *m_pSequence;
};

#endif //_CARMODEL_H_

