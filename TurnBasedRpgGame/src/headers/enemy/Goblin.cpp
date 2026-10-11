
#include "Goblin.h"
#include "/Dev/TurnBasedRpgGame/TurnBasedRpgGame/src/headers/player/Knight.h"
#include <iostream>
void selectOptions(Goblin& goblin, Entity& entity, Knight& knight, bool& isGameRunning);

void summonGoblin(Goblin& goblin, Entity& entity, Knight knight, bool& isGameRunning)
{
    std::cout << "You have encountered a Goblin!"
        << std::endl << std::endl;
    selectOptions(goblin, entity, knight, isGameRunning);
}