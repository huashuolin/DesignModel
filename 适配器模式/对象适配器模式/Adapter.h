#pragma once
 
#include <iostream>
 
//Ŀ���࣬��ͨ�ýӿ�
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
		std::cout << "����һ����ͨ������" << std::endl;
	}
};
 
//�ϵ��࣬��Ҫ�������ͨ�õĽӿ�
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
		std::cout << "����һ�����������" << std::endl;
	}
};
 
//�������࣬���ϵ���Ĺ��������ͨ�ýӿ�
class CAdapterForOldCalss : public CTarget
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
		m_OldClass.SpecialRequest();
	}
 
private:
	COldClass m_OldClass;
};