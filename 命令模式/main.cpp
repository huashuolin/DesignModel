// main.cpp : Defines the entry point for the console application.
//
 
#include "Command.h"
 
 
int main()
{
	CProgrammer Programmer;
	CDevWebCommand* pDevWebCommand = new(std::nothrow)CDevWebCommand(&Programmer);
	CModServerCommand* pModServerCommand = new(std::nothrow)CModServerCommand(&Programmer);
	CDevPCCommand* pDevPCCommand = new(std::nothrow)CDevPCCommand(&Programmer);
	CDevAndroidCommand* pDevAndroidCommand = new(std::nothrow)CDevAndroidCommand(&Programmer);
	CDeviOSCommand* pDeviOSCommand = new(std::nothrow)CDeviOSCommand(&Programmer);
 
	CProjectManager ProjectManager;
	ProjectManager.SetOrder("����Web��", pDevWebCommand);
	ProjectManager.SetOrder("�޸ķ����", pModServerCommand);
	ProjectManager.SetOrder("����PC��", pDevPCCommand);
	ProjectManager.SetOrder("����Android��", pDevAndroidCommand);
	ProjectManager.SetOrder("����iOS��", pDeviOSCommand);
 
	ProjectManager.RemoveOrder("����Android��");
 
	ProjectManager.Execute();
	system("pause");
    return 0;
}
 