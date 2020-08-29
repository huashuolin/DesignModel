#include "state.h"
 
CGameBeginState::CGameBeginState()
{
	m_pState = new(std::nothrow) CAfter8MinState();
}
 
CGameBeginState::~CGameBeginState()
{
	if (nullptr != m_pState)
	{
		delete m_pState;
		m_pState = nullptr;
	}
}
 
void CGameBeginState::ShowAbility(CBasketballPlayer* pBasketballPlayer)
{
	if (nullptr == pBasketballPlayer)
	{
		return;
	}
	if (pBasketballPlayer->GetTime() < 8)
	{
		std::cout << "�������桢������Ͷ����׼" << std::endl;
	}
	else
	{
		pBasketballPlayer->SetState(m_pState);
		pBasketballPlayer->Play();
	}
}
 
CAfter8MinState::CAfter8MinState()
{
	m_pState = new(std::nothrow) CRestAndDrinkState();
}
 
CAfter8MinState::~CAfter8MinState()
{
	if (nullptr != m_pState)
	{
		delete m_pState;
		m_pState = nullptr;
	}
}
 
void CAfter8MinState::ShowAbility(CBasketballPlayer* pBasketballPlayer)
{
	if (pBasketballPlayer->GetTime() < 11)
	{
		std::cout << "����ƣ������������" << std::endl;
	}
	else
	{
		pBasketballPlayer->SetState(m_pState);
		pBasketballPlayer->Play();
	}
}
 
CRestAndDrinkState::CRestAndDrinkState()
{
	m_pState = new(std::nothrow) CLast3MinState();
}
 
CRestAndDrinkState::~CRestAndDrinkState()
{
	if (nullptr != m_pState)
	{
		delete m_pState;
		m_pState = nullptr;
	}
}
 
void CRestAndDrinkState::ShowAbility(CBasketballPlayer* pBasketballPlayer)
{
	if (pBasketballPlayer->GetTime() < 45)
	{
		std::cout << "�����ָ����ָ����˶�������Ͷ���ָ�" << std::endl;
	}
	else
	{
		pBasketballPlayer->SetState(m_pState);
		pBasketballPlayer->Play();
	}
}
 
CLast3MinState::CLast3MinState()
{
 
}
 
CLast3MinState::~CLast3MinState()
{
 
}
 
void CLast3MinState::ShowAbility(CBasketballPlayer* pBasketballPlayer)
{
	if (pBasketballPlayer->GetTime() < 48)
	{
		std::cout << "������š�����ƣ���������˷�" << std::endl;
	}
	else
	{
		std::cout << "��������" << std::endl;
	}
}