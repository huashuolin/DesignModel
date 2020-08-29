// main.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "Question.h"

int main()
{
	CQuestion Question;

	//�ò���A���������
	IStrategy* pStrategyA = new(std::nothrow) CConcreteStrategyA();
	if (nullptr != pStrategyA)
	{
		Question.SetStrategy(pStrategyA);
		Question.Solve();
		delete pStrategyA;
		pStrategyA = nullptr;
	}

	//�ò���B���������
	IStrategy* pStrategyB = new(std::nothrow) CConcreteStrategyB();
	if (nullptr != pStrategyB)
	{
		Question.SetStrategy(pStrategyB);
		Question.Solve();
		delete pStrategyB;
		pStrategyB = nullptr;
	}

	//�ò���C���������
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
