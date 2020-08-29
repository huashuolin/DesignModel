// main.cpp : Defines the entry point for the console application.
//
 
#include "MyClass.h"
 
 
int main()
{
	CMyClass MyClass;
	CMementoManager MementoMgr;
	MyClass.SetCommonDataA(10);
	MyClass.SetCommonDataB("Common_B");
	MyClass.SetCommonDataC("Common_C");
 
	MyClass.SetImportantDataA(11);
	MyClass.SetImportantDataB("ImportantDataB_1");
	MyClass.SetImportantDataC("ImportantDataC_1");
	MementoMgr.AddMemento("第一天", MyClass.CreateMemento());
 
	MyClass.SetImportantDataA(22);
	MyClass.SetImportantDataB("ImportantDataB_2");
	MyClass.SetImportantDataC("ImportantDataC_2");
	MementoMgr.AddMemento("第二天", MyClass.CreateMemento());
 
	MyClass.SetImportantDataA(33);
	MyClass.SetImportantDataB("ImportantDataB_3");
	MyClass.SetImportantDataC("ImportantDataC_3");
	MementoMgr.AddMemento("第三天", MyClass.CreateMemento());
 
	MyClass.SetImportantDataA(44);
	MyClass.SetImportantDataB("ImportantDataB_4");
	MyClass.SetImportantDataC("ImportantDataC_4");
 
	std::cout << "第一天的数据" << std::endl;
	MyClass.SetMemento(MementoMgr.GetMemto("第一天"));
	MyClass.PrintData();
 
	std::cout << "第二天的数据" << std::endl;
	MyClass.SetMemento(MementoMgr.GetMemto("第二天"));
	MyClass.PrintData();
 
	std::cout << "第三天的数据" << std::endl;
	MyClass.SetMemento(MementoMgr.GetMemto("第三天"));
	MyClass.PrintData();
 
	system("pause");
    return 0;
}
 