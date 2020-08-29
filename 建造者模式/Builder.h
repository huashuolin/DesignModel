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
 
	//步骤一
	virtual void Procedure1() = 0;
 
	//步骤二
	virtual void Procedure2() = 0;
 
	//步骤三
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
 
	//A方法步骤一
	void Procedure1()
	{
		std::cout << "这是A方法的步骤一" << std::endl;
	}
 
	//A方法步骤二
	virtual void Procedure2()
	{
		std::cout << "这是A方法的步骤二" << std::endl;
	}
 
	//A方法步骤三
	virtual void Procedure3()
	{
		std::cout << "这是A方法的步骤三" << std::endl;
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
 
	//A方法步骤一
	void Procedure1()
	{
		std::cout << "这是B方法的步骤一" << std::endl;
	}
 
	//A方法步骤二
	virtual void Procedure2()
	{
		std::cout << "这是B方法的步骤二" << std::endl;
	}
 
	//A方法步骤三
	virtual void Procedure3()
	{
		std::cout << "这是B方法的步骤三" << std::endl;
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
 
	//A方法步骤一
	void Procedure1()
	{
		std::cout << "这是C方法的步骤一" << std::endl;
	}
 
	//A方法步骤二
	virtual void Procedure2()
	{
		std::cout << "这是C方法的步骤二" << std::endl;
	}
 
	//A方法步骤三
	virtual void Procedure3()
	{
		std::cout << "这是C方法的步骤三" << std::endl;
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