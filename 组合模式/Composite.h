#pragma once
 
#include <string>
#include <iostream>
#include <list>
#include <algorithm>
 
//��֯����
class IOganization
{
public:
	IOganization(std::string strName)
	: m_strName(strName)
	{
 
	}
 
	virtual ~IOganization()
	{
 
	}
 
	virtual void Add(IOganization* pOganization) = 0;
	virtual void Remove(IOganization* pOganization) = 0;
	virtual void DisPlay(int iDepth) = 0;
 
	std::string m_strName;
	std::list<IOganization*> m_listOganization;
};
 
//��˾�ࣨ�ܲ����ֲ������´��ȶ�Ϊ��˾�ࣩ
class CCompany : public IOganization
{
public:
	CCompany(std::string strName) : IOganization (strName)
	{
 
	}
 
	virtual ~CCompany()
	{
 
	}
 
	void Add(IOganization* pOganization)
	{
		m_listOganization.push_back(pOganization);
	}
 
	void Remove(IOganization* pOganization)
	{
		if (nullptr == pOganization)
		{
			return;
		}
		std::list<IOganization*>::iterator iter = std::find(m_listOganization.begin(), m_listOganization.end(), pOganization);
		if (iter == m_listOganization.end())
		{
			m_listOganization.erase(iter);
		}
	}
 
	void DisPlay(int iDepth)
	{
		for (size_t i = 0; i < iDepth; i++)
		{
			std::cout << "-";
		}
		std::cout << m_strName << std::endl;
		for (auto pOganization : m_listOganization)
		{
			if (nullptr != pOganization)
			{
				pOganization->DisPlay(iDepth + 3);
			}
		}
	}
};
 
//������Դ��
class CHRDepartment : public IOganization
{
public:
	CHRDepartment(std::string strName) : IOganization(strName)
	{
 
	}
 
	virtual ~CHRDepartment()
	{
 
	}
 
	void Add(IOganization* pOganization)
	{
 
	}
 
	virtual void Remove(IOganization* pOganization)
	{
 
	}
 
	virtual void DisPlay(int iDepth)
	{
		for (size_t i = 0; i < iDepth; i++)
		{
			std::cout << "-";
		}
		std::cout << "������Դ��" << std::endl;
	}
};
 
//������
class CTechDepartment : public IOganization
{
public:
	CTechDepartment(std::string strName) : IOganization(strName)
	{
 
	}
 
	virtual ~CTechDepartment()
	{
 
	}
 
	void Add(IOganization* pOganization)
	{
 
	}
 
	virtual void Remove(IOganization* pOganization)
	{
 
	}
 
	virtual void DisPlay(int iDepth)
	{
		for (size_t i = 0; i < iDepth; i++)
		{
			std::cout << "-";
		}
		std::cout << "������" << std::endl;
	}
};