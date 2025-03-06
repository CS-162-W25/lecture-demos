#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"

class linked_list {
private:
	node* head = nullptr;
	int length = 0;
public:
	void push_back(double value);
	void print() const;
};

#endif
