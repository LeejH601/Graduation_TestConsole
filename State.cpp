#include "stdafx.h"
#include "State.h"



//CStateMachine::CStateMachine()
//{
//}
//
//CStateMachine::~CStateMachine()
//{
//}
//
//void CStateMachine::PushState(CState<Player>* state)
//{
//	m_pStates.push(std::shared_ptr<CState<Player>>(state));
//}
//
//void CStateMachine::SetGlobalState(CState<Player>* state)
//{
//	m_pGlobalState.reset(state);
//}
//
//CState<Player>* CStateMachine::PopState()
//{
//	if (!m_pStates.empty()) {
//		CState<Player>* state = m_pStates.top().get();
//		m_pStates.pop();
//		return state;
//	}
//	return nullptr;
//}
//
//void CStateMachine::Update(Player* entity, float fElapsedTime)
//{
//	if (!m_pStates.empty()) {
//		m_pStates.top()->Execute(entity, fElapsedTime);
//	}
//
//	if (m_pGlobalState) {
//		m_pGlobalState->Execute(entity, fElapsedTime);
//	}
//}
//
//bool CStateMachine::HandleMessage(const Telegram& msg) const
//{
//	return false;
//}
//
//void CStateMachine::ChangeState(Player* entity, CState<Player>* pNewState, float fElapsedTime, bool is_popPrevious)
//{
//	if (!m_pStates.empty())
//		m_pStates.top()->Exit(entity, fElapsedTime);
//
//	if (is_popPrevious) PopState();
//	PushState(pNewState);
//
//	m_pStates.top()->Enter(entity, fElapsedTime);
//}

