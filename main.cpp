#include <Windows.h>
#include <conio.h>
#include "stdafx.h"
#include "PlayerStates.h"
#include "Locator.h"


CLocator Locater;

int main() {
	Player player;

	player.Get_FSM()->ChangeState(&player, Locater.Get_PlayerState(PLAYERSTATE_TYPE::IDLE), 0.0f, false);

	while (true)
	{
		if (!_kbhit()) {
			system("cls");
			player.Update();
			Sleep(500);
		}
		else {
			char key = _getch();
		}
	}

	return 0;
}