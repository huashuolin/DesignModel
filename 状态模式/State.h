#pragma once
 
#include <iostream>
 
/*�����˶�Ա�ڱ�����ʱ�򣬻���Ϊ������������Ӱ�쾺��״̬��
���磬���ϳ���ʱ���������桢������Ͷ����׼��
����8���ӹ�������ƣ��������������
�³���Ϣ3���Ӳ�����һƿ��ţ���������ָ����ָ����˶�������Ͷ���ָУ�
����ʤ3���ӣ��ȷ�Ȯ������������š�����ƥ�䡢�����˷ܡ�
��д������������״̬�£��˶�Ա�������*/
 
class CBasketballPlayer;
 
//״̬����
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
 
//�����տ�ʼ��״̬
class CGameBeginState : public IState
{
public:
	CGameBeginState();
 
	virtual ~CGameBeginState();
 
	void ShowAbility(CBasketballPlayer* pBasketballPlayer);
};
 
//����8����֮���״̬
class CAfter8MinState : public IState
{
public:
	CAfter8MinState();
 
	virtual ~CAfter8MinState();
 
	void ShowAbility(CBasketballPlayer* pBasketballPlayer);
};
 
//�³���Ϣ3���Ӳ�����һƿ��ţ֮���״̬
class CRestAndDrinkState : public IState
{
public:
	CRestAndDrinkState();
 
	virtual ~CRestAndDrinkState();
 
	void ShowAbility(CBasketballPlayer* pBasketballPlayer);
};
 
//����ʤ3���ӵ�״̬
class CLast3MinState : public IState
{
public:
	CLast3MinState();
 
	virtual ~CLast3MinState();
 
	void ShowAbility(CBasketballPlayer* pBasketballPlayer);
};
 
//�����˶�Ա
class CBasketballPlayer
{
public:
	CBasketballPlayer()
	: m_iTime(0)
	, m_pState(nullptr)
	{
		m_pState = new(std::nothrow) CGameBeginState();//���ó�ʼ״̬
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