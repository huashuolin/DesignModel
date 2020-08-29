#pragma once
 
#include <iostream>
 
//链的环节处理者基类
class CBaseHandler
{
public:
	CBaseHandler():
	m_pSuccessor(nullptr)
	{
 
	}
 
	virtual ~CBaseHandler()
	{
 
	}
 
	//处理问题
	virtual void DealProblem(int iData) = 0;
 
	//设置下个环节
	void SetSuccessor(CBaseHandler* pSuccessor)
	{
		if (nullptr != pSuccessor)
		{
			m_pSuccessor = pSuccessor;
		}
	}
 
	CBaseHandler* m_pSuccessor;
};
 
//Web前端开发人员
class CWebDeveloper : public CBaseHandler
{
public:
	CWebDeveloper()
	{
 
	}
 
	virtual ~CWebDeveloper()
	{
 
	}
 
	void DealProblem(int iData)
	{
		if (iData > 0 && iData <= 10)
		{
			std::cout << "这个问题是前端的问题，我去搞定它" << std::endl;
		}
		else
		{
			if (nullptr != m_pSuccessor)
			{
				m_pSuccessor->DealProblem(iData);
			}
		}
	}
};
 
//中间件开发人员
class CMiddlewareDeveloper : public CBaseHandler
{
public:
	CMiddlewareDeveloper()
	{
 
	}
 
	virtual ~CMiddlewareDeveloper()
	{
 
	}
 
	void DealProblem(int iData)
	{
		if (iData > 10 && iData <= 20)
		{
			std::cout << "这个问题是中间件的问题，我去搞定它" << std::endl;
		}
		else
		{
			if (nullptr != m_pSuccessor)
			{
				m_pSuccessor->DealProblem(iData);
			}
		}
	}
};
 
//Java开发人员
class CJavaDeveloper :public CBaseHandler
{
public:
	CJavaDeveloper()
	{
 
	}
 
	virtual ~CJavaDeveloper()
	{
 
	}
 
	void DealProblem(int iData)
	{
		if (iData > 20 && iData <= 30)
		{
			std::cout << "这个问题是java后端的问题，我去搞定它" << std::endl;
		}
		else
		{
			if (nullptr != m_pSuccessor)
			{
				m_pSuccessor->DealProblem(iData);
			}
		}
	}
 
};
 
//数据库开发人员
class CDBDeveloper : public CBaseHandler
{
public:
	CDBDeveloper()
	{
 
	}
 
	virtual ~CDBDeveloper()
	{
 
	}
 
	void DealProblem(int iData)
	{
		if (iData > 30 && iData <= 40)
		{
			std::cout << "这个问题是数据库的问题，我去搞定它" << std::endl;
		}
		else
		{
			if (nullptr != m_pSuccessor)
			{
				m_pSuccessor->DealProblem(iData);
			}
		}
	}
};