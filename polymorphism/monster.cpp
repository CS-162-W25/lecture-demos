#include <iostream>

#include "monster.hpp"

monster::monster() : hp(10) {
	std::cout << "Monster default constructor" << std::endl;
}

monster::monster(int hp) : hp(hp) {
	std::cout << "Monster nondefault constructor" << std::endl;
}

void monster::do_turn() {
	std::cout << "Argh! I'm a monster! I have " <<
		this->hp << " HP" << std::endl;
}
