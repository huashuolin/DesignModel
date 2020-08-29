#pragma once
 
#include "Operation.h"
#include <new>
 
//工厂基类，能够生产运算操作
class IFactory
{
public:
	IFactory()
	{
 
	}
 
	virtual ~IFactory()
	{
 
	}
 
	virtual COperation* CreateOperation() = 0;
};
 
//加法工厂
class CFactoryAdd : public IFactory
{
public:
	CFactoryAdd()
	{
 
	}
 
	virtual ~CFactoryAdd()
	{
 
	}
 
	COperation* CreateOperation()
	{
		return new(std::nothrow) COperationAdd();
	}
};
 
//减法工厂
class CFactorySub : public COperation
{
public:
	CFactorySub()
	{
 
	}
 
	virtual ~CFactorySub()
	{
 
	}
 
	COperation* CreateOperation()
	{
		return new(std::nothrow) COperationSub();
	}
};
 
//乘法工厂
class CFactoryMul : public IFactory
{
public:
	CFactoryMul()
	{
 
	}
 
	virtual ~CFactoryMul()
	{
 
	}
 
	COperation* CreateOperation()
	{
		return new(std::nothrow) COperationMul();
	}
};
 
//除法工厂
class CFactoryDiv : public IFactory
{
public:
	CFactoryDiv()
	{
 
	}
 
	virtual ~CFactoryDiv()
	{
 
	}
 
	COperation* CreateOperation()
	{
		return new(std::nothrow) COperationDiv();
	}
};