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
		std::cout << "体力充沛、动作灵活、投篮神准" << std::endl;
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
		std::cout << "身体疲惫、动作变慢" << std::endl;
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
		std::cout << "体力恢复、恢复了运动能力和投篮手感" << std::endl;
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
		std::cout << "肌肉紧张、身体疲惫、精神兴奋" << std::endl;
	}
	else
	{
		std::cout << "比赛结束" << std::endl;
	}
}