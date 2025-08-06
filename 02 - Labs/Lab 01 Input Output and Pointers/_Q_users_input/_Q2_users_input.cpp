#include <iostream>
using namespace std;

int main()
{
	// users' input
	double width, height;
	cout << "Enter rectangle width and height :";
	cin >> width >> height;

	// calculate area and perimeter
	double area = width * height;
	double perimeter = 2 * (width + height);

	// print results
	cout << "Area =      " << area << endl;
	cout << "Perimeter = " << perimeter << endl;

	
}