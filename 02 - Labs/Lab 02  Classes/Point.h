// File: Point.h
// declaration of the Point class

#pragma once // check if this file has been included before
class Point
{
public:
    Point(double x, double y);  // constructor
    Point(); // default constructor

    double getX() const;
    double getY() const;

    void setX(double x);
    void setY(double y);

    // calculate the distance between this point and another point
    double distanceTo(const Point& other) const;
    // print the point to the console
    void print() const;

private:
    double x; // x-coordinate of the point
    double y; // y-coordinate of the point
};
