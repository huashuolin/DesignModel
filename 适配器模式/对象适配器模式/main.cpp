// main.cpp : �������̨Ӧ�ó������ڵ㡣
//
 
#include "Adapter.h"
 
 
int main()
{
	CTarget* pTarget = new(std::nothrow) CAdapterForOldCalss();
	if (nullptr != pTarget)
	{
		pTarget->Request();//�˴�ʹ����ͨ�õĽӿڣ�Ҳʵ����Ҫ��������Ĺ���
	}
 
	system("pause");
    return 0;
}
 