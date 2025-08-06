//File: Circle.h    
// definition of the Circle class
#pragma once
#include <string> //for string class
using namespace std;
#include "Shape.h" // include the Shape class

class Circle : public Shape
{
public:
    Circle(); // default constructor
    Circle(double x, double y, double radius); // constructor with parameters
    double area() const; // returns the area of the shape
    bool includes(const Point& p) const; // returns true if the shape includes the point p
    string toString() const; // returns a string representation of the shape

    double getRadius() const; // returns the radius of the circle
    void setRadius(double radius); // sets the radius of the circle

private:
    double radius; // radius of the circle
};