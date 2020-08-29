// main.cpp : Defines the entry point for the console application.
//
 
#include "ProtoType.h"
 
 
int main()
{
	CPerson Person1;
	Person1.SetName("张三");
	Person1.SetAge(12);
	Person1.Show();
 
	CPerson Person2;
	Person2.SetName("张三");
	Person2.SetAge(12);
	Person2.Show();
 
	system("pause");
	return 0;
}