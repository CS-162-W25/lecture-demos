#include <iostream>

#include "zombie.hpp"

zombie::zombie() : monster(20), sanity(5) {
	std::cout << "Zombie constructor" << std::endl;
}

void zombie::eat_brains() {
	std::cout << "Yummy brains" << std::endl;
	this->sanity--;
}

void zombie::do_turn() {
	this->monster::do_turn();

	std::cout << "Argh! I'm a zombie! And I love to eat brains! " <<
		"My sanity is " << this->sanity << std::endl;
}

/* This doesn't work! hp is private to monster class!
zombie::zombie() : hp(20), sanity(5) {
	std::cout << this->hp << std::endl;
	std::cout << "Zombie constructor" << std::endl;
}*/

/*
zombie::zombie(int hp, int sanity) : monster(hp), sanity(sanity) {}

baby_zombie::baby_zombie() : zombie(3, 1) {}
*/
