// main.cpp : Defines the entry point for the console application.
//
 
#include "Mediator.h"
 
 
int main()
{
	COperationSysterm* pOS = new(std::nothrow) COperationSysterm();
	CMyWndA* pWndA = new(std::nothrow) CMyWndA("���ô���", pOS);
	CMyWndB* pWndB = new(std::nothrow) CMyWndB("�����洰��", pOS);
	CMyWndC* pWndC = new(std::nothrow) CMyWndC("��ʾ����", pOS);
 
	pWndB->SendMessage("���ô���", "��������");
	pWndA->SendMessage("��ʾ����", "��ʾ���ñ���ɹ�");
 
	system("pause");
    return 0;
}