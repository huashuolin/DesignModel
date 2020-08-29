#pragma once
 
#include <iostream>
 
class CBase
{
public:
	CBase()
	{
 
	}
 
	virtual ~CBase()
	{
 
	}
 
	virtual void DoSomething() = 0;
};
 
class CChildA : public CBase
{
public:
	CChildA()
	{
 
	}
 
	virtual ~CChildA()
	{
 
	}
 
	void DoSomething()
	{
		std::cout << "I'm CChildA, do something" << std::endl;
	}
};
 
class CChildB : public CBase
{
public:
	CChildB()
	{
 
	}
 
	virtual ~CChildB()
	{
 
	}
 
	void DoSomething()
	{
		m_ChildA.DoSomething();
	}
 
private:
	CChildA m_ChildA;
};
 
