#include "person.hpp"

void print_person(const person& p) {
	std::cout << p.first_name << " " << p.last_name << ", age " << p.age << std::endl;
}
