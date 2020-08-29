// main.cpp : �������̨Ӧ�ó������ڵ㡣
//
 
#include "Chain.h"
 
 
int main()
{
	CBaseHandler* pWebDeveloper = new(std::nothrow) CWebDeveloper();
	CBaseHandler* pMiddlewareDeveloper = new(std::nothrow) CMiddlewareDeveloper();
	CBaseHandler* pJavaDeveloper = new(std::nothrow) CJavaDeveloper();
	CBaseHandler* pDBDeveloper = new(std::nothrow) CDBDeveloper();
 
	//�������ṹ
	pWebDeveloper->SetSuccessor(pMiddlewareDeveloper);
	pMiddlewareDeveloper->SetSuccessor(pJavaDeveloper);
	pJavaDeveloper->SetSuccessor(pDBDeveloper);
 
	int iArrayProblem[] = { 2, 4, 33, 12 ,23 };
	for (auto Data : iArrayProblem)
	{
		pWebDeveloper->DealProblem(Data);
	}
 
	if (nullptr != pWebDeveloper)
	{
		delete pWebDeveloper;
		pWebDeveloper = nullptr;
	}
	if (nullptr != pMiddlewareDeveloper)
	{
		delete pMiddlewareDeveloper;
		pMiddlewareDeveloper = nullptr;
	}
	if (nullptr != pJavaDeveloper)
	{
		delete pJavaDeveloper;
		pJavaDeveloper = nullptr;
	}
	if (nullptr != pDBDeveloper)
	{
		delete pDBDeveloper;
		pDBDeveloper = nullptr;
	}
 
	system("pause");
    return 0;
}
 