#pragma once
 
#include <iostream>
 
//»ù±¾µÄÈË£¬ÊµÏÖ
class CPerson
{
public:
	CPerson()
	: m_pComponent(nullptr)
	{
 
	}
 
	virtual ~CPerson()
	{
 
	}
 
	virtual void Decorate(CPerson* pComponent)
	{
		m_pComponent = pComponent;
	}
 
	virtual void WearClothes()
	{
		if (nullptr != m_pComponent)
		{
			m_pComponent->WearClothes();
		}
	}
 
 
 
public:
	CPerson* m_pComponent;
};
 
//´©°×T
class CWhiteShirtPerson : public CPerson
{
public:
	CWhiteShirtPerson()
	{
	}
	virtual ~CWhiteShirtPerson()
	{
	}
 
	virtual void WearClothes()
	{
		CPerson::WearClothes();
		std::cout << "°×T" << std::endl;
	}
};
 
//´©Å£×Ð¿ã
class CJeansPerson : public CPerson
{
public:
	CJeansPerson()
	{
	}
	virtual ~CJeansPerson()
	{
	}
 
	virtual void WearClothes()
	{
		CPerson::WearClothes();
		std::cout << "Å£×Ð¿ã" << std::endl;
	}
};
 
//´©ºÚÐ¬
class CBlackShoesPerson : public CPerson
{
public:
	CBlackShoesPerson()
	{
	}
	virtual ~CBlackShoesPerson()
	{
	}
 
	virtual void WearClothes()
	{
		CPerson::WearClothes();
		std::cout << "ºÚÐ¬" << std::endl;
	}
};