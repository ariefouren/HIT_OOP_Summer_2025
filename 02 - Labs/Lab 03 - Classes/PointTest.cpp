// File: PointTest.cpp
// test the Point class
#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
    Point p1;
    Point p2(3, 4);
    p1.print();
    p2.print();
    cout << "Distance between p1 and p2: " << p1.distanceTo(p2) << endl;

    p1.setX(5);
    p1.setY(6);
    cout << "Set p1 to (5, 6)" << endl;
    p1.print();
    cout << "Distance between p1 and p2: " << p1.distanceTo(p2) << endl;
    return 0;
}
