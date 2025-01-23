#include <iostream>

/*
void change_me(double* pi) {
	*pi = 3.14;
}
*/

void change_me(double& pi) {
	pi = 3.14;
}

bool* create_true() {
	bool b = true;
	return &b;
}

int main() {
	bool* bool_pointer = create_true();
	// Dangling pointer
	*bool_pointer = false; // Use-after-free

	double pi = 0;
	double gravity = 9.81;
	//change_me(&pi);
	change_me(pi);
	std::cout << pi << std::endl; // Prints 3.14

	double* pi_pointer = &pi;
	double& pi_reference = pi;

	pi_reference = 12; // Changes pi to 12
	*pi_pointer = 12; // Changes pi to 12
	pi_pointer = &gravity; // Changes pi_pointer to the address of gravity
	std::cout << *pi_pointer << std::endl; // Prints 9.81

	pi_reference = gravity; // Changes pi to 9.81

	pi_pointer = nullptr;
	std::cout << *pi_pointer << std::endl;

	// Later on....
	pi_pointer = &pi;

	if (pi_pointer) {
		std::cout << "pi_pointer actually points to something!" << std::endl;

		std::cout << *pi_pointer << std::endl;
	}

	char my_chars[20];
	char* char_pointer = &(my_chars[0]);
	char_pointer[0] = 'H';


	/*
	int x = 5;

	// Int pointer
	int* y = &x;

	// Dereference operator. Indirection operator.
	std::cout << *y << std::endl; // Prints 5

	std::cout << *(&y) << std::endl; // Prints 0x1234
	std::cout << y << std::endl; // Prints 0x1234
	std::cout << &x << std::endl; // Prints 0x1234
	*/

	
}
