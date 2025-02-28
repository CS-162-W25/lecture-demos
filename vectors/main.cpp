#include <iostream>
#include <vector>

// A vector is an object that contains a dynamic array of some type
// of objects and member functions that operate on that array

int main() {
	std::vector<double> list_of_numbers;
	
	list_of_numbers.push_back(3.141592);
	list_of_numbers.push_back(3.141592 * 9.81);
	list_of_numbers.push_back(3.141592 / 2);
	list_of_numbers.push_back(3.141592 + 1);
	list_of_numbers.push_back(-3.141592);
	list_of_numbers.push_back(12.5);

	std::cout << list_of_numbers.at(0) << std::endl;

	// std::cout << list_of_numbers[1] << std::endl; // Buffer over-read
	// std::cout << list_of_numbers.at(1) << std::endl; // Throws an exception

	list_of_numbers.at(0) = 9.81;

	std::cout << list_of_numbers.at(0) << std::endl;

	double sum = 0;
	for (int i = 0; i < list_of_numbers.size(); i++) {
		sum += list_of_numbers.at(i);
	}
	std::cout << sum << std::endl;

	// Iterators: An object that represents the location of an element
	// 	within a data structure
	// std::vector<double>::iterator itr = list_of_numbers.begin();
	list_of_numbers.erase(list_of_numbers.begin() + 1);

	// pokemon example_pokemon(6, 4);
	// std::vector<pokemon> list_of_pokemon(10);
	// std::vector<pokemon> list_of_pokemon(10, example_pokemon);

	// std::vector<std::vector<room>> cave;

	// cave.at(2).at(6).get_event()->encounter()
	
	// TODO resize, reserve, capacity
	
	// Physics instructor: "A vector is something with a magnitude and a direction"
	// 
	// <0, 0, 5>
	//
	// <5, 0>
	
	list_of_numbers.resize(3);

	
	std::vector<std::string> words;

	// To add an element to a dynamic array:
	// 1. Make new, bigger array
	// 2. Copy elements over
	// 3. Delete the old array
	// 4. Add the new element to the end of the new array 
	// 5. Increment the size
	// 6. Update the pointer

	words.push_back("The");
	words.push_back("quick");
	words.push_back("brown");
	words.push_back("fox");
	words.push_back("jumps");
	words.push_back("over");
	words.push_back("the");
	words.push_back("lazy");
	words.push_back("dog");
}
