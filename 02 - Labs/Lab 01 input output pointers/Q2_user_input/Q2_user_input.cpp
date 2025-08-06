#include <iostream>
using namespace std;

int main()
{
	// users' input
	double height, width, area, perimeter; 
	cout << "Enter the rectangle width  :";
	cin >> width;

	cout << "Enter the rectangle height  :";
	cin >> height;

	// calculate area and perimeter
	area = width * height;
	perimeter = 2 * (width + height);

	// print the results
	cout << "Area =      " << area << endl;
	cout << "Perimeter = " << perimeter << endl;
}