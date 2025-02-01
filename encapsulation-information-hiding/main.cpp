#include <iostream>

#include "person.hpp"
#include "friend_list.hpp"

// Coupling: You want to make a feature change, which requires changing some
// code, which requires changing some more code.
//
// "Tight", "loose". "Pervasive"

/*
int b() {
	// Does some other stuff
	return 10;
}

// Dependency: When one piece of code "uses" or "depends on" another piece of
// code.
void a() {
	int x = b();

	// Logic errors down here
}*/

// We can't get rid of coupling, but we can:
// 1. Maybe reduce it
// 2. Isolate it
// 3. Move coupling around so that it occurs on pieces of code that are more stable

// Encapsulation: The bundling, or "co-location", of data with the behaviors that operate on that data.
//
// Information hiding

/*
int main() {
	person muhammad;
	muhammad.name = "Muhammad Ali";
	muhammad.age = 74;

	person kapli;
	kapli.name = "Kapli Dev";
	kapli.age = 66;

	person ada;
	ada.name = "Ada Lovelace";
	ada.age = 36;

	friend_list muhammad_friends;
	muhammad_friends.owner = muhammad; // Performing a copy
	muhammad_friends.friends = new person[2];
	muhammad_friends.friends[0] = kapli;
	muhammad_friends.friends[1] = ada;
	muhammad_friends.n_friends = 2;

	print_friend_list(muhammad_friends);
}
*/
