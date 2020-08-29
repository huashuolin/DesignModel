#pragma once
 
#include <iostream>
 
//��A
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
		std::cout << "ִ��A��ķ���A" << std::endl;
	}
};
 
//��B
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
		std::cout << "ִ��B��ķ���B" << std::endl;
	}
};
 
//��C
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
		std::cout << "ִ��C��ķ���C" << std::endl;
	}
};
 
//��D
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
		std::cout << "ִ��D��ķ���D" << std::endl;
	}
};
 
//��ϵͳA
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
 
//��ϵͳB
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
 
//��ϵͳC
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