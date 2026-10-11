#include <iostream>
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/enemy/Entity.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/player/Knight.h"
void EntityStatus(int goblinHealth, int knightHealth);
void goblinAttack(Goblin& goblin, Entity& entity, Knight& knight, bool& isGameRunning);

void Attack(Goblin& goblin, Entity& entity, Knight& knight, bool& isGameRunning)
{
	std::cout << "You attacked the goblin" << std::endl;

	int damage_taken = 20;
	int total_damage_taken = damage_taken * goblin.attack_strength / goblin.durablility;
	goblin.health -= total_damage_taken;

	EntityStatus(goblin.health, knight.health);
	goblinAttack(goblin, entity, knight, isGameRunning);

}