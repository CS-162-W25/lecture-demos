#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

struct person {
	std::string first_name;
	std::string last_name;
	datetime birth_date;
};

void print_person(const person& p);

#endif
