// main.cpp : 定义控制台应用程序的入口点。
//
 
#include "Builder.h"
 
 
int main()
{
	CBuilderDirector BuildDirector;
 
	CConcreteBuilderA* pConcreteBuilderA = new(std::nothrow) CConcreteBuilderA();
	BuildDirector.SetBuilder(pConcreteBuilderA);
	std::cout << "建造方法A执行" << std::endl;
	BuildDirector.Execute();
 
	CConcreteBuilderB* pConcreteBuilderB = new(std::nothrow) CConcreteBuilderB();
	BuildDirector.SetBuilder(pConcreteBuilderB);
	std::cout << "建造方法B执行" << std::endl;
	BuildDirector.Execute();
 
	CConcreteBuilderC* pConcreteBuilderC = new(std::nothrow) CConcreteBuilderC();
	BuildDirector.SetBuilder(pConcreteBuilderC);
	std::cout << "建造方法C执行" << std::endl;
	BuildDirector.Execute();
 
	if (nullptr != pConcreteBuilderA)
	{
		delete pConcreteBuilderA;
		pConcreteBuilderA = nullptr;
	}
 
	if (nullptr != pConcreteBuilderB)
	{
		delete pConcreteBuilderB;
		pConcreteBuilderB = nullptr;
	}
 
	if (nullptr != pConcreteBuilderC)
	{
		delete pConcreteBuilderC;
		pConcreteBuilderC = nullptr;
	}
 
	system("pause");
    return 0;
}
 