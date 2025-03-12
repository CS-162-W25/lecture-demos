#include <iostream>

void foo(int n) {
	// Base case
	if (n == 0) {
		return;
	}
	
	std::cout << n << std::endl;
	foo(n - 1); // Recursive call
}



int main() {
	// foo(1000000000);
	
	return 100;
}
