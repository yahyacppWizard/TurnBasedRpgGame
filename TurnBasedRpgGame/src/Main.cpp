#include <iostream>
#include "headers/enemy/Goblin.h"
#include "headers/enemy/Entity.h"
#include "headers/player/Knight.h"
void summonGoblin(Goblin& goblin, Entity& entity, Knight knigth);


int main()
{
	std::cout << "===================================" << std::endl;
	std::cout << "======== Brave the dungeon ========" << std::endl;
	std::cout << "===================================" << std::endl << std::endl;

	while (true)
	{
		Goblin goblin;
		Entity entity;
		Knight knight;
		
		summonGoblin(goblin, entity, knight);

		if (knight.health <= 0)
		{
			break;
		}

	}
	std::cin.get();
}