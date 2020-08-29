#pragma once

#include "Strategy.h"

class CQuestion
{
public:
	CQuestion()
	{
	}
	virtual ~CQuestion()
	{

	}

	void SetStrategy(IStrategy* pStrategy)
	{
		m_pStrategy = pStrategy;
	}

	void Solve()
	{
		m_pStrategy->AlgorithmInterface();
	}

private:
	IStrategy* m_pStrategy;
};