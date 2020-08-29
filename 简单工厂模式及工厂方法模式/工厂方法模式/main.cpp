// main.cpp : Defines the entry point for the console application.
//
 
#include "FactoryMethod.h"
#include <iostream>
 
int main()
{
	//加法运算
	CFactoryAdd FactoryAdd;//减法、乘法、除法等运行，仅在此步骤不同，在此步创建不同的工厂类
	COperation* pOperationAdd = FactoryAdd.CreateOperation();
	if (nullptr != pOperationAdd)
	{
		pOperationAdd->SetNumberA(10);
		pOperationAdd->SetNumberB(5);
		int iResult = pOperationAdd->GetResult();
		std::cout << "运算结果 ： " << iResult << std::endl;
		delete pOperationAdd;
		pOperationAdd = nullptr;
	}
 
	system("pause");
    return 0;
}