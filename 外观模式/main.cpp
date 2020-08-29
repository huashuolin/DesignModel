// main.cpp : 定义控制台应用程序的入口点。
//
 
#include "Facade.h"
 
 
int main()
{
	CSubSystemA SubSystemA;
	std::cout << "子系统A方法A执行：" << std::endl;
	SubSystemA.SubSysAMethodA();
	std::cout << "子系统A方法B执行：" << std::endl;
	SubSystemA.SubSysAMethodB();
 
	CSubSystemB SubSystemB;
	std::cout << "子系统B方法执行：" << std::endl;
	SubSystemB.SubSysBMethod();
 
	CSubSystemC SubSystemC;
	std::cout << "子系统C方法执行：" << std::endl;
	SubSystemC.SubSysCMethod();
	
	system("pause");
    return 0;
}
 