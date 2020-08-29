// main.cpp : Defines the entry point for the console application.
//
 
#include "Bridge.h"
 
#define DELETEMEMORY(pData) {if(nullptr != pData) {delete pData; pData = nullptr;}}
 
int main()
{
	ISoftware* pMP3 = new(std::nothrow) CMP3();
	ISoftware* pAddressBook = new(std::nothrow) CAddressBook();
	ISoftware* pMessage = new(std::nothrow) CMessage();
	
	//ŵ�����ֻ�
	CNokia Nokia;
	Nokia.SetSoftware(pMP3);
	Nokia.Execute();
	Nokia.SetSoftware(pAddressBook);
	Nokia.Execute();
	Nokia.SetSoftware(pMessage);
	Nokia.Execute();
 
	//Ħ�������ֻ�
	CMotorola Motorola;
	Motorola.SetSoftware(pMP3);
	Motorola.Execute();
	Motorola.SetSoftware(pAddressBook);
	Motorola.Execute();
	Motorola.SetSoftware(pMessage);
	Motorola.Execute();
 
	DELETEMEMORY(pMP3);
	DELETEMEMORY(pAddressBook);
	DELETEMEMORY(pMessage);
 
	system("pause");
    return 0;
}
 