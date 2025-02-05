#include <iostream>

#include "person.hpp"

// person mohammed;
// mohammed.print();
//
// person jodi;
// jodi.print();


void person::print(person& other_person) const {
	// (*this).first_name
	// this->first_name
	std::cout << (*this).first_name << " " << this->last_name << ", age " << this->age << std::endl;
}

void person::initialize(
		const std::string& first_name,
		const std::string& last_name,
		int age) {
	(*this).first_name = first_name;
	this->last_name = last_name;
	this->age = age;

	this->print();
}

// person muhammad;
// muhammad.get_first_name()
// muhammad.set_first_name("Joe")

// Object: A variable whose type is a class
// Object-oriented programming: Programming that's centered around objects

std::string person::get_first_name() const {
	return this->first_name;
}

void person::set_first_name(const std::string& new_first_name) {
	this->first_name = new_first_name;
}
