#include <iostream>

#include "taxpayer.hpp"

taxpayer::taxpayer(int num_dependents) :
		num_dependents(num_dependents),
		dependents(new dependent[num_dependents]) {
	std::cout << "Constructor!" << std::endl;	
}


// taxpayer ben = alex;
taxpayer::taxpayer(const taxpayer& other) {
	this->num_dependents = other.num_dependents;
	this->dependents = new dependent[this->num_dependents];
	for (int i = 0; i < this->num_dependents; i++) {
		this->dependents[i] = other.dependents[i];
	}

	std::cout << "Copy constructor!" << std::endl;
}

taxpayer& taxpayer::operator=(const taxpayer& other) {
	if (this == &other) {
		return *this;
	}

	this->num_dependents = other.num_dependents;

	if (this->dependents != nullptr) {
		delete [] this->dependents;
	}
	this->dependents = new dependent[this->num_dependents];
	for (int i = 0; i < this->num_dependents; i++) {
		this->dependents[i] = other.dependents[i];
	}

	std::cout << "AOO!" << std::endl;

	return *this;
}

taxpayer::~taxpayer() {
	if (this->dependents != nullptr) {
		delete [] this->dependents;
	}

	std::cout << "Destructor!" << std::endl;

	this->dependents = nullptr;
}
