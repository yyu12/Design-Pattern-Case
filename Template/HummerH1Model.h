#ifndef _HUMMERH1MODEL_H_
#define _HUMMERH1MODEL_H_
#include "HummerModel.h"
class CHummerH1Model : public CHummerModel
{
public:
    CHummerH1Model(void);
    ~CHummerH1Model(void);
    void SetAlarm(bool tag);
    void Start();
    void Stop();
    void Alarm();
    void EngineBoom();
    bool IsAlarm();
private:
    bool m_isAlarm;
};
#endif //_HUMMERH1MODEL_H_
