#include <iostream>
#include <string>

struct baseball {
	double diameter;
};

struct baseball_player {
	std::string name; // Member variables
	int age;
	double batting_average;
	int num_baseballs;
	baseball* baseballs; // Composition
};

void print_baseball_player(const baseball_player& p) {
	// p.name = "Sally"; // Now a syntax error
	std::cout << p.name << " is " << p.age <<
		" years old, and their batting average is " <<
		p.batting_average << std::endl;
	
	for (int i = 0; i < p.num_baseballs; ++i) {
		std::cout << p.baseballs[i].diameter << std::endl;
	}
}

int main() {
	// Every baseball player has:
	// A name: std::string
	// An age: int
	// A batting average: double

	baseball* spaghetti = new baseball[6];
	spaghetti[0].diameter = 12.0;
	spaghetti[1].diameter = 12.0;
	spaghetti[2].diameter = 12.0;
	spaghetti[3].diameter = 12.0;
	spaghetti[4].diameter = 12.0;
	spaghetti[5].diameter = 12.0;

	baseball_player joe {
		"Joe Redfield",
		37,
		0.6,
		6,
		spaghetti
	};
	// joe.name = "Joe Redfield";
	// joe.age = 37;
	// joe.batting_average = 0.6;
	// joe.my_baseballs = spaghetti;
	
	baseball_player sally = joe;
	sally.baseballs[0].diameter = 7.0;

	print_baseball_player(joe);


	delete [] joe.baseballs;
}
