// main.cpp : Defines the entry point for the console application.
//
 
#include "Mediator.h"
 
 
int main()
{
	COperationSysterm* pOS = new(std::nothrow) COperationSysterm();
	CMyWndA* pWndA = new(std::nothrow) CMyWndA("配置窗口", pOS);
	CMyWndB* pWndB = new(std::nothrow) CMyWndB("主界面窗口", pOS);
	CMyWndC* pWndC = new(std::nothrow) CMyWndC("提示窗口", pOS);
 
	pWndB->SendMessage("配置窗口", "更新配置");
	pWndA->SendMessage("提示窗口", "提示配置保存成功");
 
	system("pause");
    return 0;
}