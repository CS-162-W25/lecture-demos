#include <iostream>

#include "zombie.hpp"

zombie::zombie() : monster(20), sanity(5) {
	std::cout << "Zombie constructor" << std::endl;
	

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
