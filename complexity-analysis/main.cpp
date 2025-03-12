int main() {
	// "Selection sort takes 5 seconds"
	// 	How big is the list?
	// 	How fast is your computer?
	// 	What programming language are you using?
	// 		What implementation of that language?
	// 	What other programs are running on your computer right now?
	
	// Selection sort takes 5 seconds when sorting [3, 7, 4, 5] on
	// my computer when no other programs are running, implemented in
	// C++ in some conventional way and compiled with g++
	
	// Complexity analysis makes statements like the following:
	// When using selection sort on a list of size N, if N doubles,
	// then the runtime of selection sort roughly multiplies by 4
	
	// Big O notation: We might say that the runtime complexity of
	// selection sort is O(n^2)
	//
	// The above statement means: The amount of time that selection sort
	// takes to run is roughly proportional to n^2
	
	// To figure out runtime complexity of a piece of code:
	//
	// 1. Count the number of operations performed by the code
	// 	relative to the parameter of interest
	//
	// 	O(n^2)
	// 2. Simplify
	// 	a. Get rid of coefficients in all terms
	// 	b. If the only term is a constant, replace it with 1.
	// 		Otherwise, get rid of the constants.
	// 	c. Discard non-dominant terms
	// 		The smallest kind of term is a constant
	// 		Next is log(n)
	// 		Next is n
	// 		Next is n * log(n)
	// 		Next is n^2
	//		Next is n^3
	//		Next is n^4
	//		...
	

	int n;
	std::cin >> n;
	// O(n)
	for (int i = 0; i < 5*n; i++) {
		std::cout << "Hello, World!" << std::endl;
	}


	// O(n^2)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << "Hello, World!" << std::endl;
		}
	}


	// (n / 2) * n
	// O(n^2)
	// O(0 + 1 + 2 + 3 + 4 + 5 + ... + n)
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			std::cout << "Hello, World!" << std::endl;
		}
	}


	// O(log(n))
	for (int i = n; i > 1; i /= 2) {
		std::cout << "Hello, world!" << std::endl;
	}

	
	// O(n log(n))
	for (int i = 0; i < n; i++) {
		for (int j = n; j >= 1; j /= 2) {
			std::cout << "Hello, world!" << std::endl;
		}
	}


	// The following code:
	// O(n log(n))
	std::cout << "Hello, world!" << std::endl;
	for (int i = 0; i < n; i++) {
		for (int j = n; j >= 1; j /= 2) {
			std::cout << "Hello, world!" << std::endl;
		}
	}
	for (int i = n; i > 1; i /= 2) {
		std::cout << "Hello, world!" << std::endl;
	}


	// Space complexity analysis.
	// Two differences:
	// 1. Rather than counting up operations, we're counting up memory
	// 2. We're only interested in the "peak" memory used by the algorithm

}
