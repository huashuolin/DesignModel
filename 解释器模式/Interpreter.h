#pragma once
 
#include <string>
#include <iostream>
 
//ȡ��{}֮�������
//ȡ��[]֮�������
//����key������value
 
//��������
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
 
//������{}�����ݽ���
class CCurlyBraces : public IInterpreter
{
public:
	CCurlyBraces()
	{
 
	}
 
	//ȡ��{}֮�������
	void GetValue(std::string strData)
	{
		std::cout << "ȡ��{}֮�������" << std::endl;
	}
};
 
//������[]�����ݽ���
class CBrackets : public IInterpreter
{
public:
	CBrackets()
	{
 
	}
 
	virtual ~CBrackets()
	{
 
	}
 
	//ȡ��[]֮�������
	void GetValue(std::string strData)
	{
		std::cout << "ȡ��[]֮������ݣ�����Ϊ���飩" << std::endl;
	}
};
 
//����key��ȡvalue
class CGetValueByKey : public IInterpreter
{
public:
	CGetValueByKey()
	{
 
	}
 
	virtual ~CGetValueByKey()
	{
 
	}
 
	//����keyȡ��value
	void GetValue(std::string strData)
	{
		std::cout << "����keyȡ��value" << std::endl;
	}
};