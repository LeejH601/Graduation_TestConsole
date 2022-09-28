#pragma once
#include "State.h"

class IdleState : public CState<Player>
{
public:
	IdleState();
	virtual ~IdleState();

	virtual void Enter(Player* entity, float fElapsedTime);
	virtual void Execute(Player* entity, float fElapsedTime);
	virtual void Exit(Player* entitiy, float fElapsedTime);

	virtual bool OnMessage(Player* entitiy, const Telegram&);
};

class WalkState : public CState<Player>
{
public:
	WalkState();
	virtual ~WalkState();

	virtual void Enter(Player* entity, float fElapsedTime);
	virtual void Execute(Player* entity, float fElapsedTime);
	virtual void Exit(Player* entitiy, float fElapsedTime);

	virtual bool OnMessage(Player* entitiy, const Telegram&);
};

class RunState : public CState<Player>
{
public:
	RunState();
	virtual ~RunState();

	virtual void Enter(Player* entity, float fElapsedTime);
	virtual void Execute(Player* entity, float fElapsedTime);
	virtual void Exit(Player* entitiy, float fElapsedTime);

	virtual bool OnMessage(Player* entitiy, const Telegram&);
};

class EvasionState : public CState<Player>
{
public:
	EvasionState();
	virtual ~EvasionState();

	virtual void Enter(Player* entity, float fElapsedTime);
	virtual void Execute(Player* entity, float fElapsedTime);
	virtual void Exit(Player* entitiy, float fElapsedTime);

	virtual bool OnMessage(Player* entitiy, const Telegram&);
};

class Playerstate_manager
{
private:
	std::unique_ptr<CState<Player>> idle;
	std::unique_ptr<CState<Player>> walk;
	std::unique_ptr<CState<Player>> run;
	std::unique_ptr<CState<Player>> evasion;

public:
	Playerstate_manager() {
		idle = std::make_unique<IdleState>();
		walk = std::make_unique<WalkState>();
		run = std::make_unique<RunState>();
		evasion = std::make_unique<EvasionState>();
	}

	CState<Player>* Get_state(PLAYERSTATE_TYPE type) {
		switch (type)
		{
		case PLAYERSTATE_TYPE::IDLE:
			return idle.get();
		case PLAYERSTATE_TYPE::WALK:
			return walk.get();
		case PLAYERSTATE_TYPE::RUN:
			return run.get();
		case PLAYERSTATE_TYPE::EVASION:
			return evasion.get();
		default:
			return nullptr;
		}
	}
};
