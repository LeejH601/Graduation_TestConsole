#include <Windows.h>
#include "stdafx.h"
#include "PlayerStates.h"
#include "Locator.h"

CLocator Locater;

int main() {
	Player player;

	player.Get_FSM()->ChangeState(&player, Locater.Get_PlayerState(PLAYERSTATE_TYPE::IDLE), 0.0f, false);

	while (true)
	{
		player.Update();
		//Sleep(1000);
	}

	return 0;
}