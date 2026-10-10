#include <iostream>
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Entity.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/player/Knight.h"

void EntityStatus(int goblinHealth, int knightHealth);

void Run()
{
	Goblin goblin;
	Knight knight;

	std::cout << "You cannot run from a fight!" << std::endl;
	EntityStatus(goblin.health, knight.health);
}