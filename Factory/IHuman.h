#ifndef _IHUMAN_H_
#define _IHUMAN_H_
class IHuman
{
public:
    IHuman(void){}
    virtual ~IHuman(void){}
    virtual void Laugh() = 0;
    virtual void Cry() = 0;
    virtual void Talk() = 0;
};

#endif //_IHUMAN_H_
