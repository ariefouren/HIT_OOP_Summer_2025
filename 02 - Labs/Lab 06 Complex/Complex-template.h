// File: Complex.h
// define a class Complex for complex number
#pragma once
#include <iostream>
using namespace std;

class Complex{
public:
	// constructors
	// for Complex c1(1.0, -1.0), c2(1.0), c3; // use initialization list

	// for Complex c4(c1); // use copy constructor
    
	// getters and setters for re and im
	
	// overloaded operators
	// for assignment
	// c1=c2;  c1 = (c2 = c3);
	
	// for addition
	// c3=c1+c2
	// c2=c1+5.0
	// c2=5.0+c1
	// c1+=c2
	// c1+=5.0
	
	// for subtraction
	// c3=c1-c2
	// c2=c1-5.0
	// c2=5.0-c1
	// c1-=c2
	// c1-=5.0

	// for multiplication
	// c3=c1*c2
	// c2=c1*5.0
	// c2=5.0*c1
	// c1*=c2
	// c1*=5.0

	// for division
	// c3=c1/c2
	// c2=c1/5.0
	// c2=5.0/c1
	// c1/=c2
	// c1/=5.0

	// for comparison	
	// c1==c2

	// for output
	// cout << c1;

private:
	// real part
	// imaginary part
};
