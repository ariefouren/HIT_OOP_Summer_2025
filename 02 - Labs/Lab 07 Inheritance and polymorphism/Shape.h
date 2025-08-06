// File: Shape.h
// definition of the Shape class
#pragma once
#include <string> //for string class
using namespace std;

class Point; // forward declaration of the Point class

class Shape
{
public:
    Shape();
    Shape(double x, double y); // constructor with parameters

    double getX() const; // returns the x-coordinate of the center of the shape
    double getY() const; // returns the y-coordinate of the center of the shape
    void setX(double x); // sets the x-coordinate of the center of the shape
    void setY(double y); // sets the y-coordinate of the center of the shape

    void moveBy(double dx, double dy); // moves the shape by dx in the x-direction and dy in the y-direction
    // returns the area of the shape
    virtual double area() const = 0; // pure virtual function

    // returns true if the shape includes the point p
    virtual bool includes(const Point& p) const = 0; // pure virtual function

    // returns a string representation of the shape
    virtual string toString() const = 0; // pure virtual function

private: 
    double x; // x-coordinate of the center of the shape
    double y; // y-coordinate of the center of the shape
};