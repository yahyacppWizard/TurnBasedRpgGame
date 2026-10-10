#include <iostream>
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Entity.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/player/Knight.h"

void Attack(Goblin& goblin, Entity& entity, Knight& knight);
void Heal(Goblin& goblin, Entity& entity, Knight& knight);
void Run(Goblin& goblin, Entity& entity, Knight& knight);

void selectOptions(Goblin& goblin, Entity& entity, Knight& knight)
{

	int option;
	std::cout << "======================" << std::endl;
	std::cout << "== Select an action ==" << std::endl;
	std::cout << "======================" << std::endl << std::endl;

	std::cout << "1. Attack" << std::endl;
	std::cout << "2. Heal" << std::endl;
	std::cout << "3. Run" << std::endl;

	std::cout << "Select one of the actions above: " << std::endl;
	std::cin >> option;

	if (option == 1)
	{
		Attack(goblin, entity, knight);
	}
	else if (option == 2)
	{
		Heal(goblin, entity, knight);
	}
	else if (option == 3)
	{
		Run(goblin, entity, knight);
	}
	else
	{
		std::cout << "Invalid response please try again" << std::endl << std::endl;
	}
}