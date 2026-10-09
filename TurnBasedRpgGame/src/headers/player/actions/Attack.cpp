#include <iostream>
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Entity.h"

void Attack()
{
	std::cout << "You attacked the goblin" << std::endl;
	Goblin goblin;
	int damage_taken = 20;
	int total_damage_taken = damage_taken * goblin.attack_strength / goblin.durablility;
	goblin.health -= total_damage_taken;
	std::cout << "Goblin's health: " << goblin.health << "/100" << std::endl;
}