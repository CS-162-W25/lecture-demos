#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

// Information-hiding: Making member variables "private" so that they can only
// be accessed by member functions of the same type

class person {
private:
	std::string first_name;
	std::string last_name;
	int age;
public:
	void print() const;
	void initialize(const std::string& first_name, const std::string& last_name, int age);

	std::string get_first_name() const;
	void set_first_name(const std::string& new_first_name);
};

#endif
