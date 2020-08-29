// main.cpp : 定义控制台应用程序的入口点。
//

#include "Question.h"

int main()
{
	CQuestion Question;

	//用策略A解决该问题
	IStrategy* pStrategyA = new(std::nothrow) CConcreteStrategyA();
	if (nullptr != pStrategyA)
	{
		Question.SetStrategy(pStrategyA);
		Question.Solve();
		delete pStrategyA;
		pStrategyA = nullptr;
	}

	//用策略B解决该问题
	IStrategy* pStrategyB = new(std::nothrow) CConcreteStrategyB();
	if (nullptr != pStrategyB)
	{
		Question.SetStrategy(pStrategyB);
		Question.Solve();
		delete pStrategyB;
		pStrategyB = nullptr;
	}

	//用策略C解决该问题
	IStrategy* pStrategyC = new(std::nothrow) CConcreteStrategyC();
	if (nullptr != pStrategyC)
	{
		Question.SetStrategy(pStrategyC);
		Question.Solve();
		delete pStrategyC;
		pStrategyC = nullptr;
	}

	system("pause");
	return 0;
}
