#pragma once
 
#include <list>
#include <iostream>
#include <string>
 
class CBaseObserver
{
public:
	CBaseObserver()
	{
 
	}
	
	virtual ~CBaseObserver()
	{
 
	}
 
	virtual void Action()
	{
 
	}
};
 
class CBaseNotifier
{
public:
	CBaseNotifier()
	{
 
	}
 
	virtual ~CBaseNotifier()
	{
 
	}
 
	void AddObserver(CBaseObserver* pObserver)
	{
		m_listObserver.push_back(pObserver);
	}
 
	void DelObserver(CBaseObserver* pObserver)
	{
		m_listObserver.remove(pObserver);
	}
 
	void Notify()
	{
		for (auto pObserver : m_listObserver)
		{
			if (nullptr != pObserver)
			{
				pObserver->Action();
			}
		}
	}
 
private:
	std::list<CBaseObserver*> m_listObserver;//观察者列表
};
 
class CConcreteObserverA : public CBaseObserver
{
public:
	CConcreteObserverA(std::string strName)
	: m_strName(strName)
	{
 
	}
 
	virtual ~CConcreteObserverA()
	{
 
	}
 
	void Action()
	{
		std::cout << "A类观察者" << m_strName << "执行动作" << std::endl;
	}
 
private:
	std::string m_strName;
};
 
class CConcreteObserverB : public CBaseObserver
{
public:
	CConcreteObserverB(std::string strName)
	: m_strName(strName)
	{
 
	}
 
	virtual ~CConcreteObserverB()
	{
 
	}
 
	void Action()
	{
		std::cout << "B类观察者" << m_strName << "执行动作" << std::endl;
	}
 
private:
	std::string m_strName;
};
 
class CConcreteNotifier : public CBaseNotifier
{
public:
	CConcreteNotifier()
	{
 
	}
 
	virtual ~CConcreteNotifier()
	{
 
	}
 
private:
	int m_iValue;
};
 
 