// File: Rectangle.h
// definition of the Rectangle class

#pragma once
#include <string> //for string class
using namespace std;
#include "Shape.h" // include the Shape class

class Rectangle : public Shape
{
public:
    Rectangle(); // default constructor

	// constructor with parameters
	// (x, y) is the center of the rectangle
    Rectangle(double x, double y, double width, double height);

    double area() const; // returns the area of the shape
    bool includes(const Point& p) const; // returns true if the shape includes the point p
    string toString() const; // returns a string representation of the shape

    double getWidth() const; // returns the width of the rectangle
    double getHeight() const; // returns the height of the rectangle
    void setWidth(double width); // sets the width of the rectangle
    void setHeight(double height); // sets the height of the rectangle

private:
    double width; // width of the rectangle
    double height; // height of the rectangle
};