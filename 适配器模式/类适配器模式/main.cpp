// main.cpp : 定义控制台应用程序的入口点。
//
 
#include "Adapter.h"
 
 
int main()
{
	CTarget* pTarget = new(std::nothrow) CAdapterForOldCalss();
	if (nullptr != pTarget)
	{
		pTarget->Request();//此处使用了通用的接口，也实现了要被适配类的功能
	}
 
	system("pause");
    return 0;
}
 