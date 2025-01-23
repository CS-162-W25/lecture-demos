#include <iostream>
#include <cmath>

double prompt_for_favorite_number() {
	std::cout << "Enter your favorite number: ";
	double favorite_number;
	std::cin >> favorite_number;
	return favorite_number;
}

double volume_of_sphere(double radius) {
	radius = 12;

	return 4.0 / 3.0 * 3.141592 * pow(radius, 3);
}

void print_array(bool booleans[], int size) {
	booleans[0] = false;
	for (int i = 0; i < size; ++i) {
		std::cout << booleans[i] << std::endl;
	}
}

int main() {
	double xyz = prompt_for_favorite_number();

	std::cout << "The volume of a sphere with radius 5.7 is: ";
	double my_variable = 5.7;
	std::cout << volume_of_sphere(my_variable) << std::endl;
	std::cout << volume_of_sphere(4.2) << std::endl;

	/*
	// This is a scope
	int x = 0; // x's scope is main()
	// int x = 5; // This is illegal

	while (x < 10) {
		// This is a "nested" scope
		// Loop body
		x = x + 1;
		int x = 12; // This is called "shadowing"
		int y = 35; // y's scope is this while loop
		std::cout << "Hello, World!" << std::endl;
		std::cout << "x = " << x << std::endl; // Prints 12
	}
	// y has fallen out of scope
	std::cout << y << std::endl; // This is a compiler error

	std::cout << x << std::endl; // Prints 10

	do {
		// Loop body
	} while(x < 10);

	int i;
	// Three things:
	// 1. Initialization statement
	// 2. Loop condition
	// 3. Post statement
	for (i = 0; i < 5; ++i) {
		std::cout << "Goodbye, World!" << std::endl;
		std::cout << i << std::endl;
	}
	std::cout << i << std::endl; // Prints 5
	
	std::cout << "What's your favorite character?: ";
	// int, bool, float, double, char
	char favorite_character;
	std::cin >> favorite_character;

	std::cout << "You entered: " << favorite_character << std::endl;

	*/

	// 1. The size must be a compile-time constant
	// 2. They can't be resized
	// 3. They're homogeneous
	bool coin_tosses[100];
	coin_tosses[0] = true;
	for (int i = 0; i < 100; ++i) {
		coin_tosses[i] = true;
	}

	print_array(coin_tosses, 100);
}
