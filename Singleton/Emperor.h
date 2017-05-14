#ifndef _EMPEROR_H_
#define _EMPEROR_H_
#include <iostream>
#include <pthread.h>
using std::endl;
using std::cout;
using std::string;
class CEmperor
{
public:
    static CEmperor *GetInstance();
    static void ReleaseInstance();
    void EmperorInfo(void);
    void SetEmperorTag(string tag);
private:
    CEmperor(void);
    virtual ~CEmperor(void);
    CEmperor& operator=(const CEmperor&);
    static CEmperor *m_pEmperor;
    static pthread_mutex_t m_Mutex;
    string m_pEmperorTag;
    
    class CGarbo
    {
    public:
        CGarbo()
        {
            cout<<"Create Garbo"<<endl;
        }
        ~CGarbo()
        {
            cout<<"Destroy Garbo"<<endl;
            if (NULL != m_pEmperor)
            {
                pthread_mutex_lock(&m_Mutex);
                if (NULL != m_pEmperor)
                {
                    cout<<"Remove instance"<<endl;
                    delete m_pEmperor;
                    m_pEmperor = NULL;
                }
                pthread_mutex_unlock(&m_Mutex);
            }
        }
    };
    static CGarbo m_Garbo;
};
#endif //_EMPEROR_H_
