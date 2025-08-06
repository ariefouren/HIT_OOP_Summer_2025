// File: pass_by_pointers.cpp
// The program demonstrates that pointers can be passed to functions
// to change the value of a variable indirectly.
#include <iostream>
using namespace std;

// function prototypes
// try to swap x and y by passing parameters by value
void swap(int x, int y);

// swap x and y by passing parameters by pointers
void swap(int* xPtr, int* yPtr);

int main()
{
    int x = 0;
    int y = 1024;

    cout << "Initial values : " << endl;
    cout << "x = " << x << "\t" << "y = " << y << endl << endl;

    // try to swap x and y using swap(x, y)
    // pass by value
    swap(x, y);
    cout << "After swap(x, y)  : " << endl;
    cout << "x = " << x << "\t" << "y = " << y << endl << endl;

    // swap x and y using swap(&x, &y)
    // pass by pointers
     swap(&x, &y);
    cout << "After swap(&x, &y)  : " << endl;
    cout << "x = " << x << "\t" << "y = " << y << endl;

    return 0;
}

void swap(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void swap(int* xPtr, int* yPtr)
{
    int tmp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = tmp;
}


