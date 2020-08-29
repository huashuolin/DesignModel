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
	MementoMgr.AddMemento("��һ��", MyClass.CreateMemento());
 
	MyClass.SetImportantDataA(22);
	MyClass.SetImportantDataB("ImportantDataB_2");
	MyClass.SetImportantDataC("ImportantDataC_2");
	MementoMgr.AddMemento("�ڶ���", MyClass.CreateMemento());
 
	MyClass.SetImportantDataA(33);
	MyClass.SetImportantDataB("ImportantDataB_3");
	MyClass.SetImportantDataC("ImportantDataC_3");
	MementoMgr.AddMemento("������", MyClass.CreateMemento());
 
	MyClass.SetImportantDataA(44);
	MyClass.SetImportantDataB("ImportantDataB_4");
	MyClass.SetImportantDataC("ImportantDataC_4");
 
	std::cout << "��һ�������" << std::endl;
	MyClass.SetMemento(MementoMgr.GetMemto("��һ��"));
	MyClass.PrintData();
 
	std::cout << "�ڶ��������" << std::endl;
	MyClass.SetMemento(MementoMgr.GetMemto("�ڶ���"));
	MyClass.PrintData();
 
	std::cout << "�����������" << std::endl;
	MyClass.SetMemento(MementoMgr.GetMemto("������"));
	MyClass.PrintData();
 
	system("pause");
    return 0;
}
 