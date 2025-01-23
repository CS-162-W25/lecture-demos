#include <iostream>
#include <string>



int main() {
	/*
	std::string abcd = "Beef";
	std::string some_other_word = "beef";

	if (abcd == some_other_word) {
		
	}

	std::cin >> abcd; // Hello
	std::cin >> abacd; // world
	*/

	// An array is a homogeneous, fixed-size contiguous sequence of data
	// 
	// x  [12, 8, 3]  y
	//
	// [12, 8, 3, -2]

	int array[3];

	// This gets stored on "the stack"
	int* p = new int[3] {12, 8, 3};

	std::cout << p[0] << std::endl;
	
	if (1 == 1) {
		// Dynamic storage duration
		// This gets stored on "the heap"
		int* my_array2 = new int[4];
		for (int i = 0; i < 3; i++) {
			my_array2[i] = p[i];
		}
		my_array2[3] = -2;

		delete [] p;

		p = my_array2; // Just copies an address
	}

	std::cout << p[0] << std::endl;

	// std::cout << *my_array << std::endl; // Prints the base address of
	// the array
	
	// Memory leak: When you create dyanmic memory, but don't free it
	delete [] p;
	p = nullptr;
}
