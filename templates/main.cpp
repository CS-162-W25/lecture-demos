#include "vector.hpp"

struct point {
	int x;
	int y;
};

template<typename T>
void print_value_in_red(const T& value) {
	// Configure the terminal to print in red text...
	
	// Print the value
	std::cout << value;

	// Reset the terminal back to default text
}

int main() {
	print_value_in_red(5);
	print_value_in_red<std::string>("Hello");

	vector<int> my_ints;

	my_ints.push_back(5);
	my_ints.push_back(-1);
	my_ints.push_back(21);

	my_ints.print();

	vector<point> points;
	points.push_back({1, 2});
	// points.print();

	// SFINAE: "Substitution failure is not an error"
	
}
