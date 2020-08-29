#pragma once
 
#include "Operation.h"
#include <new>
 
//�������࣬�ܹ������������
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
 
//�ӷ�����
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
 
//��������
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
 
//�˷�����
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
 
//��������
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