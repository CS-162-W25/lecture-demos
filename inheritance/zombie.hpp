#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "monster.hpp"

//      Monster
//   Zombie      Vampire
// Baby zombie

// This is called "public inheritance"
// Inheritance loosely creates "is-a" relationships
//
// Every zombie "is a" special kind of monster

// Extension: We can add new member variables and / or member
// functions to the zombie class

// The zombie class is referred to as:
// 	The child class
// 	The derived class
// 	The subclass
// The monster class is referred to as:
// 	The parent class
// 	The base class
// 	The superclass
class zombie : public monster {
private:
	int sanity;
public:
	zombie();
	void eat_brains();

	// This is legal. This is called overriding.
	void do_turn();
};

#endif
