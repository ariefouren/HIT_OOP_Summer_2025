// File: Point.cpp
// implementation of the Point class

#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

// constructor
Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;

}

// default constructor
Point::Point() : x(0), y(0)
{
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

// calculate the distance between this point and another point
double Point::distanceTo(const Point& other) const
{
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

// print the point to the console
void Point::print() const
{
    std::cout << "Point: (" << x << ", " << y << ")" << endl;
}
