#pragma once
 
#include <string>
#include <map>
#include <iostream>
 
//����¼
class CMemento
{
public:
	CMemento(int iDataA, std::string strDataB, std::string strDataC)
		: m_iDataA(iDataA)
		, m_strDataB(strDataB)
		, m_strDataC(strDataC)
	{
 
	}
 
	virtual ~CMemento()
	{
 
	}
 
	int m_iDataA;
	std::string m_strDataB;
	std::string m_strDataC;
};
 
//��Ҫ��������
class CMyClass
{
public:
	CMyClass()
	{
 
	}
 
	virtual ~CMyClass()
	{
 
	}
 
	CMemento* CreateMemento()
	{
		return new(std::nothrow) CMemento(m_iImportantDataA, m_strImportantDataB, m_strImportantDataC);
	}
 
	void SetMemento(CMemento* pMemento)
	{
		if (nullptr != pMemento)
		{
			m_iImportantDataA = pMemento->m_iDataA;
			m_strImportantDataB = pMemento->m_strDataB;
			m_strImportantDataC = pMemento->m_strDataC;
		}
	}
 
	void SetCommonDataA(int iCommonDataA)
	{
		m_iCommonDataA = iCommonDataA;
	}
 
	void SetCommonDataB(std::string strCommonDataB)
	{
		m_strCommonDataB = strCommonDataB;
	}
 
	void SetCommonDataC(std::string strCommonDataC)
	{
		m_strCommonDataC = strCommonDataC;
	}
 
	void SetImportantDataA(int iImportantDataA)
	{
		m_iImportantDataA = iImportantDataA;
	}
 
	void SetImportantDataB(std::string strImportantDataB)
	{
		m_strImportantDataB = strImportantDataB;
	}
 
	void SetImportantDataC(std::string strImportantDataC)
	{
		m_strImportantDataC = strImportantDataC;
	}
 
	void PrintData()
	{
		std::cout << "ͨ������A : " << m_iCommonDataA << std::endl;
		std::cout << "ͨ������B : " << m_strCommonDataB << std::endl;
		std::cout << "ͨ������C : " << m_strCommonDataC << std::endl;
		std::cout << "��Ҫ����A : " << m_iImportantDataA << std::endl;
		std::cout << "��Ҫ����B : " << m_strImportantDataB << std::endl;
		std::cout << "��Ҫ����C : " << m_strImportantDataC << std::endl;
	}
 
private:
 
	//ͨ�����ݣ���¼״̬ʱ�����ݸ�����
	int m_iCommonDataA;
	std::string m_strCommonDataB;
	std::string m_strCommonDataC;
 
	//��¼״̬ʱ��Ҫ���ݵ�����
	int m_iImportantDataA;
	std::string m_strImportantDataB;
	std::string m_strImportantDataC;
};
 
//����¼����
class CMementoManager
{
public:
	CMementoManager()
	{
 
	}
 
	virtual ~CMementoManager()
	{
 
	}
 
	//��ӱ������������ݺ�ʱ���Ӧ
	void AddMemento(std::string strTime, CMemento* pMemento)
	{
		if (nullptr != pMemento)
		{
			m_mapMemento[strTime] = pMemento;
		}
	}
 
	//ɾ����Ӧ�¼��ı���
	void DelMemento(std::string strTime)
	{
		m_mapMemento.erase(strTime);
	}
 
	//���ұ���
	CMemento* GetMemto(std::string strTime)
	{
		return m_mapMemento[strTime];
	}
 
	//������б���¼
	void ClearMemento()
	{
		std::map<std::string, CMemento*>::iterator itor = m_mapMemento.begin();
		for (; itor != m_mapMemento.end(); ++itor)
		{
			if (nullptr != itor->second)
			{
				delete itor->second;
				itor->second = nullptr;
			}
		}
		m_mapMemento.clear();
	}
 
private:
	std::map<std::string, CMemento*> m_mapMemento;
};