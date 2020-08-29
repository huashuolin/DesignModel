// main.cpp : Defines the entry point for the console application.
//
 
#include "Observer.h"
 
 
int main()
{
	CConcreteObserverA* pObserver1 = new(std::nothrow) CConcreteObserverA("�۲���1��");
	CConcreteObserverA* pObserver2 = new(std::nothrow) CConcreteObserverA("�۲���2��");
	CConcreteObserverB* pObserver3 = new(std::nothrow) CConcreteObserverB("�۲���3��");
 
	CConcreteNotifier ConcreteNotifier;
	ConcreteNotifier.AddObserver(pObserver1);
	ConcreteNotifier.AddObserver(pObserver2);
	ConcreteNotifier.AddObserver(pObserver3);
 
	ConcreteNotifier.Notify();
 
	if (nullptr != pObserver1)
	{
		delete pObserver1;
		pObserver1 = nullptr;
	}
 
	if (nullptr != pObserver2)
	{
		delete pObserver2;
		pObserver2 = nullptr;
	}
 
	if (nullptr != pObserver3)
	{
		delete pObserver3;
		pObserver3 = nullptr;
	}
 
	system("pause");
    return 0;
}
 