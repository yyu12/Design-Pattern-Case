#ifndef _HUMMERH2MODEL_H_
#define _HUMMERH2MODEL_H_
#include "HummerModel.h"
class CHummerH2Model : public CHummerModel
{
public:
    CHummerH2Model(void);
    ~CHummerH2Model(void);
    void SetAlarm(bool tag);
    void Start();
    void Stop();
    void Alarm();
    void EngineBoom();
    bool IsAlarm();
private:
    bool m_isAlarm;
};
#endif //_HUMMERH2MODEL_H_
