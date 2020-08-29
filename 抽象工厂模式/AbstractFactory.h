#pragma once
 
#include <iostream>
 
//�û����ݻ���
class IUser
{
public:
	IUser()
	{
 
	}
 
	virtual ~IUser()
	{
 
	}
 
	virtual void InsertUser() = 0;
	virtual void GetUser() = 0;
};
 
//SQLServer�û�������
class CSQLServerUser : public IUser
{
public:
	CSQLServerUser()
	{
 
	}
 
	virtual ~CSQLServerUser()
	{
 
	}
 
	void InsertUser()
	{
		std::cout << "SQLServer���ݿ�����û�����" << std::endl;
	}
 
	void GetUser()
	{
		std::cout << "SQLServer���ݿ�ȡ���û�����" << std::endl;
	}
};
 
//Mysql�û�������
class CMysqlUser : public IUser
{
public:
	CMysqlUser()
	{
 
	}
 
	virtual ~CMysqlUser()
	{
 
	}
 
	void InsertUser()
	{
		std::cout << "Mysql���ݿ�����û�����" << std::endl;
	}
 
	void GetUser()
	{
		std::cout << "Mysql���ݿ�ȡ���û�����" << std::endl;
	}
};
 
//�������ݻ���
class IDepartment
{
public:
	IDepartment()
	{
 
	}
 
	virtual ~IDepartment()
	{
 
	}
 
	virtual void InsertDepartment() = 0;
	virtual void GetDepartment() = 0;
};
 
//SQLServer����������
class CSQLServerDepartment : public IDepartment
{
public:
	CSQLServerDepartment()
	{
 
	}
 
	virtual ~CSQLServerDepartment()
	{
 
	}
 
	void InsertDepartment()
	{
		std::cout << "SQLServer���ݿ���벿������" << std::endl;
	}
 
	void GetDepartment()
	{
		std::cout << "SQLServer���ݿ�ȡ����������" << std::endl;
	}
};
 
//Mysql����������
class CMysqlDepartment : public IDepartment
{
public:
	CMysqlDepartment()
	{
 
	}
 
	virtual ~CMysqlDepartment()
	{
 
	}
 
	void InsertDepartment()
	{
		std::cout << "Mysql���ݿ���벿������" << std::endl;
	}
 
	void GetDepartment()
	{
		std::cout << "Mysql���ݿ�ȡ����������" << std::endl;
	}
};
 
//��������
class IFactory
{
public:
	IFactory()
	: m_pUser(nullptr)
	, m_pDepartment(nullptr)
	{
 
	}
 
	virtual ~IFactory()
	{
 
	}
 
	virtual IUser* CreateUser() = 0;
	virtual IDepartment* CreateDepartment() = 0;
	void DelUser()
	{
		if (nullptr != m_pUser)
		{
			delete m_pUser;
			m_pUser = nullptr;
		}
	}
	void DelDepartment()
	{
		if (nullptr != m_pDepartment)
		{
			delete m_pDepartment;
			m_pDepartment = nullptr;
		}
	}
 
	IUser* m_pUser;
	IDepartment* m_pDepartment;
};
 
//SQLServer������
class CSQLServerFactory : public IFactory
{
public:
	CSQLServerFactory()
	{
 
	}
 
	virtual ~CSQLServerFactory()
	{
 
	}
 
	IUser* CreateUser()
	{
		m_pUser = new(std::nothrow) CSQLServerUser();
		return m_pUser;
	}
 
	IDepartment* CreateDepartment()
	{
		m_pDepartment = new(std::nothrow) CSQLServerDepartment();
		return m_pDepartment;
	}
};
 
//Mysql������
class CMysqlFactory : public IFactory
{
public:
	CMysqlFactory()
	{
 
	}
 
	virtual ~CMysqlFactory()
	{
 
	}
 
	IUser* CreateUser()
	{
		m_pUser = new(std::nothrow) CMysqlUser();
		return m_pUser;
	}
 
	IDepartment* CreateDepartment()
	{
		m_pDepartment = new(std::nothrow) CMysqlDepartment();
		return m_pDepartment;
	}
};