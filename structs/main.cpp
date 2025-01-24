#include <iostream>
#include <string>

struct baseball_player {
	std::string name; // Member variables
	int age;
	double batting_average;
};

void print_baseball_player(const baseball_player& p) {
	// p.name = "Sally"; // Now a syntax error
	std::cout << p.name << " is " << p.age <<
		" years old, and their batting average is " <<
		p.batting_average << std::endl;
}

int main() {
	// Every baseball player has:
	// A name: std::string
	// An age: int
	// A batting average: double
	
	baseball_player joe {
		"Joe Redfield",
		37,
		0.6
	};
	// joe.name = "Joe Redfield";
	// joe.age = 37;
	// joe.batting_average = 0.6;

	print_baseball_player(joe);
}
