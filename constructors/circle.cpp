#include <cmath>

#include "circle.hpp"

circle::circle() : center({0, 0}), radius(1) {}

circle::circle(const point& center_parameter, double radius_parameter) :
		center(center_parameter),
		radius(radius_parameter) {

}

bool circle::contains(const point& p) {
	// Computing the distance between p and this->center
	double distance = sqrt(
		pow(p.x - this->center.x, 2) + pow(p.y - this->center.y, 2)
	);

	if (distance <= this->radius) {
		return true;
	}

	return false;
}
