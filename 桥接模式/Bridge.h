#pragma once
 
#include <iostream>
 
//软件基类
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
		std::cout << "MP3播放" << std::endl;
	}
};
 
//通讯录
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
		std::cout << "通讯录" << std::endl;
	}
};
 
//短信
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
		std::cout << "短信" << std::endl;
	}
};
 
//手机基类
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
 
//诺基亚手机
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
		std::cout << "诺基亚-";
		if (nullptr  != m_pSoftware)
		{
			m_pSoftware->Run();
		}
	}
};
 
//摩托罗拉手机
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
		std::cout << "摩托罗拉-";
		if (nullptr != m_pSoftware)
		{
			m_pSoftware->Run();
		}
	}
};