#ifndef FRIEND_LIST_HPP
#define FRIEND_LIST_HPP

#include "person.hpp"

struct friend_list {
	person owner;
	person* friends = nullptr;
	int n_friends;
};

void print_friend_list(const friend_list& list);

#endif
