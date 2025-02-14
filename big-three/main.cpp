#include "taxpayer.hpp"

void foo(taxpayer t) {
	// t.print();
}

int main() {
	taxpayer alex(2);
	foo(alex);
	// RAII: "Resource acquisition is initialization"
	
	// "The big three":
	// 1. Destructor
	// 2. Copy assignment operator overload (AOO)
	// 3. Copy constructor
	
	// What does this do?
	// This does a shallow copy
	//
	// This line of code calls the copy constructor
	// of the taxpayer class
	taxpayer ben = alex;
	// taxpayer ben(alex);
	
	// This doesn't call the copy constructor
	ben = alex;

	ben = ben;

	// Deep copy: Copies the array itself

	// taxpayer ben;
	// ben.num_dependents = alex.num_dependents;
	// ben.dependents = new dependent[ben.num_dependents]
	// for (int i = 0; i < ben.num_dependents; i++) {
	// 	ben.dependents[i] = alex.dependents[i];
	// }
}
