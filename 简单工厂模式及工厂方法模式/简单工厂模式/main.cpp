// main.cpp : �������̨Ӧ�ó������ڵ㡣
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
	    std::cout << "�����" << iResult << std::endl;
	    delete pOperation;
	    pOperation = nullptr;
	}
	system("pause");
    return 0;
}