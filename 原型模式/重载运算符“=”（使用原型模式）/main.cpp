// main.cpp : Defines the entry point for the console application.
//
 
#include "ProtoType.h"
 
 
int main()
{
	CPerson Person1;
	Person1.SetName("уехЩ");
	Person1.SetAge(12);
	Person1.Show();
 
	CPerson Person2 = Person1;;
	Person2.Show();
 
	system("pause");
    return 0;
}
 