// File: RectangleTest.cpp
// testing the Rectangle class

#include "Point.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "--- Testing a single rectangle ---" << endl;
    // create a rectangle object
    Rectangle r1(Point(0, 0), Point(2, 2));

    // print the rectangle
    r1.print();

    // calculate the area of the rectangle
    cout << "Area: " << r1.area() << endl;

    // calculate the perimeter of the rectangle
    cout << "Perimeter: " << r1.perimeter() << endl;

    // calculate the length of the diagonal
    cout << "Diagonal: " << r1.diagonal() << endl;

    // check if a point is inside the rectangle
    Point p1(1, 1);
    Point p2(2, 2);
    Point p3(3, 3);

    //Print the points
    cout << "Point 1: ";
    p1.print();
    cout << "Point 2: ";
    p2.print();
    cout << "Point 3: ";
    p3.print();

    //Check if the points are inside the rectangle
    cout << "Point 1 is inside the rectangle: " << (r1.includes(p1) ? "yes" : "no") << endl;
    cout << "Point 2 is inside the rectangle: " << (r1.includes(p2) ? "yes" : "no") << endl;
    cout << "Point 3 is inside the rectangle: " << (r1.includes(p3) ? "yes" : "no") << endl;

    cout << "\n\n--- Testing two rectangles ---" << endl;
    // create another rectangle object
    Rectangle r2(Point(3, 3), Point(4, 4));
    Rectangle r3(Point(2, 2), Point(3, 3));
    Rectangle r4(Point(0.5, -1), Point(1.5, 3));

    cout << "Rectangle 1: ";
    r1.print();
    cout << "Rectangle 2: ";
    r2.print();
    cout << "Rectangle 3: ";
    r3.print();
    cout << "Rectangle 4: ";
    r4.print();

    cout << "Rectangle 1 overlaps with rectangle 2: " <<
        (r1.overlaps(r2) ? "yes" : "no") << endl;
    cout << "Rectangle 1 overlaps with rectangle 3: " <<
        (r1.overlaps(r3) ? "yes" : "no") << endl;
    cout << "Rectangle 1 overlaps with rectangle 4: " <<
        (r1.overlaps(r4) ? "yes" : "no") << endl;

    return 0;
}