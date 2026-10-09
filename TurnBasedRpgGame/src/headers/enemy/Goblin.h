#pragma once
#include "Entity.h"
void selectOptions();
void summonGoblin();

class Goblin : public Entity
{
public:
	void summonGoblin()
	{
		std::cout << "You have encountered a Goblin!" << std::endl << std::endl;
	    selectOptions();
	}

};



