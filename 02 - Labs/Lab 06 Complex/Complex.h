// File: Complex.h
// define a class Complex for complex number
#pragma once
#include <iostream>
using namespace std;

class Complex{
public:
	// constructors
	Complex(double re=0,double im=0) :re(re), im(im){}; // note the initialization list
	Complex(const Complex &c) :re(c.re), im(c.im){}; // copy constructor

	// getters and setters
	double getRe() const;
	double getIm() const;
	void setRe(double);
	void setIm(double);

	// overloaded operators
	// for assignment
	Complex & operator=(const Complex &); // c1=c2 
	
	// for addition
	Complex operator+(const Complex &) const; // c3=c1+c2
	Complex operator+(const double ) const; // c2=c1+5.0
	friend Complex operator+(const double, const Complex &); // c2=5.0+c1
	Complex& operator+=(const Complex &); // c1+=c2
	Complex& operator+=(const double ); // c1+=5.0
	
	// for subtraction
	Complex operator-(const Complex &) const; // c3=c1-c2
	Complex operator-(const double ) const; // c2=c1-5.0
	friend Complex operator-(const double, const Complex &); // c2=5.0-c1
	Complex& operator-=(const Complex &); // c1-=c2
	Complex& operator-=(const double ); // c1-=5.0

	// for multiplication
	Complex operator*(const Complex &) const; // c3=c1*c2
	Complex operator*(const double ) const; // c2=c1*5.0
	friend Complex operator*(const double, const Complex &); // c2=5.0*c1
	Complex & operator*=(const Complex &); // c1*=c2
	Complex & operator*=(const double ); // c1*=5.0

	// for division
	Complex operator/(const Complex &) const; // c3=c1/c2
	Complex operator/(const double ) const; // c2=c1/5.0
	friend Complex operator/(const double, const Complex &); // c2=5.0/c1
	Complex & operator/=(const Complex &); // c1/=c2
	Complex & operator/=(const double ); // c1/=5.0

	// for comparison	
	bool operator==(const Complex &) const; // c1==c2

	// for output
	friend ostream & operator<<(ostream &, const Complex &);

private:
	double re; // real part
	double im; // imaginary part
};
