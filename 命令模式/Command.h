#pragma once
 
#include <iostream>
#include <string>
#include <map>
 
//����Ա
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
		std::cout << "����Web��" << std::endl;
	}
 
	void ModServer()
	{
		std::cout << "�޸ķ����" << std::endl;
	}
 
	void DevelopPC()
	{
		std::cout << "����PC��" << std::endl;
	}
 
	void DevelopAndroid()
	{
		std::cout << "����Android�ͻ���" << std::endl;
	}
 
	void DevelopiOS()
	{
		std::cout << "����iOS�ͻ���" << std::endl;
	}
};
 
//�������
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
 
//����web�˵�����
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
 
//�޸ķ���˵�����
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
 
//����PC�˵�����
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
 
//����Androidy�ͻ��˵�����
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
 
//����iOS�ͻ��˵�����
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
 
//��Ŀ����
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
		std::cout << "��¼��־ : " << strCommandName << std::endl;
		m_mapCommand[strCommandName] = pCommand;
	}
 
	void RemoveOrder(std::string strCommandName)
	{
		std::cout << "��¼��־ : ɾ��" << strCommandName << std::endl;
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