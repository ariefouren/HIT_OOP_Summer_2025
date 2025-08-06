// File: CircleTest.cpp
// testing the Circle class

#include "Circle.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
    cout <<"--- Testing a single circle ---\n";
    // create a circle with center (0, 0) and radius 1
    Circle c1(Point(0, 0), 1);
    // print the circle
    c1.print();
    // calculate the area of the circle
    cout << "Area: " << c1.area() << endl;
    // calculate the circumference of the circle
    cout << "Circumference: " << c1.circumference() << endl;

    cout << "\n\n--- Testing a circle and a point ---\n";
    Point p1(0, 0);
    Point p2(1, 1);
    Point p3(2, 2);
    // print the points
    cout <<"Point 1\n";
    p1.print();
    cout <<"Point 2\n";
    p2.print();
    cout <<"Point 3\n";
    p3.print();
    // check if the point (0, 0) is inside the circle c1
    cout << "Point 1 is inside the circle c1: " << (c1.includes(p1)? "yes" : "no") << endl;
    // check if the point (1, 1) is inside the circle c1
    cout << "Point 2 is inside the circle c1: " <<  (c1.includes(p2)? "yes" : "no") << endl;
    // check if the point (2, 2) is inside the circle c1
    cout << "Point 3 is inside the circle c1: " << (c1.includes(p3)? "yes" : "no") << endl;

    cout << "\n\n--- Testing two circles ---\n";
    Circle c2(Point(2, 2), 1);
    Circle c3(Point(0, 2), 1);
    Circle c4(Point(0, 0), 2);
    // print the circles
    cout <<"Circle 2\n";
    c2.print();
    cout <<"Circle 3\n";
    c3.print();
    cout <<"Circle 4\n";
    c4.print();

    // check if the circle c1 overlaps with the circle c2
    cout << "Circle 1 overlaps with circle 2: " << (c1.overlaps(c2)? "yes" : "no") << endl;
    // check if the circle c1 overlaps with the circle c3
    cout << "Circle 1 overlaps with circle 3: " << (c1.overlaps(c3)? "yes" : "no") << endl;
    // check if the circle c1 overlaps with the circle c4
    cout << "Circle 1 overlaps with circle 4: " << (c1.overlaps(c4)? "yes" : "no") << endl;

    return 0;
}
