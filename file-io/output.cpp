#include <fstream>

int main() {
	std::ofstream some_cool_file;
	some_cool_file.open("cool_file.txt", std::ofstream::app);
	some_cool_file << "Hello, World!" << std::endl;
}
