#include <iostream>

#include "battle.hpp"

battle::battle() : trainer_1_pokemon("Squirtle", 4), trainer_2_pokemon("Charmander", 6) {
	std::cout << "Battle constructor called!" << std::endl;
}
