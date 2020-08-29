#pragma once
 
#include <iostream>
#include <string>
#include <map>
 
//��������
enum CupType
{
	SMALLCUP = 0,
	MEDIUMCUP = 1,
	BIGCUP = 2,
	SPECIALCUP1 = 3,
	SPECIALCUP2 = 4
};
 
//���ӻ���
class CCup
{
public:
	CCup()
	{
 
	}
 
	virtual ~CCup()
	{
 
	}
 
	//ˮ���ر����ܣ�װˮ
	void TakeInWater()
	{
		std::cout << "����װˮ" << std::endl;
	}
 
	//�������
	virtual void AddText(std::string strText) = 0;
 
	//չʾ����
	virtual void Show() = 0;
 
	std::string m_strText;
};
 
//С����
class CSmallCup : public CCup
{
public:
	CSmallCup()
	{
 
	}
 
	virtual ~CSmallCup()
	{
 
	}
 
	void AddText(std::string strText)
	{
		m_strText = strText;
	}
 
	void Show()
	{
		std::cout << "С����(" << m_strText << ")" << std::endl;
	}
};
 
//�б���
class CMediumCup : public CCup
{
public:
	CMediumCup()
	{
 
	}
 
	virtual ~CMediumCup()
	{
 
	}
 
	void AddText(std::string strText)
	{
		m_strText = strText;
	}
 
	void Show()
	{
		std::cout << "�б���(" << m_strText << ")" << std::endl;
	}
};
 
//����
class CBigCup : public CCup
{
public:
	CBigCup()
	{
 
	}
 
	virtual ~CBigCup()
	{
 
	}
 
	void AddText(std::string strText)
	{
		m_strText = strText;
	}
 
	void Show()
	{
		std::cout << "����(" << m_strText << ")" << std::endl;
	}
};
 
//�������ͱ���1
class CSpecialCup1 : public CCup
{
public:
	CSpecialCup1()
	{
 
	}
 
	virtual ~CSpecialCup1()
	{
 
	}
 
	void AddText(std::string strText)
	{
 
	}
 
	void Show()
	{
		std::cout << "�������ͱ���1"<< std::endl;
	}
};
 
//�������ͱ���2
class CSpecialCup2 : public CCup
{
public:
	CSpecialCup2()
	{
 
	}
 
	virtual ~CSpecialCup2()
	{
 
	}
 
	void AddText(std::string strText)
	{
 
	}
 
	void Show()
	{
		std::cout << "�������ͱ���2" << std::endl;
	}
};
 
//���ӹ������������ӣ�
class CCupFactory
{
public:
	CCupFactory()
	{
		
	}
 
	virtual ~CCupFactory()
	{
		for (auto itor : m_mapCup)
		{
			if (nullptr != itor.second)
			{
				delete itor.second;
				itor.second = nullptr;
			}
		}
	}
 
	CCup* CreatCup(CupType iCupType, std::string strText)
	{
		CCup* pCup = m_mapCup[iCupType];
		switch (iCupType)
		{
		case SMALLCUP:
			{
				if (nullptr == pCup)
				{
					pCup = new(std::nothrow) CSmallCup();
					if (nullptr != pCup)
					{
						m_mapCup[iCupType] = pCup;
						pCup->AddText(strText);
					}
				}
				else
				{
					pCup->AddText(strText);
				}
			}
			break;
		case MEDIUMCUP:
			{
				if (nullptr == pCup)
				{
					pCup = new(std::nothrow) CMediumCup();
					if (nullptr != pCup)
					{
						m_mapCup[iCupType] = pCup;
						pCup->AddText(strText);
					}
				}
				else
				{
					pCup->AddText(strText);
				}
			}
			break;
		case BIGCUP:
			{
				if (nullptr == pCup)
				{
					pCup = new(std::nothrow) CBigCup();
					if (nullptr != pCup)
					{
						m_mapCup[iCupType] = pCup;
						pCup->AddText(strText);
					}
				}
				else
				{
					pCup->AddText(strText);
				}
			}
			break;
		case SPECIALCUP1:
			{
				if (nullptr == pCup)
				{
					pCup = new(std::nothrow) CSpecialCup1();
					if (nullptr != pCup)
					{
						m_mapCup[iCupType] = pCup;
					}
				}
			}
			break;
		case SPECIALCUP2:
			{
				if (nullptr == pCup)
				{
					pCup = new(std::nothrow) CSpecialCup2();
					if (nullptr != pCup)
					{
						m_mapCup[iCupType] = pCup;
					}
				}
			}
			break;
		default:
			break;
		}
		return pCup;
	}
 
private:
	std::map<CupType, CCup*> m_mapCup;
};