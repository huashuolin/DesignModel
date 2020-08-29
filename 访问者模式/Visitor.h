#pragma once
 
#include <iostream>
#include <string>
 
//�������ػ���
class IElement
{
public:
	IElement()
	{
 
	}
 
	virtual ~IElement()
	{
 
	}
 
	virtual void PrintPigCompanySituation() = 0;
	virtual void PrintSmallCompanySituation() = 0;
};
 
//��˾����
class ICompany
{
public:
	ICompany()
	{
 
	}
 
	virtual ~ICompany()
	{
 
	}
 
	virtual void Accept(IElement* pVisitor) = 0;
};
 
//�����ƶȡ������ƶ�
class CRegime : public IElement
{
public:
	void PrintPigCompanySituation()
	{
		std::cout << "�����ƶȺ͹����ƶȷ��棺�ȽϽ�ȫ" << std::endl;
	}
 
	void PrintSmallCompanySituation()
	{
		std::cout << "�����ƶȺ͹����ƶȷ��棺���Ǻܽ�ȫ" << std::endl;
	}
};
 
//�ۺ�����
class CCapacity : public IElement
{
public:
	void PrintPigCompanySituation()
	{
		std::cout << "�ۺ��������棺רעĳһ��ģ�飬�ۺ�������������̫�࣬�����԰����ģ��������ϸ" << std::endl;
	}
 
	void PrintSmallCompanySituation()
	{
		std::cout << "�ۺ��������棺���٣�Ҫ�����¶࣬���ۺ����������Ͽ�" << std::endl;
	}
};
 
//ְλ����
class CRose : public IElement
{
public:
	void PrintPigCompanySituation()
	{
		std::cout << "ְλ�������棺�����˶࣬���������߾ͱȽ����ѣ�ͬʱ��˾��һ����ȥ����һ������Ŀ�Ļ���Ҳ����" << std::endl;
	}
 
	void PrintSmallCompanySituation()
	{
		std::cout << "ְλ�������棺���٣�����϶�" << std::endl;
	}
};
 
//��˾
class CBigCompany : public ICompany
{
public:
	CBigCompany()
	{
 
	}
 
	virtual ~CBigCompany()
	{
 
	}
 
	void Accept(IElement* pVisitor)
	{
		if (nullptr != pVisitor)
		{
			pVisitor->PrintPigCompanySituation();
		}
	}
};
 
//С��˾
class CSmallCompany : public ICompany
{
public:
	CSmallCompany()
	{
 
	}
 
	virtual ~CSmallCompany()
	{
 
	}
 
	void Accept(IElement* pVisitor)
	{
		if (nullptr != pVisitor)
		{
			pVisitor->PrintSmallCompanySituation();
		}
	}
};
 