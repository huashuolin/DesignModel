// main.cpp : Defines the entry point for the console application.
//
 
#include "Flyweight.h"
 
int main()
{
	CCupFactory CupFactory;
	//����С����
	{
		CCup* pCup = CupFactory.CreatCup(SMALLCUP, "��ǿ");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SMALLCUP, "����");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SMALLCUP, "����");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SMALLCUP, "��г");
		pCup->Show();
	}
 
	//�����б���
	{
		CCup* pCup = CupFactory.CreatCup(MEDIUMCUP, "����");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(MEDIUMCUP, "ƽ��");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(MEDIUMCUP, "����");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(MEDIUMCUP, "����");
		pCup->Show();
	}
 
	//��������
	{
		CCup* pCup = CupFactory.CreatCup(BIGCUP, "����");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(BIGCUP, "��ҵ");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(BIGCUP, "����");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(BIGCUP, "����");
		pCup->Show();
	}
	
	//�����������ͱ���1
	{
		CCup* pCup = CupFactory.CreatCup(SPECIALCUP1, "");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SPECIALCUP1, "");
		pCup->Show();
	}
 
	//�����������ͱ���2
	{
		CCup* pCup = CupFactory.CreatCup(SPECIALCUP2, "");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SPECIALCUP2, "");
		pCup->Show();
	}
 
	system("pause");
    return 0;
}
 