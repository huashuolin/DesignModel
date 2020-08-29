#pragma once
 
#include <iostream>
 
//���Ļ��ڴ����߻���
class CBaseHandler
{
public:
	CBaseHandler():
	m_pSuccessor(nullptr)
	{
 
	}
 
	virtual ~CBaseHandler()
	{
 
	}
 
	//��������
	virtual void DealProblem(int iData) = 0;
 
	//�����¸�����
	void SetSuccessor(CBaseHandler* pSuccessor)
	{
		if (nullptr != pSuccessor)
		{
			m_pSuccessor = pSuccessor;
		}
	}
 
	CBaseHandler* m_pSuccessor;
};
 
//Webǰ�˿�����Ա
class CWebDeveloper : public CBaseHandler
{
public:
	CWebDeveloper()
	{
 
	}
 
	virtual ~CWebDeveloper()
	{
 
	}
 
	void DealProblem(int iData)
	{
		if (iData > 0 && iData <= 10)
		{
			std::cout << "���������ǰ�˵����⣬��ȥ�㶨��" << std::endl;
		}
		else
		{
			if (nullptr != m_pSuccessor)
			{
				m_pSuccessor->DealProblem(iData);
			}
		}
	}
};
 
//�м��������Ա
class CMiddlewareDeveloper : public CBaseHandler
{
public:
	CMiddlewareDeveloper()
	{
 
	}
 
	virtual ~CMiddlewareDeveloper()
	{
 
	}
 
	void DealProblem(int iData)
	{
		if (iData > 10 && iData <= 20)
		{
			std::cout << "����������м�������⣬��ȥ�㶨��" << std::endl;
		}
		else
		{
			if (nullptr != m_pSuccessor)
			{
				m_pSuccessor->DealProblem(iData);
			}
		}
	}
};
 
//Java������Ա
class CJavaDeveloper :public CBaseHandler
{
public:
	CJavaDeveloper()
	{
 
	}
 
	virtual ~CJavaDeveloper()
	{
 
	}
 
	void DealProblem(int iData)
	{
		if (iData > 20 && iData <= 30)
		{
			std::cout << "���������java��˵����⣬��ȥ�㶨��" << std::endl;
		}
		else
		{
			if (nullptr != m_pSuccessor)
			{
				m_pSuccessor->DealProblem(iData);
			}
		}
	}
 
};
 
//���ݿ⿪����Ա
class CDBDeveloper : public CBaseHandler
{
public:
	CDBDeveloper()
	{
 
	}
 
	virtual ~CDBDeveloper()
	{
 
	}
 
	void DealProblem(int iData)
	{
		if (iData > 30 && iData <= 40)
		{
			std::cout << "������������ݿ�����⣬��ȥ�㶨��" << std::endl;
		}
		else
		{
			if (nullptr != m_pSuccessor)
			{
				m_pSuccessor->DealProblem(iData);
			}
		}
	}
};