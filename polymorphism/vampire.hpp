#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "monster.hpp"

class vampire : public monster {
public:
	vampire();
	void suck_blood();

	// This is legal. This is called overriding.
	void do_turn();
	virtual ~vampire() = default;
	monster* clone();
};


#endif
