#include "pokemon.hpp"
#include "battle.hpp"

int main() {
	// pokemon p1; // Normally, this would call the default constructor
	
	pokemon p1("Squirtle", 4);

	/*
	pokemon array_of_pokemon[10];

	// Named return value optimization (NRVO)
	// Return value optimization (RVO)
	array_of_pokemon[0] = pokemon("Charmander", 6);
	// pokemon charmander("Charmander", 6);
	// array_of_pokemon[0] = charmander;

	pokemon* heap_pokemon = new pokemon[12];
	*/

	// Question: How many constructors are called in this line of code?
	// 3:
	// 1. Default battle constructor
	// 2. Default pokemon constructor
	// 3. Default pokemon constructor
	battle b;
}
