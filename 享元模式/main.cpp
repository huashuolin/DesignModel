// main.cpp : Defines the entry point for the console application.
//
 
#include "Flyweight.h"
 
int main()
{
	CCupFactory CupFactory;
	//生产小杯子
	{
		CCup* pCup = CupFactory.CreatCup(SMALLCUP, "富强");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SMALLCUP, "民主");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SMALLCUP, "文明");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SMALLCUP, "和谐");
		pCup->Show();
	}
 
	//生产中杯子
	{
		CCup* pCup = CupFactory.CreatCup(MEDIUMCUP, "自由");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(MEDIUMCUP, "平等");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(MEDIUMCUP, "公正");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(MEDIUMCUP, "法治");
		pCup->Show();
	}
 
	//生产大杯子
	{
		CCup* pCup = CupFactory.CreatCup(BIGCUP, "爱国");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(BIGCUP, "敬业");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(BIGCUP, "诚信");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(BIGCUP, "友善");
		pCup->Show();
	}
	
	//生产特殊造型杯子1
	{
		CCup* pCup = CupFactory.CreatCup(SPECIALCUP1, "");
		pCup->Show();
	}
	{
		CCup* pCup = CupFactory.CreatCup(SPECIALCUP1, "");
		pCup->Show();
	}
 
	//生产特殊造型杯子2
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
 