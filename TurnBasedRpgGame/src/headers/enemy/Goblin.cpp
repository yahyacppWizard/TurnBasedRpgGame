
#include "Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/player/Knight.h"
#include <iostream>
void selectOptions(Goblin& goblin, Entity& entity, Knight& knight);

void summonGoblin(Goblin& goblin, Entity& entity, Knight knight)
{
    std::cout << "You have encountered a Goblin!"
        << std::endl << std::endl;
    selectOptions(goblin, entity, knight);
}