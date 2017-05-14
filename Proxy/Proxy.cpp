/****

Proxy是比较有用途的一种模式,而且变种较多,应用场合覆盖从小结构到整个系统的大结构,Proxy是代理的意思,我们也许有代理服务器等概念,代理概念可以解释为:在出发点到目的地之间有一道中间层,意为代理.

设计模式中定义: 为其他对象提供一种代理以控制对这个对象的访问.

为什么要使用Proxy?
1.授权机制 不同级别的用户对同一对象拥有不同的访问权利,如Jive论坛系统中,就使用Proxy进行授权机制控制,访问论坛有两种人:注册用户和游客(未注册用户),Jive中就通过类似ForumProxy这样的代理来控制这两种用户对论坛的访问权限.

2.某个客户端不能直接操作到某个对象,但又必须和那个对象有所互动.
举例两个具体情况: 
(1)如果那个对象是一个是很大的图片,需要花费很长时间才能显示出来,那么当这个图片包含在文档中时,使用编辑器或浏览器打开这个文档,打开文档必须很迅速,不能等待大图片处理完成,这时需要做个图片Proxy来代替真正的图片.

(2)如果那个对象在Internet的某个远端服务器上,直接操作这个对象因为网络速度原因可能比较慢,那我们可以先用Proxy来代替那个对象.

总之原则是,对于开销很大的对象,只有在使用它时才创建,这个原则可以为我们节省很多宝贵的Java内存. 所以,有些人认为Java耗费资源内存,我以为这和程序编制思路也有一定的关系.

******/
#include "WangPo.h"
#include "PanJinLian.h"
#include "JiaShi.h"
#include <iostream>
using std::endl;
using std::cout;

void DatingWithPanJinLian()
{
    CWangPo *pWangPo;
    pWangPo = new CWangPo(new CPanJinLian());
    pWangPo->MakeEyesWithMan();
    pWangPo->HappyWithMan();
    delete pWangPo;
}

void DatingWithJiaShi()
{
    CWangPo *pWangPo;
    pWangPo = new CWangPo(new CJiaShi());
    pWangPo->MakeEyesWithMan();
    pWangPo->HappyWithMan();
    delete pWangPo;
}

int main()
{
    DatingWithJiaShi();
    DatingWithPanJinLian();
    return 0;
}