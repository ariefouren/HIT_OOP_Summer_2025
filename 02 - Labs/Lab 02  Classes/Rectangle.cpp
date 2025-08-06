// File:   Rectangle.cpp
// implementation of the Rectangle class

#include "Point.h"
#include "Rectangle.h"
#include <iostream>
#include <cmath>
using namespace std;

// constructor
Rectangle::Rectangle(const Point& bottomLeft, const Point& topRight)
{
    this->bottomLeft = bottomLeft;
    this->topRight = topRight;
}

// default constructor
Rectangle::Rectangle()
{
    bottomLeft = Point(0, 0);
    topRight = Point(0, 0);
}

Point Rectangle::getBottomLeft() const
{
    return bottomLeft;
}

Point Rectangle::getTopRight() const
{
    return topRight;
}

void Rectangle::setBottomLeft(const Point& bottomLeft)
{
    this->bottomLeft = bottomLeft;
}

void Rectangle::setTopRight(const Point& topRight)
{
    this->topRight = topRight;
}

// calculate the area of the rectangle
double Rectangle::area() const
{
    double width = topRight.getX() - bottomLeft.getX();
    double height = topRight.getY() - bottomLeft.getY();
    return width * height;
}

// calculate the perimeter of the rectangle
double Rectangle::perimeter() const
{
    double width = topRight.getX() - bottomLeft.getX();
    double height = topRight.getY() - bottomLeft.getY();
    return 2 * (width + height);
}

// calculate the length of the diagonal 
double Rectangle::diagonal() const
{
    double width = topRight.getX() - bottomLeft.getX();
    double height = topRight.getY() - bottomLeft.getY();
    return sqrt(width * width + height * height);
}

// check if a point is inside the rectangle
bool Rectangle::includes(const Point& p) const
{
    return (p.getX() >= bottomLeft.getX() &&
        p.getX() <= topRight.getX() &&
        p.getY() >= bottomLeft.getY() &&
        p.getY() <= topRight.getY());
}

// check if this rectangle overlaps with another rectangle
bool Rectangle::overlaps(const Rectangle& other) const
{
    return (!(bottomLeft.getX() > other.topRight.getX() ||
        topRight.getX() < other.bottomLeft.getX() ||
        bottomLeft.getY() > other.topRight.getY() ||
        topRight.getY() < other.bottomLeft.getY()));
}

// print the rectangle to the console
void Rectangle::print() const
{
    cout << "Rectangle: (" << bottomLeft.getX() << ", " << bottomLeft.getY() << "), ("
        << topRight.getX() << ", " << topRight.getY() << ")" << endl;
}
