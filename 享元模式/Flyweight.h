#pragma once
 
#include <iostream>
#include <string>
#include <map>
 
//杯子种类
enum CupType
{
	SMALLCUP = 0,
	MEDIUMCUP = 1,
	BIGCUP = 2,
	SPECIALCUP1 = 3,
	SPECIALCUP2 = 4
};
 
//杯子基类
class CCup
{
public:
	CCup()
	{
 
	}
 
	virtual ~CCup()
	{
 
	}
 
	//水杯必备功能：装水
	void TakeInWater()
	{
		std::cout << "用来装水" << std::endl;
	}
 
	//添加文字
	virtual void AddText(std::string strText) = 0;
 
	//展示杯子
	virtual void Show() = 0;
 
	std::string m_strText;
};
 
//小杯子
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
		std::cout << "小杯子(" << m_strText << ")" << std::endl;
	}
};
 
//中杯子
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
		std::cout << "中杯子(" << m_strText << ")" << std::endl;
	}
};
 
//大杯子
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
		std::cout << "大杯子(" << m_strText << ")" << std::endl;
	}
};
 
//特殊造型杯子1
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
		std::cout << "特殊造型杯子1"<< std::endl;
	}
};
 
//特殊造型杯子2
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
		std::cout << "特殊造型杯子2" << std::endl;
	}
};
 
//杯子工厂（生产杯子）
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