#pragma once
 
#include <iostream>
 
/*篮球运动员在比赛的时候，会因为体力、情绪等影响竞技状态。
比如，刚上场的时候，体力充沛、动作灵活、投篮神准；
打了8分钟过后，身体疲惫、动作变慢；
下场休息3分钟并喝了一瓶红牛过后，体力恢复、恢复了运动能力和投篮手感；
最后决胜3分钟，比分犬牙交错，肌肉紧张、身体匹配、精神兴奋。
编写程序，描述各个状态下，运动员的情况。*/
 
class CBasketballPlayer;
 
//状态基类
class IState
{
public:
	IState()
	: m_pState(nullptr)
	{
 
	}
 
	virtual ~IState()
	{
 
	}
 
	virtual void ShowAbility(CBasketballPlayer* pBasketballPlayer) = 0;
 
	IState* m_pState;
};
 
//比赛刚开始的状态
class CGameBeginState : public IState
{
public:
	CGameBeginState();
 
	virtual ~CGameBeginState();
 
	void ShowAbility(CBasketballPlayer* pBasketballPlayer);
};
 
//打了8分钟之后的状态
class CAfter8MinState : public IState
{
public:
	CAfter8MinState();
 
	virtual ~CAfter8MinState();
 
	void ShowAbility(CBasketballPlayer* pBasketballPlayer);
};
 
//下场休息3分钟并喝了一瓶红牛之后的状态
class CRestAndDrinkState : public IState
{
public:
	CRestAndDrinkState();
 
	virtual ~CRestAndDrinkState();
 
	void ShowAbility(CBasketballPlayer* pBasketballPlayer);
};
 
//最后决胜3分钟的状态
class CLast3MinState : public IState
{
public:
	CLast3MinState();
 
	virtual ~CLast3MinState();
 
	void ShowAbility(CBasketballPlayer* pBasketballPlayer);
};
 
//篮球运动员
class CBasketballPlayer
{
public:
	CBasketballPlayer()
	: m_iTime(0)
	, m_pState(nullptr)
	{
		m_pState = new(std::nothrow) CGameBeginState();//设置初始状态
	}
 
	virtual ~CBasketballPlayer()
	{
		if (nullptr != m_pState)
		{
			delete m_pState;
			m_pState = nullptr;
		}
	}
 
	void SetTime(int iTime)
	{
		m_iTime = iTime;
	}
 
	int GetTime()
	{
		return m_iTime;
	}
 
	void SetState(IState* pState)
	{
		m_pState = pState;
	}
 
	void Play()
	{
		if (nullptr != m_pState)
		{
			m_pState->ShowAbility(this);
		}
	}
 
private:
	int m_iTime;
	IState* m_pState;
};