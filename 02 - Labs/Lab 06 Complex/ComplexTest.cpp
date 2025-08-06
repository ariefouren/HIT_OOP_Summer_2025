// File: ComplexTest.cpp
// test the Complex class

#include <iostream>
#include "Complex.h"
using namespace std;

int main()	
{
	Complex c1(1.0, 1.0);
	Complex c2(1.0, -1.0);
	Complex c3;
	
	cout << "c1=" << c1 << endl;
	cout << "c2=" << c2 << endl;
	cout << "c3=" << c3 << endl;

	cout << "\n\n --- Addition:	---"	<< endl;
	c3 = c1 + c2;
	cout << "c3=c1+c2=" << c3 << endl;
	
	c3 = c1 + 5.0;
	cout << "c3=c1+5.0=" << c3 << endl;
	
	c3 = 5.0 + c1;
	cout << "c3=5.0+c1=" << c3 << endl;

	c3 += c2;
	cout << "c3+=c2=" << c3 << endl;

	c3 += 5.0;
	cout << "c3+=5.0=" << c3 << endl;

	
	cout << "\n\n --- Subtraction: ---"	<< endl;
	c3 = c1 - c2;
	cout << "c3=c1-c2=" << c3 << endl;
	
	c3 = c1 - 5.0;
	cout << "c3=c1-5.0=" << c3 << endl;
	
	c3 = 5.0 - c1;
	cout << "c3=5.0-c1=" << c3 << endl;

	c3 -= c2;
	cout << "c3-=c2=" << c3 << endl;

	c3 -= 5.0;
	cout << "c3-=5.0=" << c3 << endl;

	cout << "\n\n --- Multiplication: ---"	<< endl;	
	c3 = c1 * c2;
	cout << "c3=c1*c2=" << c3 << endl;
	
	c3 = c1 * 5.0;
	cout << "c3=c1*5.0=" << c3 << endl;
	
	c3 = 5.0 * c1;
	cout << "c3=5.0*c1=" << c3 << endl;

	c3 *= c2;
	cout << "c3*=c2=" << c3 << endl;

	c3 *= 5.0;
	cout << "c3*=5.0=" << c3 << endl;
	
	cout << "\n\n --- Division:	---"	<< endl;
	c3 = c1 / c2;
	cout << "c3=c1/c2=" << c3 << endl;
	
	c3 = c1 / 5.0;
	cout << "c3=c1/5.0=" << c3 << endl;
	
	c3 = 5.0 / c1;
	cout << "c3=5.0/c1=" << c3 << endl;

	c3 /= c2;
	cout << "c3/=c2=" << c3 << endl;

	c3 /= 5.0;
	cout << "c3/=5.0=" << c3 << endl;
	
	cout << "\n\n --- Comparison: ---"	<< endl;
	cout << "c1==c2 is " << (c1==c2) << endl;
	cout << "c1==c1 is " << (c1==c1) << endl;
	
	return 0;
} 