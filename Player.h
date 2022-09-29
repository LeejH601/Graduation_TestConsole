#pragma once
#include "State.h"

class Player {
	std::unique_ptr<CStateMachine<Player>> m_pStateMachine;

public:
	Player() {
		m_pStateMachine = std::make_unique<CStateMachine<Player>>();
	};

	void Update() {
		m_pStateMachine->Update(this, 0.0f);
	}

	CStateMachine<Player>* Get_FSM() { return m_pStateMachine.get(); };

	void processingKeyEvent(char key) {
		m_pStateMachine
	};
};