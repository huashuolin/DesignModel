#pragma once
 
#include <string>
#include <iostream>
 
class CPerson
{
public:
	CPerson()
	{
 
	}
 
	virtual ~ CPerson()
	{
 
	}
 
	void SetName(std::string strName)
	{
		m_strName = strName;
	}
 
	void SetAge(int iAge)
	{
		m_iAge = iAge;
	}
 
	void Show()
	{
		std::cout << "���� �� " << m_strName << std::endl;
		std::cout << "���� �� " << m_iAge << std::endl;
		std::cout << std::endl;
	}
 
private:
	std::string m_strName;
	int m_iAge;
};