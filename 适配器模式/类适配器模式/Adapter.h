#pragma once
 
#include <iostream>
 
//目标类，含通用接口
class CTarget
{
public:
	CTarget()
	{
 
	}
 
	virtual ~CTarget()
	{
 
	}
 
	virtual void Request()
	{
		std::cout << "这是一个普通的请求" << std::endl;
	}
};
 
//老的类，需要被适配成通用的接口
class COldClass
{
public:
	COldClass()
	{
 
	}
 
	virtual ~COldClass()
	{
 
	}
 
	void SpecialRequest()
	{
		std::cout << "这是一个特殊的请求" << std::endl;
	}
};
 
//适配器类，将老的类的功能适配成通用接口
class CAdapterForOldCalss : public CTarget, private COldClass
{
public:
	CAdapterForOldCalss()
	{
 
	}
 
	virtual ~CAdapterForOldCalss()
	{
 
	}
 
	virtual void Request()
	{
		SpecialRequest();
	}
};