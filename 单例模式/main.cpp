// main.cpp : �������̨Ӧ�ó������ڵ㡣
//
 
#include "Singleton.h"
#include <iostream>
 
int main()
{
	CSingleton::GetInstance()->CountAdd(3);
	std::cout << "��ַ��" << CSingleton::GetInstance() << std::endl;
	std::cout << "������" << CSingleton::GetInstance()->GetCountNum() << std::endl;
 
	CSingleton::GetInstance()->CountAdd(90);
	std::cout << "��ַ��" << CSingleton::GetInstance() << std::endl;
	std::cout << "������" << CSingleton::GetInstance()->GetCountNum() << std::endl;
	system("pause");
    return 0;
}
 