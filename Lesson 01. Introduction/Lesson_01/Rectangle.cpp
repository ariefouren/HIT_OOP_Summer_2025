/*
File: Rectangle.cpp
The rogram computes area and perimeter of rectangle.

Example output: 

Enter the rectangle width  : 100
Enter the rectangle height : 25.5
Perimeter : 251
Area      : 2550


*/
#include <iostream>
using namespace std; 

int main()
{
	cout << "Enter the rectangle width  :";
	double width;
	cin >> width;

	cout << "Enter the rectangle height :";
	double height;
	cin >> height;

	double perimeter = 2 * (width + height);
	double area = width * height;

	cout << "Perimeter: " << perimeter << endl; 
	cout << "Area :     " << area << endl;

	return 0;
}