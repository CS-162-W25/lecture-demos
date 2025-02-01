#include "friend_list.hpp"

void print_friend_list(const friend_list& list) {
	print_person(list.owner);
	std::cout << "Their friends are: " << std::endl;

	for (int i = 0; i < list.n_friends; i++) {
		print_person(list.friends[i]);
	}
}
