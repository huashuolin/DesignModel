#pragma once

#include <iostream>

//策略基类
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

//策略A类
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
		std::cout << "算法A执行" << std::endl;
	}
};

//策略B类
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
		std::cout << "算法B执行" << std::endl;
	}
};

//策略C类
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
		std::cout << "算法C执行" << std::endl;
	}
};