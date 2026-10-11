#include <iostream>
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Entity.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/player/Knight.h"
void EntityStatus(int goblinHealth, int knightHealth);
void selectOptions(Goblin& goblin, Entity& entity, Knight& knight, bool& isGameRunning);

void goblinAttack(Goblin& goblin, Entity& entity, Knight& knight, bool& isGameRunning)
{
	std::cout << "Goblin has attacked you!" << std::endl;
	std::cout << "- 20 HP" << std::endl;
	knight.health -= 20;
	EntityStatus(goblin.health, knight.health);

	if (knight.health > 0)
	{
		selectOptions(goblin, entity, knight, isGameRunning);
	}
	else
	{
		std::cout << "You are dead!" << std::endl << std::endl;
		isGameRunning = false;

	}
	
}