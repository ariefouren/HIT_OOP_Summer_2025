// File: TestShapesCollection.cpp
// test program for classes Shape, Point, Circle, Rectangle and ShapesCollection

#include "ShapesCollection.h"
#include "Point.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    cout << " --- Testing Point class --- " << endl;
    Point p1(1, 2);
    cout << "p1: " << p1.toString() << endl;
    p1.moveBy(10, 10);
    cout << "After moving p1 by (10, 10): " << p1.toString() << endl;
    Point p2(1, 2);
    cout << "p2: " << p2.toString() << endl;
    cout << "p1 includes p2: " << p1.includes(p2) << endl;
    cout << "p1 includes p1: " << p1.includes(p1) << endl;

    cout << " --- Testing Circle class --- " << endl;
    Circle c1(0, 0, 5);
    cout << "c1: " << c1.toString() << endl;
    c1.moveBy(1, -1);
    cout << "After moving c1 by (1, -1): " << c1.toString() << endl;
    cout << "c1 includes p1: " << c1.includes(p1) << endl;
    cout << "c1 includes p2: " << c1.includes(p2) << endl << endl;

    cout << " --- Testing Rectangle class --- " << endl;
    Rectangle r1(0, 0, 5, 10);
    cout << "r1: " << r1.toString() << endl;
    r1.moveBy(1, -1);
    cout << "After moving r1 by (1, -1): " << r1.toString() << endl;
    cout << "r1 includes p1: " << r1.includes(p1) << endl;
    cout << "r1 includes p2: " << r1.includes(p2) << endl << endl;

    cout << " --- Testing ShapesCollection class --- " << endl;
    ShapesCollection collection(10);
    cout << "collection: " << collection.toString() << endl;

    collection.addShape(new Point(1, 2));
    collection.addShape(new Circle(0, 0, 5));
    collection.addShape(new Rectangle(0, 0, 5, 10));
    cout << "collection: " << collection.toString() << endl;

    collection.moveBy(1, -1);
    cout << "After moving all shapes in the collection by (1, -1): " << collection.toString() << endl;

    cout << "includes p1: " << collection.includes(p1) << endl;
    cout << "includes p2: " << collection.includes(p2) << endl;
    cout << "includes Point(0, 0): " << collection.includes(Point(0, 0)) << endl;



    return(0);
}