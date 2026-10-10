#include <iostream>
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Entity.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/player/Knight.h"

void EntityStatus(int goblinHealth, int knightHealth)
{
	std::cout << "Knight's health: " << knightHealth << "/100" << std::endl;
	std::cout << "Goblin's health: " << goblinHealth << "/100" << std::endl;
}