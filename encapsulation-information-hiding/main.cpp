#include <iostream>

#include "person.hpp"
#include "friend_list.hpp"

void print_friend_list(const friend_list& list) {
	std::cout << list.owner.name << ", age " << list.owner.age << std::endl;
	std::cout << "Their friends are: " << std::endl;

	for (int i = 0; i < list.n_friends; i++) {
		std::cout << list.friends[i].name << ", age " << list.friends[i].age << std::endl;
	}
}

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
	muhammad_friends.owner = muhammad;
	muhammad_friends.friends = new person[2];
	muhammad_friends.friends[0] = kapli;
	muhammad_friends.friends[1] = ada;
	muhammad_friends.n_friends = 2;

	print_friend_list(muhammad_friends);
}
