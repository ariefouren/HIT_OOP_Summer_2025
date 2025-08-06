// File: pointer_to_var.cpp
// The program demonstrates the use of pointers to variables.

#include <iostream>

using namespace std;

int main()
{
    int num = 1025;         // declare and initialize variable num
    int* numPtr = &num;     // initialize numPtr with the address of int variable num

    cout << "The address of num  (&num)   : " << &num << endl;
    cout << "The value of numPtr          : " << numPtr << endl << endl;

    cout << "The value of num             : " << num << endl;
    cout << "The value of *numPtr         : " << *numPtr << endl;

    return 0;
}
