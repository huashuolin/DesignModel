// main.cpp : Defines the entry point for the console application.
//
 
#include "AbstractFactory.h"
 
 
int main()
{
	CSQLServerFactory SQLServerFactory;//SQLServer���ݿ⹤��
	IUser* pUserSQLServer = SQLServerFactory.CreateUser();//��������SQLServer���ݿ��û����ݵĶ���ָ��
	IDepartment* pDepartmentSQLServer = SQLServerFactory.CreateDepartment();//��������SQLServer���ݲ������ݵĶ���ָ��
	pUserSQLServer->InsertUser();
	pUserSQLServer->GetUser();
	pDepartmentSQLServer->InsertDepartment();
	pDepartmentSQLServer->GetDepartment();
	SQLServerFactory.DelUser();
	SQLServerFactory.DelDepartment();
 
	CMysqlFactory MysqlFactory;//Mysql���ݿ⹤��
	IUser* pUserMysql = MysqlFactory.CreateUser();//��������mysql���ݿ��û����ݵĶ���ָ��
	IDepartment* pDepartmentMysql = MysqlFactory.CreateDepartment();//��������mysql���ݲ������ݵĶ���ָ��
	pUserMysql->InsertUser();
	pUserMysql->GetUser();
	pDepartmentMysql->InsertDepartment();
	pDepartmentMysql->GetDepartment();
	MysqlFactory.DelUser();
	MysqlFactory.DelDepartment();
 
	system("pause");
    return 0;
}
 