#include <iostream>
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Entity.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/player/Knight.h"

void EntityStatus(int goblinHealth, int knightHealth);
void goblinAttack(Goblin& goblin, Entity& entity, Knight& knight, bool& isGameRunning);

void Heal(Goblin& goblin, Entity& entity, Knight& knight, bool& isGameRunning)
{


	if (knight.health == 100)
	{
		std::cout << "You are already full HP" << std::endl;
	}
	else if (knight.health <= 10)
	{
		std::cout << "You healed 10HP" << std::endl;
		knight.health += 10;
	}
	else 
	{
		std::cout << "You healed 20HP" << std::endl;
		knight.health += 20;
	}
	EntityStatus(goblin.health, knight.health);
	goblinAttack(goblin, entity, knight, isGameRunning);
}