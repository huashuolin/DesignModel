#pragma once
 
#include <iostream>
 
class CBaseBuilder
{
public:
	CBaseBuilder()
	{
 
	}
 
	virtual ~CBaseBuilder()
	{
 
	}
 
	//����һ
	virtual void Procedure1() = 0;
 
	//�����
	virtual void Procedure2() = 0;
 
	//������
	virtual void Procedure3() = 0;
};
 
class CConcreteBuilderA : public CBaseBuilder
{
public:
	CConcreteBuilderA()
	{
 
	}
 
	virtual ~CConcreteBuilderA()
	{
 
	}
 
	//A��������һ
	void Procedure1()
	{
		std::cout << "����A�����Ĳ���һ" << std::endl;
	}
 
	//A���������
	virtual void Procedure2()
	{
		std::cout << "����A�����Ĳ����" << std::endl;
	}
 
	//A����������
	virtual void Procedure3()
	{
		std::cout << "����A�����Ĳ�����" << std::endl;
	}
};
 
class CConcreteBuilderB : public CBaseBuilder
{
public:
	CConcreteBuilderB()
	{
 
	}
 
	virtual ~CConcreteBuilderB()
	{
 
	}
 
	//A��������һ
	void Procedure1()
	{
		std::cout << "����B�����Ĳ���һ" << std::endl;
	}
 
	//A���������
	virtual void Procedure2()
	{
		std::cout << "����B�����Ĳ����" << std::endl;
	}
 
	//A����������
	virtual void Procedure3()
	{
		std::cout << "����B�����Ĳ�����" << std::endl;
	}
};
 
class CConcreteBuilderC : public CBaseBuilder
{
public:
	CConcreteBuilderC()
	{
 
	}
 
	virtual ~CConcreteBuilderC()
	{
 
	}
 
	//A��������һ
	void Procedure1()
	{
		std::cout << "����C�����Ĳ���һ" << std::endl;
	}
 
	//A���������
	virtual void Procedure2()
	{
		std::cout << "����C�����Ĳ����" << std::endl;
	}
 
	//A����������
	virtual void Procedure3()
	{
		std::cout << "����C�����Ĳ�����" << std::endl;
	}
};
 
class CBuilderDirector
{
public:
	CBuilderDirector()
	{
 
	}
 
	virtual ~CBuilderDirector()
	{
 
	}
 
	void SetBuilder(CBaseBuilder* pBaseBuilder)
	{
		m_pBaseBuilder = pBaseBuilder;
	}
 
	void Execute()
	{
		m_pBaseBuilder->Procedure1();
		m_pBaseBuilder->Procedure2();
		m_pBaseBuilder->Procedure3();
	}
 
private:
	CBaseBuilder* m_pBaseBuilder;
 
};