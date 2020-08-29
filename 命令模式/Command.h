#pragma once
 
#include <iostream>
#include <string>
#include <map>
 
//程序员
class CProgrammer
{
public:
	CProgrammer()
	{
 
	}
 
	virtual ~CProgrammer()
	{
 
	}
 
	void DevelopWeb()
	{
		std::cout << "开发Web端" << std::endl;
	}
 
	void ModServer()
	{
		std::cout << "修改服务端" << std::endl;
	}
 
	void DevelopPC()
	{
		std::cout << "开发PC端" << std::endl;
	}
 
	void DevelopAndroid()
	{
		std::cout << "开发Android客户端" << std::endl;
	}
 
	void DevelopiOS()
	{
		std::cout << "开发iOS客户端" << std::endl;
	}
};
 
//命令基类
class ICommand
{
public:
	ICommand(CProgrammer* pProgrammer)
	:m_pProgrammer(pProgrammer)
	{
 
	}
 
	virtual ~ICommand()
	{
 
	}
 
	virtual void ExecuteCommand() = 0;
 
	CProgrammer* m_pProgrammer;
};
 
//开发web端的命令
class CDevWebCommand : public ICommand
{
public:
	CDevWebCommand(CProgrammer* pProgrammer) : ICommand(pProgrammer)
	{
 
	}
 
	virtual ~CDevWebCommand()
	{
 
	}
 
	void ExecuteCommand()
	{
		if (nullptr != m_pProgrammer)
		{
			m_pProgrammer->DevelopWeb();
		}
	}
};
 
//修改服务端的命令
class CModServerCommand : public ICommand
{
public:
	CModServerCommand(CProgrammer* pProgrammer) : ICommand(pProgrammer)
	{
 
	}
 
	virtual ~CModServerCommand()
	{
 
	}
 
	void ExecuteCommand()
	{
		if (nullptr != m_pProgrammer)
		{
			m_pProgrammer->ModServer();
		}
	}
};
 
//开发PC端的命令
class CDevPCCommand : public ICommand
{
public:
	CDevPCCommand(CProgrammer* pProgrammer) : ICommand(pProgrammer)
	{
 
	}
 
	virtual ~CDevPCCommand()
	{
 
	}
 
	void ExecuteCommand()
	{
		if (nullptr != m_pProgrammer)
		{
			m_pProgrammer->DevelopPC();
		}
	}
};
 
//开发Androidy客户端的命令
class CDevAndroidCommand : public ICommand
{
public:
	CDevAndroidCommand(CProgrammer* pProgrammer) : ICommand(pProgrammer)
	{
 
	}
 
	virtual ~CDevAndroidCommand()
	{
 
	}
 
	void ExecuteCommand()
	{
		if (nullptr != m_pProgrammer)
		{
			m_pProgrammer->DevelopAndroid();
		}
	}
};
 
//开发iOS客户端的命令
class CDeviOSCommand : public ICommand
{
public:
	CDeviOSCommand(CProgrammer* pProgrammer) : ICommand(pProgrammer)
	{
 
	}
 
	virtual ~CDeviOSCommand()
	{
 
	}
 
	void ExecuteCommand()
	{
		if (nullptr != m_pProgrammer)
		{
			m_pProgrammer->DevelopiOS();
		}
	}
};
 
//项目经理
class CProjectManager
{
public:
	CProjectManager()
	{
 
	}
 
	virtual ~ CProjectManager()
	{
 
	}
 
	void SetOrder(std::string strCommandName, ICommand* pCommand)
	{
		std::cout << "记录日志 : " << strCommandName << std::endl;
		m_mapCommand[strCommandName] = pCommand;
	}
 
	void RemoveOrder(std::string strCommandName)
	{
		std::cout << "记录日志 : 删除" << strCommandName << std::endl;
		std::map<std::string, ICommand*>::iterator itor = m_mapCommand.find(strCommandName);
		if (itor != m_mapCommand.end())
		{
			m_mapCommand.erase(itor);
		}
	}
 
	void Execute()
	{
		for (auto itor : m_mapCommand)
		{
			if (nullptr != itor.second)
			{
				itor.second->ExecuteCommand();
			}
		}
	}
 
private:
	std::map<std::string, ICommand*> m_mapCommand;
};