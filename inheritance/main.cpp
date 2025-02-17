#include "monster.hpp"
#include "zombie.hpp"

int main() {
	// monster m;
	// m.do_turn();

	// This calls the default zombie constructor
	zombie z;
	
	
	// What function will this call?
	// This will call zombie::do_turn() on z
	z.do_turn();


	z.eat_brains();


	// This is legal. What it does by default is a shallow copy.
	// This is called "upcasting".
	// z's zombie-specific data is discarded when creating m. This
	// mechanism is referred to as "object slicing"
	monster m = z;
	// m.eat_brains(); // This is a syntax error
	m.do_turn();
	
	
}
