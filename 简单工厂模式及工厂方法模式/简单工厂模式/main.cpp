// main.cpp : 定义控制台应用程序的入口点。
//
 
#include "stdafx.h"
#include "OperationFactory.h"
#include <iostream>
using namespace std;
 
int main()
{
	COperationFactory Factory;
	COperation* pOperation = nullptr;
	pOperation = Factory.GetOperation("+");
    if (nullptr != pOperation)
	{
	    pOperation->SetNumberA(20);
	    pOperation->SetNumberB(4);
	    int iResult = pOperation->GetResult();
	    std::cout << "结果：" << iResult << std::endl;
	    delete pOperation;
	    pOperation = nullptr;
	}
	system("pause");
    return 0;
}