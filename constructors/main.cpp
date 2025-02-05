#include <iostream>

#include "point.hpp"
#include "circle.hpp"

int main() {
	// circle c; // This will call the default constructor
	
	point center;
	center.x = 3.5;
	center.y = 4.7;
	
	circle c(center, 9.81);

	point p;
	p.x = 1000;
	p.y = -0.5;

	if (c.contains(p)) {
		std::cout << "The point is in the circle!" << std::endl;
	} else {
		std::cout << "The point is not in the circle!" << std::endl;
	}
}
