// File: pointers2.cpp
// The program demonstrates that pointers can be used 
// to change the value of a variable indirectly.
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 1024;
    int* ptr1 = &x; //  ptr1 is a pointer to an integer variable x
    int* ptr2 = &y; //  ptr2 is a pointer to an integer variable y

    cout << "Initial values : " << endl;
    cout << " ptr1 : " << ptr1 << "\t"; // "\t" is a tab character for better formatting
    cout << "*ptr1 : " << *ptr1 << endl;
    cout << " ptr2 : " << ptr2 << "\t";
    cout << "*ptr2 : " << *ptr2 << endl << endl;

    ptr2 = ptr1;
    cout << "After ptr2 = ptr1 : " << endl;
    cout << " ptr1 : " << ptr1 << "\t";
    cout << "*ptr1 : " << *ptr1 << endl;
    cout << " ptr2 : " << ptr2 << "\t";
    cout << "*ptr2 : " << *ptr2 << endl << endl;

    *ptr2 = 2048;
    cout << "After *ptr1 = 2048 : " << endl;
    cout << " ptr1 : " << ptr1 << "\t";
    cout << "*ptr1 : " << *ptr1 << endl;
    cout << " ptr2 : " << ptr2 << "\t";
    cout << "*ptr2 : " << *ptr2 << endl << endl;

    return 0;
}
