#ifndef _CHUMMERMODE_H_
#define _CHUMMERMODE_H_
class CHummerModel
{
public:
    CHummerModel(void);
    ~CHummerModel(void);
    void Run();
protected:
    virtual void Start() = 0;
    virtual void Stop() = 0;
    virtual void Alarm() = 0;
    virtual void EngineBoom() = 0;
    virtual bool IsAlarm();
};
#endif //_IHUMMERMODE_H_
