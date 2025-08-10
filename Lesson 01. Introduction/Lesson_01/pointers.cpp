/*
Example output:

The address of num  (&num)   : 0x61ff08
The value of numPtr          : 0x61ff08

The value of num             : 1025
The value of *numPtr         : 1025

*/
#include <iostream>
using namespace std;

int main()
{
	int num = 1025;
	int* numPtr = &num;

	cout << "The address of num(&num) : " << &num << endl;
	cout << "The value of numPtr :      " << numPtr << endl
		<< endl;
	
	cout << "The value of num : " << num << endl;
	cout << "The value of * numPtr : " << *numPtr << endl;


	return 0;

}