#pragma once
 
#include <iostream>
 
//用户数据基类
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
 
//SQLServer用户数据类
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
		std::cout << "SQLServer数据库插入用户数据" << std::endl;
	}
 
	void GetUser()
	{
		std::cout << "SQLServer数据库取出用户数据" << std::endl;
	}
};
 
//Mysql用户数据类
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
		std::cout << "Mysql数据库插入用户数据" << std::endl;
	}
 
	void GetUser()
	{
		std::cout << "Mysql数据库取出用户数据" << std::endl;
	}
};
 
//部分数据基类
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
 
//SQLServer部门数据类
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
		std::cout << "SQLServer数据库插入部门数据" << std::endl;
	}
 
	void GetDepartment()
	{
		std::cout << "SQLServer数据库取出部门数据" << std::endl;
	}
};
 
//Mysql部门数据类
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
		std::cout << "Mysql数据库插入部门数据" << std::endl;
	}
 
	void GetDepartment()
	{
		std::cout << "Mysql数据库取出部门数据" << std::endl;
	}
};
 
//工厂基类
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
 
//SQLServer工厂类
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
 
//Mysql工厂类
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