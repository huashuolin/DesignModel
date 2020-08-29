// main.cpp : Defines the entry point for the console application.
//
 
#include "Visitor.h"
 
 
int main()
{
	CRegime* pRegime = new(std::nothrow) CRegime();
	CCapacity* pCapacity = new(std::nothrow) CCapacity();
	CRose* pRose = new(std::nothrow) CRose();
 
	std::cout << "大公司的情况" << std::endl;
	CBigCompany BigCompany;
	BigCompany.Accept(pRegime);
	BigCompany.Accept(pCapacity);
	BigCompany.Accept(pRose);
	
	std::cout << "小公司的情况" << std::endl;
	CSmallCompany SmallCompany;
	SmallCompany.Accept(pRegime);
	SmallCompany.Accept(pCapacity);
	SmallCompany.Accept(pRose);
 
	if (nullptr != pRegime)
	{
		delete pRegime;
		pRegime  = nullptr;
	}
	if (nullptr != pCapacity)
	{
		delete pCapacity;
		pCapacity = nullptr;
	}
	if (nullptr != pRose)
	{
		delete pRose;
		pRose = nullptr;
	}
 
	system("pause");
    return 0;
}
 