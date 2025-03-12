#include <iostream>

// Fibonacci sequence:
//
// 0, 1, 1, 2, 3, 5, 8, 13
//
// fib(1) = 0
// fib(2) = 1
// fib(n) = fib(n - 1) + fib(n - 2)

// fib(4) returns:
// 	2
//
// 	fib(3) returns:
// 		1
int fib(int n) {
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}

int fib_loop(int n) {
	if (n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}

	int prev_answer = 1; // Keeps track of the last number "observed"
	int prev_answer_2 = 0; // Keeps track of the second-to-last number "observed"

	for (int i = 0; i < n - 2; i++) {
		int next_number = prev_answer + prev_answer_2;
		prev_answer_2 = prev_answer;
		prev_answer = next_number;
	}

	return prev_answer;

}
