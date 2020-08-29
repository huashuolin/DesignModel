#pragma once
 
#include <iostream>
 
//类A
class CClassA
{
public:
	CClassA()
	{
 
	}
 
	virtual ~CClassA()
	{
 
	}
 
	void MethodA()
	{
		std::cout << "执行A类的方法A" << std::endl;
	}
};
 
//类B
class CClassB
{
public:
	CClassB()
	{
 
	}
 
	virtual ~CClassB()
	{
 
	}
 
	void MethodB()
	{
		std::cout << "执行B类的方法B" << std::endl;
	}
};
 
//类C
class CClassC
{
public:
	CClassC()
	{
 
	}
 
	virtual ~CClassC()
	{
 
	}
 
	void MethodC()
	{
		std::cout << "执行C类的方法C" << std::endl;
	}
};
 
//类D
class CClassD
{
public:
	CClassD()
	{
 
	}
 
	virtual ~CClassD()
	{
 
	}
 
	void MethodD()
	{
		std::cout << "执行D类的方法D" << std::endl;
	}
};
 
//子系统A
class CSubSystemA
{
public:
	CSubSystemA()
	{
 
	}
 
	virtual ~CSubSystemA()
	{
 
	}
 
	void SubSysAMethodA()
	{
		m_ClassA.MethodA();
		m_ClassD.MethodD();
		m_ClassB.MethodB();
	}
 
	void SubSysAMethodB()
	{
		m_ClassB.MethodB();
		m_ClassD.MethodD();
	}
 
private:
	CClassA m_ClassA;
	CClassB m_ClassB;
	CClassD m_ClassD;
};
 
//子系统B
class CSubSystemB
{
public:
	CSubSystemB()
	{
 
	}
 
	virtual ~CSubSystemB()
	{
 
	}
 
	void SubSysBMethod()
	{
		m_ClassD.MethodD();;
	}
 
private:
	CClassD m_ClassD;
};
 
//子系统C
class CSubSystemC
{
public:
	CSubSystemC()
	{
 
	}
 
	virtual ~CSubSystemC()
	{
 
	}
 
	void SubSysCMethod()
	{
		m_ClassA.MethodA();
		m_ClassD.MethodD();
	}
 
private:
	CClassA m_ClassA;
	CClassD m_ClassD;
};