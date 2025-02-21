#include <iostream>

#include "vampire.hpp"

vampire::vampire() : monster(10) {
	std::cout << "Vampire constructor" << std::endl;
}

void vampire::do_turn() {
	std::cout << "Argh! I'm a vampire! And I love to suck blood! " <<
		std::endl;
}

monster* vampire::clone() {
	vampire* copy = new vampire(*this);
	return copy;
}
