#include <iostream>
#include <fstream> // File stream

struct baseball_player {
	std::string name;
	double batting_average;
};

baseball_player read_baseball_player(std::ifstream& data_file) {
	baseball_player p;
	data_file >> p.name;
	data_file >> p.batting_average;
	return p;
}

int main() {
	std::ifstream data_file;
	data_file.open("data.txt");
	if (data_file.is_open()) {
		baseball_player p = read_baseball_player(data_file);

		data_file.close();
	} else {
		std::cout << "Failed to open the file!" << std::endl;
	}
}
