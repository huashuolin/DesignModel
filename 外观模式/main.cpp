// main.cpp : �������̨Ӧ�ó������ڵ㡣
//
 
#include "Facade.h"
 
 
int main()
{
	CSubSystemA SubSystemA;
	std::cout << "��ϵͳA����Aִ�У�" << std::endl;
	SubSystemA.SubSysAMethodA();
	std::cout << "��ϵͳA����Bִ�У�" << std::endl;
	SubSystemA.SubSysAMethodB();
 
	CSubSystemB SubSystemB;
	std::cout << "��ϵͳB����ִ�У�" << std::endl;
	SubSystemB.SubSysBMethod();
 
	CSubSystemC SubSystemC;
	std::cout << "��ϵͳC����ִ�У�" << std::endl;
	SubSystemC.SubSysCMethod();
	
	system("pause");
    return 0;
}
 