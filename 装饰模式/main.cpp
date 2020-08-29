// main.cpp : Defines the entry point for the console application.
//
 
#include "Decorator.h"
 
 
int main()
{
	CWhiteShirtPerson* pWhiteShirtPerson = new(std::nothrow) CWhiteShirtPerson();
	CJeansPerson* pJeansPerson = new(std::nothrow) CJeansPerson();
	CBlackShoesPerson* pBlackShoesPerson = new(std::nothrow) CBlackShoesPerson();
 
	pJeansPerson->Decorate(pWhiteShirtPerson);
	pBlackShoesPerson->Decorate(pJeansPerson);
	pBlackShoesPerson->WearClothes();
 
	system("pause");
    return 0;
}
 