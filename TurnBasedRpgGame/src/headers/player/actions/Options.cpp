#include <iostream>
void Attack();
void Heal();
void Run();

void selectOptions()
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
		Attack();
	}
	else if (option == 2)
	{
		Heal();
	}
	else if (option == 3)
	{
		Run();
	}
	else
	{
		std::cout << "Invalid response please try again" << std::endl << std::endl;
	}
}