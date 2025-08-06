// File: Circle.cpp
// // implementation of the Circle class
#include "Point.h"
#include "Circle.h"
#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// constructor
Circle::Circle(const Point& center, double radius)
{
    this->center = center;
    this->radius = radius;
}

// default constructor
Circle::Circle()
{
    center = Point(0, 0);
    radius = 0;
}

Point Circle::getCenter() const
{
    return center;
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setCenter(const Point& center)
{
    this->center = center;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

// calculate the area of the circle
double Circle::area() const
{
    return M_PI * radius * radius;
}

// calculate the circumference of the circle
double Circle::circumference() const
{
    return 2 * M_PI * radius;
}

// check if a point is inside the circle
bool Circle::includes(const Point& p) const
{
    // if the distance between the center of the circle and the point
    // is less or equal to the radius of the circle
    // then the point is inside the circle
    return center.distanceTo(p) <= radius;
}

// check if this circle overlaps with another circle
// two circles overlap if they have at least one point in common
bool Circle::overlaps(const Circle& other) const
{
    // if the distance between the centers of the two circles 
    // is less or equal to the sum of their radii
    // then the circles overlap
    return center.distanceTo(other.center) <=
        radius + other.radius;
}

// print the circle to the console
void Circle::print() const
{
    cout << "Center: ";
    center.print();
    cout << "Radius: " << radius << endl;
}

