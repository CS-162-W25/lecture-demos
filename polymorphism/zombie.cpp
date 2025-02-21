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
	std::cout << "Argh! I'm a zombie! And I love to eat brains! " <<
		"My sanity is " << this->sanity << std::endl;
}

monster* zombie::clone() {
	zombie* copy = new zombie(*this);
	return copy;
}
