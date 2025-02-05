#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "point.hpp"

class circle {
private:
	point center; // X,Y coordinate (2D point) of circle's center
	double radius;
public:
	// A constructor is a special member function that's automatically
	// called the moment an object is declared, and it's called on that
	// object. Its purpose is to "set up" the object.
	
	// Two categories of constructors:
	// Default constructors (with no parameters)
	// Nondefault constructors (with parameters)
	circle();
	circle(const point& center, double radius);

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

// in main:
// 	circle c;
// 	// set c's center and radius
// 	
// 	point p;
// 	p.x = 12;
// 	p.y = 7;
//
// 	// Is p contained within c?
// 	if (c.contains(p)) {
//		// ... Maybe do something here
// 	}

#endif
