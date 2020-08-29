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
	ProjectManager.SetOrder("开发Web端", pDevWebCommand);
	ProjectManager.SetOrder("修改服务端", pModServerCommand);
	ProjectManager.SetOrder("开发PC端", pDevPCCommand);
	ProjectManager.SetOrder("开发Android端", pDevAndroidCommand);
	ProjectManager.SetOrder("开发iOS端", pDeviOSCommand);
 
	ProjectManager.RemoveOrder("开发Android端");
 
	ProjectManager.Execute();
	system("pause");
    return 0;
}
 