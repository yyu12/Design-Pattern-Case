#ifndef _ISTRATRGY_H_
#define _ISTRATRGY_H_
class IStrategy
{
public:
    IStrategy(void){};
    virtual ~IStrategy(void){};
    virtual void Operate(void) = 0;
};

#endif
