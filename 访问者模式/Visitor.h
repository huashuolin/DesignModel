#pragma once
 
#include <iostream>
#include <string>
 
//考虑因素基类
class IElement
{
public:
	IElement()
	{
 
	}
 
	virtual ~IElement()
	{
 
	}
 
	virtual void PrintPigCompanySituation() = 0;
	virtual void PrintSmallCompanySituation() = 0;
};
 
//公司基类
class ICompany
{
public:
	ICompany()
	{
 
	}
 
	virtual ~ICompany()
	{
 
	}
 
	virtual void Accept(IElement* pVisitor) = 0;
};
 
//管理制度、规章制度
class CRegime : public IElement
{
public:
	void PrintPigCompanySituation()
	{
		std::cout << "管理制度和规章制度方面：比较健全" << std::endl;
	}
 
	void PrintSmallCompanySituation()
	{
		std::cout << "管理制度和规章制度方面：不是很健全" << std::endl;
	}
};
 
//综合能力
class CCapacity : public IElement
{
public:
	void PrintPigCompanySituation()
	{
		std::cout << "综合能力方面：专注某一个模块，综合能力锻炼不是太多，但可以把这个模块做精做细" << std::endl;
	}
 
	void PrintSmallCompanySituation()
	{
		std::cout << "综合能力方面：人少，要做的事多，对综合能力提升较快" << std::endl;
	}
};
 
//职位上升
class CRose : public IElement
{
public:
	void PrintPigCompanySituation()
	{
		std::cout << "职位上升方面：由于人多，所以往上走就比较困难，同时公司让一个人去负责一个大项目的机会也很少" << std::endl;
	}
 
	void PrintSmallCompanySituation()
	{
		std::cout << "职位上升方面：人少，机会较多" << std::endl;
	}
};
 
//大公司
class CBigCompany : public ICompany
{
public:
	CBigCompany()
	{
 
	}
 
	virtual ~CBigCompany()
	{
 
	}
 
	void Accept(IElement* pVisitor)
	{
		if (nullptr != pVisitor)
		{
			pVisitor->PrintPigCompanySituation();
		}
	}
};
 
//小公司
class CSmallCompany : public ICompany
{
public:
	CSmallCompany()
	{
 
	}
 
	virtual ~CSmallCompany()
	{
 
	}
 
	void Accept(IElement* pVisitor)
	{
		if (nullptr != pVisitor)
		{
			pVisitor->PrintSmallCompanySituation();
		}
	}
};
 