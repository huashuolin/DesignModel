// main.cpp : Defines the entry point for the console application.
//
 
#include "FactoryMethod.h"
#include <iostream>
 
int main()
{
	//�ӷ�����
	CFactoryAdd FactoryAdd;//�������˷������������У����ڴ˲��費ͬ���ڴ˲�������ͬ�Ĺ�����
	COperation* pOperationAdd = FactoryAdd.CreateOperation();
	if (nullptr != pOperationAdd)
	{
		pOperationAdd->SetNumberA(10);
		pOperationAdd->SetNumberB(5);
		int iResult = pOperationAdd->GetResult();
		std::cout << "������ �� " << iResult << std::endl;
		delete pOperationAdd;
		pOperationAdd = nullptr;
	}
 
	system("pause");
    return 0;
}