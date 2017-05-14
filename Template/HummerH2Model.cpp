#include "HummerH2Model.h"
#include <iostream>
using std::cout;
using std::endl;
CHummerH2Model::CHummerH2Model(void)
{
    m_isAlarm = true;
}
CHummerH2Model::~CHummerH2Model(void){}
void CHummerH2Model::Start()
{
    cout<<"H2 start"<<endl;
}
void CHummerH2Model::Stop()
{
    cout<<"H2 stop"<<endl;
}
void CHummerH2Model::Alarm()
{
    cout<<"H2 alarm"<<endl;
}
void CHummerH2Model::EngineBoom()
{
    cout<<"H2 EngineBoom"<<endl;
}
bool CHummerH2Model::IsAlarm()
{
    return this->m_isAlarm;
}
void CHummerH2Model::SetAlarm(bool tag)
{
    this->m_isAlarm = tag;
}
