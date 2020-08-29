#pragma once
 
#include <string>
#include <iostream>
#include <map>
 
class IMyWnd;
 
//�н��߻���
class IMediator
{
public:
	IMediator()
	{
 
	}
 
	virtual ~IMediator()
	{
 
	}
 
	virtual void InputWnd(std::string strName, IMyWnd* pWnd) = 0;
	virtual void Send(std::string strTargetWndName, std::string strData) = 0;
};
 
//���ڻ���
class IMyWnd
{
public:
	IMyWnd(std::string strName, IMediator* pMediator)
	: m_strName(strName)
	, m_pMediator(pMediator)
	{
		if (nullptr != pMediator)
		{
			pMediator->InputWnd(m_strName, this);
		}
	}
 
	virtual ~IMyWnd()
	{
 
	}
 
	virtual void SendMessage(std::string strTargetWndName, std::string strData) = 0;
	virtual void GetMessage(std::string strData) = 0;
 
	std::string m_strName;
	IMediator* m_pMediator;
};
 
//A�ര��
class CMyWndA : public IMyWnd
{
public:
	CMyWndA(std::string strName, IMediator* pMediator) : IMyWnd(strName, pMediator)
	{
 
	}
 
	virtual ~CMyWndA()
	{
 
	}
 
	void SendMessage(std::string strTargetWndName, std::string strData)
	{
		if (nullptr != m_pMediator)
		{
			std::cout << m_strName << "(A�ര��)��" << strTargetWndName << "���� : " << strData << std::endl;
			m_pMediator->Send(strTargetWndName, strData);
		}
		
	}
 
	void GetMessage(std::string strData)
	{
		std::cout << m_strName << "(A�ര��)�յ� : " << strData << std::endl;
	}
};
 
//B�ര��
class CMyWndB : public IMyWnd
{
public:
	CMyWndB(std::string strName, IMediator* pMediator) : IMyWnd(strName, pMediator)
	{
 
	}
 
	virtual ~CMyWndB()
	{
 
	}
 
	void SendMessage(std::string strTargetWndName, std::string strData)
	{
		if (nullptr != m_pMediator)
		{
			std::cout << m_strName << "(B�ര��)��" << strTargetWndName << "���� : " << strData << std::endl;
			m_pMediator->Send(strTargetWndName, strData);
		}
 
	}
 
	void GetMessage(std::string strData)
	{
		std::cout << m_strName << "(B�ര��)�յ� : " << strData << std::endl;
	}
};
 
//C�ര��
class CMyWndC : public IMyWnd
{
public:
	CMyWndC(std::string strName, IMediator* pMediator) : IMyWnd(strName, pMediator)
	{
 
	}
 
	virtual ~CMyWndC()
	{
 
	}
 
	void SendMessage(std::string strTargetWndName, std::string strData)
	{
		if (nullptr != m_pMediator)
		{
			std::cout << m_strName << "(C�ര��)��" << strTargetWndName << "���� : " << strData << std::endl;
			m_pMediator->Send(strTargetWndName, strData);
		}
 
	}
 
	void GetMessage(std::string strData)
	{
		std::cout << m_strName << "(C�ര��)�յ� : " << strData << std::endl;
	}
};
 
//����ϵͳ
class COperationSysterm : public IMediator
{
public:
	COperationSysterm()
	{
 
	}
 
	virtual ~COperationSysterm()
	{
 
	}
 
	void InputWnd(std::string strName, IMyWnd* pWnd)
	{
		m_mapWnd[strName] = pWnd;
	}
 
	void Send(std::string strTargetWndName, std::string strData)
	{
		IMyWnd* pWnd = m_mapWnd[strTargetWndName];
		if (nullptr != pWnd)
		{
			pWnd->GetMessage(strData);
		}
	}
	
private:
	std::map<std::string, IMyWnd*> m_mapWnd;
};