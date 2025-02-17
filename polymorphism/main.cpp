#include "monster.hpp"
#include "zombie.hpp"
#include "vampire.hpp"

void do_monster_turns(
		zombie* zombies,
		int n_zombies,
		vampire* vampires,
		int n_vampires) {
	for (int i = 0; i < n_zombies; i++) {
		zombies[i].do_turn();
	}

	for (int i = 0; i < n_vampires; i++) {
		vampires[i].do_turn();
	}
}

int main() {
	// monster m;
	// m.do_turn();

	// This calls the default zombie constructor
	zombie* z = new zombie[5];
	vampire* v = new vampire[10];
	
	do_monster_turns(z, 5, v, 10);
	do_monster_turns(z, 5, v, 10);
	do_monster_turns(z, 5, v, 10);
}
