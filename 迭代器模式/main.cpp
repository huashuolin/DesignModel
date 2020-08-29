// main.cpp : Defines the entry point for the console application.
//
 
#include "Iterator.h"
 
 
int main()
{
	CAggregate<string> * pAggr = new(std::nothrow) ConcreteCAggregate<string>();
	if (nullptr == pAggr)
	{
		return 0;
	}
 
	pAggr->AddData("张三");
	pAggr->AddData("李四");
	pAggr->AddData("王五");
 
	IIterator<string>* itor = pAggr->CreateIterator();
	if (nullptr == itor)
	{
		return 0;
	}
 
	for (itor->First(); !itor->IsDone(); itor->Next())
	{
		cout << *(itor->CurrentItem()) << endl;
	}
 
	delete itor;
	itor = nullptr;
	delete pAggr;
	pAggr = nullptr;
	system("pause");
	return 0;
}