#include <iostream>

#include "node.hpp"
#include "linked_list.hpp"

void linked_list::push_back(double value) {
	node* new_node = new node;
	new_node->value = value;
	new_node->next = nullptr;
	
	if (this->length == 0) {
		this->head = new_node;
		this->length++;
		return;
	}


	node* itr = this->head;
	/*
	for (int i = 0; i < this->length - 1; i++) {
		itr = itr->next; // Updates itr. Steps the iterator one step forward
	}
	*/
	while (itr->next != nullptr) {
		itr = itr->next;
	}

	
	itr->next = new_node;
	this->length++;
}

void linked_list::print() const {
	node* itr = this->head;
	while (itr != nullptr) {
		std::cout << itr->value << ", ";
		itr = itr->next;
	}
}
