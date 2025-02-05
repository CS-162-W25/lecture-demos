#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class circle {
private:
	point center; // X,Y coordinate (2D point) of circle's center
	double radius;
public:
	/*
	 * Function: contains()
	 * Description: Determines whether a given point p is inside the
	 * 	circle
	 * Parameters:
	 * 	p (const point&): The point to check for containment within
	 * 		the circle
	 * Returns (bool): True if p is in the circle, false otherwise
	 */
	bool contains(const point& p);
};

#endif
