#include <iostream>
#include "headers/enemy/Goblin.h"
#include "headers/enemy/Entity.h"
#include "headers/player/Knight.h"
void summonGoblin(Goblin& goblin, Entity& entity, Knight knigth, bool& isGameRunning);


int main()
{
	std::cout << "===================================" << std::endl;
	std::cout << "======== Brave the dungeon ========" << std::endl;
	std::cout << "===================================" << std::endl << std::endl;

	bool isGameRunning = true;

	while (isGameRunning)
	{
		Goblin goblin;
		Entity entity;
		Knight knight;
		
		summonGoblin(goblin, entity, knight, isGameRunning);

	}
	std::cin.get();
}