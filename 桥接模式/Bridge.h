#pragma once
 
#include <iostream>
 
//�������
class ISoftware
{
public:
	ISoftware()
	{
 
	}
 
	virtual ~ISoftware()
	{
 
	}
 
	virtual void Run() = 0;
};
 
//MP3
class CMP3 : public ISoftware
{
public:
	CMP3()
	{
 
	}
 
	virtual ~CMP3()
	{
 
	}
 
	void Run()
	{
		std::cout << "MP3����" << std::endl;
	}
};
 
//ͨѶ¼
class CAddressBook : public ISoftware
{
public:
	CAddressBook()
	{
 
	}
 
	virtual ~CAddressBook()
	{
 
	}
 
	void Run()
	{
		std::cout << "ͨѶ¼" << std::endl;
	}
};
 
//����
class CMessage : public ISoftware
{
public:
	CMessage()
	{
 
	}
 
	virtual ~CMessage()
	{
 
	}
 
	void Run()
	{
		std::cout << "����" << std::endl;
	}
};
 
//�ֻ�����
class CMobilePhone
{
public:
	CMobilePhone()
	:m_pSoftware(nullptr)
	{
 
	}
 
	virtual ~CMobilePhone()
	{
 
	}
 
	void SetSoftware(ISoftware* pSoftware)
	{
		m_pSoftware = pSoftware;
	}
 
	virtual void Execute() = 0;
 
	ISoftware* m_pSoftware;
};
 
//ŵ�����ֻ�
class CNokia : public CMobilePhone
{
public:
	CNokia()
	{
 
	}
 
	virtual ~CNokia()
	{
 
	}
 
	void Execute()
	{
		std::cout << "ŵ����-";
		if (nullptr  != m_pSoftware)
		{
			m_pSoftware->Run();
		}
	}
};
 
//Ħ�������ֻ�
class CMotorola : public CMobilePhone
{
public:
	CMotorola()
	{
 
	}
 
	virtual ~CMotorola()
	{
 
	}
 
	void Execute()
	{
		std::cout << "Ħ������-";
		if (nullptr != m_pSoftware)
		{
			m_pSoftware->Run();
		}
	}
};