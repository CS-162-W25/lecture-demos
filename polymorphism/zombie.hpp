#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "monster.hpp"

class zombie : public monster {
private:
	int sanity;
public:
	zombie();
	void eat_brains();

	// This is legal. This is called overriding.
	void do_turn();

	virtual ~zombie() = default;
	monster* clone();
};

#endif
