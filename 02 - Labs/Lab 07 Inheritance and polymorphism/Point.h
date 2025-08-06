// File: Point.h
// definition of the Point class

#pragma once
#include <string> //for string class
using namespace std;

#include "Shape.h" // include the Shape class

class Point : public Shape
{
public:
    Point(); // default constructor
    Point(double x, double y); // constructor with parameters
    double area() const; // returns the area of the point
    bool includes(const Point& p) const; // returns true if this point includes point p
    string toString() const; // returns a string representation of the point
};

