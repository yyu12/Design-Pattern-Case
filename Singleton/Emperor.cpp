#include "Emperor.h"
#include <iostream>
#include <pthread.h>
#include <stdio.h>
using std::cout;
using std::endl;
using std::string;

CEmperor* CEmperor::m_pEmperor = NULL;
pthread_mutex_t CEmperor::m_Mutex = PTHREAD_MUTEX_INITIALIZER;
CEmperor::CGarbo CEmperor::m_Garbo;
CEmperor::CEmperor(void)
{
    cout<<"Create CEmperor Instance"<<endl;
}
CEmperor& CEmperor::operator=(const CEmperor& emperor)
{
    cout<<"Operator CEmperor"<<endl;
}
CEmperor::~CEmperor(void)
{
    cout<<"Destroy CEmperor Instance and release its resource"<<endl;
}
void CEmperor::EmperorInfo(void)
{
    char msgBuffer[50] = {0};
    sprintf(msgBuffer, "King,,,,,,,,,(%s)", m_pEmperorTag.c_str());
    string msg(msgBuffer);
    cout<<msg.c_str()<<endl;
}
CEmperor* CEmperor::GetInstance()
{
    if (NULL == m_pEmperor)
    {
        pthread_mutex_lock(&m_Mutex);
        if (NULL == m_pEmperor)
        {
            m_pEmperor = new CEmperor();
        }
        pthread_mutex_unlock(&m_Mutex);
    }
    return m_pEmperor;
}
void CEmperor::ReleaseInstance()
{
    if (NULL != m_pEmperor)
    {
        pthread_mutex_lock(&m_Mutex);
        if (NULL != m_pEmperor)
        {
            delete m_pEmperor;
            m_pEmperor = NULL;
        }
        pthread_mutex_unlock(&m_Mutex);
    }
}
void CEmperor::SetEmperorTag(string tag)
{
    m_pEmperorTag = tag;
}