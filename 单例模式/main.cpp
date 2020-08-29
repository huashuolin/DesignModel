// main.cpp : 定义控制台应用程序的入口点。
//
 
#include "Singleton.h"
#include <iostream>
 
int main()
{
	CSingleton::GetInstance()->CountAdd(3);
	std::cout << "地址：" << CSingleton::GetInstance() << std::endl;
	std::cout << "计数：" << CSingleton::GetInstance()->GetCountNum() << std::endl;
 
	CSingleton::GetInstance()->CountAdd(90);
	std::cout << "地址：" << CSingleton::GetInstance() << std::endl;
	std::cout << "计数：" << CSingleton::GetInstance()->GetCountNum() << std::endl;
	system("pause");
    return 0;
}
 