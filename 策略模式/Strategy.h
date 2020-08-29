#pragma once

#include <iostream>

//���Ի���
class IStrategy
{
public:
	IStrategy()
	{

	}
	virtual ~IStrategy()
	{

	}

	virtual void AlgorithmInterface() = 0;
};

//����A��
class CConcreteStrategyA : public IStrategy
{
public:
	CConcreteStrategyA()
	{

	}
	virtual ~CConcreteStrategyA()
	{

	}

	void AlgorithmInterface()
	{
		std::cout << "�㷨Aִ��" << std::endl;
	}
};

//����B��
class CConcreteStrategyB : public IStrategy
{
public:
	CConcreteStrategyB()
	{

	}
	virtual ~CConcreteStrategyB()
	{

	}

	void AlgorithmInterface()
	{
		std::cout << "�㷨Bִ��" << std::endl;
	}
};

//����C��
class CConcreteStrategyC : public IStrategy
{
public:
	CConcreteStrategyC()
	{

	}
	virtual ~CConcreteStrategyC()
	{

	}

	void AlgorithmInterface()
	{
		std::cout << "�㷨Cִ��" << std::endl;
	}
};