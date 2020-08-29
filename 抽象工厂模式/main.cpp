// main.cpp : Defines the entry point for the console application.
//
 
#include "AbstractFactory.h"
 
 
int main()
{
	CSQLServerFactory SQLServerFactory;//SQLServer数据库工厂
	IUser* pUserSQLServer = SQLServerFactory.CreateUser();//创建操作SQLServer数据库用户数据的对象指针
	IDepartment* pDepartmentSQLServer = SQLServerFactory.CreateDepartment();//创建操作SQLServer数据部门数据的对象指针
	pUserSQLServer->InsertUser();
	pUserSQLServer->GetUser();
	pDepartmentSQLServer->InsertDepartment();
	pDepartmentSQLServer->GetDepartment();
	SQLServerFactory.DelUser();
	SQLServerFactory.DelDepartment();
 
	CMysqlFactory MysqlFactory;//Mysql数据库工厂
	IUser* pUserMysql = MysqlFactory.CreateUser();//创建操作mysql数据库用户数据的对象指针
	IDepartment* pDepartmentMysql = MysqlFactory.CreateDepartment();//创建操作mysql数据部门数据的对象指针
	pUserMysql->InsertUser();
	pUserMysql->GetUser();
	pDepartmentMysql->InsertDepartment();
	pDepartmentMysql->GetDepartment();
	MysqlFactory.DelUser();
	MysqlFactory.DelDepartment();
 
	system("pause");
    return 0;
}
 