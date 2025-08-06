// File: ShapesCollection.h
// definition of the ShapesCollection class

#pragma once
#include "Shape.h" // include the Shape class
#include <iostream> 

class ShapesCollection
{
public:
    ShapesCollection(int maxNum); // default constructor
    ~ShapesCollection(); // destructor
    void addShape(Shape* shape); // adds a pointer to a Shape object to the collection
    double totalArea() const; // returns the total area of all shapes in the collection
    bool includes(const Point& p) const; // returns true if any shape in the collection includes the point p
    void moveBy(double dx, double dy); // moves all shapes in the collection by dx and dy
    string toString() const; // returns a string representation of the collection

private:
    Shape** shapes; // array of pointers to Shape objects
    int numShapes; // number of shapes in the collection
    int maxNum; // maximum number of shapes in the collection
};



