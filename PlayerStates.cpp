#include "stdafx.h"
#include "PlayerStates.h"
#include "Locator.h"

IdleState::IdleState()
{
}

IdleState::~IdleState()
{
	
}

void IdleState::Enter(Player* entity, float fElapsedTime)
{
	printf("this is IdleState Enter\n");
}

void IdleState::Execute(Player* entity, float fElapsedTime)
{
	static int count = 0;
	printf("this is IdleState Excute\n");
	if (count >= 1) {
		count = 0;
		entity->Get_FSM()->ChangeState(entity, Locater.Get_PlayerState(PLAYERSTATE_TYPE::WALK), 0.0f, false);
	}
	count++;
}

void IdleState::Exit(Player* entitiy, float fElapsedTime)
{
	printf("this is IdleState Exit\n");
}

bool IdleState::OnMessage(Player* entitiy, const Telegram&)
{
	return false;
}

WalkState::WalkState()
{
}

WalkState::~WalkState()
{
}

void WalkState::Enter(Player* entity, float fElapsedTime)
{
	printf("this is WalkState Enter\n");
}

void WalkState::Execute(Player* entity, float fElapsedTime)
{
	static int count = 0;
	printf("this is WalkState Execute\n");
	if (count >= 1) {
		count = 0;
		entity->Get_FSM()->ChangeState(entity, Locater.Get_PlayerState(PLAYERSTATE_TYPE::RUN), 0.0f, false);
	}
	count++;
}

void WalkState::Exit(Player* entitiy, float fElapsedTime)
{
	printf("this is WalkState Exit\n");
}

bool WalkState::OnMessage(Player* entitiy, const Telegram&)
{
	return false;
}

RunState::RunState()
{
}

RunState::~RunState()
{
}

void RunState::Enter(Player* entity, float fElapsedTime)
{
	printf("this is RunState Enter\n");
}

void RunState::Execute(Player* entity, float fElapsedTime)
{
	static int count = 0;
	printf("this is RunState Execute\n");
	if (count >= 1) {
		count = 0;
		entity->Get_FSM()->ChangeState(entity, nullptr, 0.0f, true);
	}
	count++;
}

void RunState::Exit(Player* entitiy, float fElapsedTime)
{
	printf("this is RunState Exit\n");
}

bool RunState::OnMessage(Player* entitiy, const Telegram&)
{
	return false;
}

EvasionState::EvasionState()
{
}

EvasionState::~EvasionState()
{
}

void EvasionState::Enter(Player* entity, float fElapsedTime)
{
	printf("this is EvasionState Enter\n");
}

void EvasionState::Execute(Player* entity, float fElapsedTime)
{
	printf("this is EvasionState Execute\n");
}

void EvasionState::Exit(Player* entitiy, float fElapsedTime)
{
	printf("this is EvasionState Exit\n");
}

bool EvasionState::OnMessage(Player* entitiy, const Telegram&)
{
	return false;
}
