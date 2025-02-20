#include "monster.hpp"
#include "zombie.hpp"
#include "vampire.hpp"

void do_monster_turns(
		monster** monsters,
		int n_monsters) {
	for (int i = 0; i < n_monsters; i++) {
		// Static binding
		// "Static": "At compile time"
		// "Dyanmic": "At runtime"
		monsters[i]->do_turn();

		// Every variable has a static type and a dynamic type
		// Static type of a variable: Its declared type
		// Dynamic type of a variable: Its "actual" type
		//
		// Static type monsters[i]: monster*
		// Dynamic type monsters[i]: either vampire* or zombie*
	}
}

int main() {
	// monster m;
	// m.do_turn();

	// This calls the default zombie constructor
	// zombie* z = new zombie[5];
	// vampire* v = new vampire[10];
	monster** monsters = new monster*[15];
	for (int i = 0; i < 5; i++) {
		zombie* z = new zombie;
		monsters[i] = z;
	}
	for (int i = 5; i < 15; i++) {
		vampire* v = new vampire;
		monsters[i] = v;
	}

	
	do_monster_turns(monsters, 15);
	do_monster_turns(monsters, 15);
	do_monster_turns(monsters, 15);
}
