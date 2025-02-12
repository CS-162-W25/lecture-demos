#include <iostream>

#include "pokemon.hpp"

pokemon::pokemon(const std::string& name, int attack) : name(name), attack(attack) {}

pokemon::pokemon() {
	std::cout << "Pokemon constructor called!" << std::endl;
}
