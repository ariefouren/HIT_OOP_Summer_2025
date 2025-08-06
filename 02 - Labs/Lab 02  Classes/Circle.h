// File: Circle.h
// declaration of the Circle class

#pragma once
#include "Point.h"
class Circle
{
public:
    Circle(const Point& center, double radius);  // constructor
    Circle(); // default constructor

    Point getCenter() const;
    double getRadius() const;

    void setCenter(const Point& center);
    void setRadius(double radius);

    // print the circle to the console
    void print() const;

    // calculate the area of the circle
    double area() const;
    // calculate the circumference of the circle
    double circumference() const;

    // check if a point is inside the circle
    bool includes(const Point& p) const;

    // check if this circle overlaps with another circle
    // two circles overlap if they have at least one point in common
    bool overlaps(const Circle& other) const;

private:
    Point center; // center of the circle
    double radius; // radius of the circle
};