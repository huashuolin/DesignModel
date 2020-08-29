#pragma once
 
#include <string>
#include <iostream>
 
//取出{}之间的内容
//取出[]之间的内容
//根据key解析出value
 
//解析基类
class IInterpreter
{
public:
	IInterpreter()
	{
 
	}
 
	virtual ~IInterpreter()
	{
 
	}
 
	virtual void GetValue(std::string strData) = 0;
};
 
//大括号{}内内容解析
class CCurlyBraces : public IInterpreter
{
public:
	CCurlyBraces()
	{
 
	}
 
	//取出{}之间的内容
	void GetValue(std::string strData)
	{
		std::cout << "取出{}之间的内容" << std::endl;
	}
};
 
//中括号[]内内容解析
class CBrackets : public IInterpreter
{
public:
	CBrackets()
	{
 
	}
 
	virtual ~CBrackets()
	{
 
	}
 
	//取出[]之间的内容
	void GetValue(std::string strData)
	{
		std::cout << "取出[]之间的内容（可能为数组）" << std::endl;
	}
};
 
//根据key获取value
class CGetValueByKey : public IInterpreter
{
public:
	CGetValueByKey()
	{
 
	}
 
	virtual ~CGetValueByKey()
	{
 
	}
 
	//根据key取出value
	void GetValue(std::string strData)
	{
		std::cout << "根据key取出value" << std::endl;
	}
};