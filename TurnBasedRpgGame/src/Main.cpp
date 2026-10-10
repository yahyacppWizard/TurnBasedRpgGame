#include <iostream>
#include "headers/enemy/Goblin.h"
#include "headers/enemy/Entity.h"
#include "headers/player/Knight.h"


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
		
		goblin.summonGoblin();

	}
	std::cin.get();
}