//File: Rectangle.h
// declaration of the Rectangle class
#pragma once
#include "Point.h"
class Rectangle
{
public:
    Rectangle(const Point& bottomLeft, const Point& topRight);  // constructor
    Rectangle(); // default constructor

    Point getBottomLeft() const;
    Point getTopRight() const;

    void setBottomLeft(const Point& bottomLeft);
    void setTopRight(const Point& topRight);

    // print the rectangle to the console
    void print() const;

    // calculate the area of the rectangle
    double area() const;
    // calculate the perimeter of the rectangle
    double perimeter() const;
    // calculate the length of the diagonal 
    double diagonal() const;

    // check if a point is inside the rectangle
    bool includes(const Point& p) const;

    // check if this rectangle overlaps with another rectangle
    // two rectangles overlap if they have at least one point in common
    bool overlaps(const Rectangle& other) const;

private:
    Point bottomLeft; // bottom left corner of the rectangle
    Point topRight; // top right corner of the rectangle
};