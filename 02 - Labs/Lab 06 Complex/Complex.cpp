// File: Complex.cpp
// implementation of the Complex class
#include <iostream>
#include "Complex.h"
#include <cmath>
using namespace std;

double Complex::getRe() const 
{
	return re;
}

double Complex::getIm() const
{
	return im;
}

void Complex::setRe(double)
{
	this->re = re;
}

void Complex::setIm(double)
{
	this->im = im;
}

// overloaded operators

// for assignment
Complex & Complex::operator=(const Complex &c) // c1=c2 
{
	this->re = c.re;
	this->im = c.im;
	return *this;
}

// for addition
Complex Complex::operator+(const Complex &c) const // c3=c1+c2
{
	return Complex(re + c.re, im + c.im);
}

// member function
Complex Complex::operator+(const double d) const // c2=c1+5.0
{
	return Complex(re + d, im);
}

// friend function
Complex operator+(const double d, const Complex &c) // c2=5.0+c1
{
	return Complex(c.re + d, c.im);
}

Complex& Complex::operator+=(const Complex &c) // c1+=c2
{
	this->re += c.re;
	this->im += c.im;
	return *this;
}

Complex& Complex::operator+=(const double d) // c1+=5.0
{
	this->re += d;
	return *this;
}

// for subtraction
Complex Complex::operator-(const Complex &c) const // c3=c1-c2
{
	return Complex(re - c.re, im - c.im);
}

Complex Complex::operator-(const double d) const // c2=c1-5.0
{
	return Complex(re - d, im);
}

// friend function
Complex operator-(const double d, const Complex &c) // c2=5.0-c1
{
	return Complex(d - c.re, -c.im);
}

Complex& Complex::operator-=(const Complex &c) // c1-=c2
{
	this->re -= c.re;
	this->im -= c.im;
	return *this;
}

Complex& Complex::operator-=(const double d) // c1-=5.0
{
	this->re -= d;
	return *this;
}

// for multiplication
Complex Complex::operator*(const Complex &c) const // c3=c1*c2
{
	return Complex(re*c.re - im*c.im, re*c.im + im*c.re);
}

Complex Complex::operator*(const double d) const // c2=c1*5.0
{
	return Complex(re*d, im*d);
}

Complex operator*(const double d, const Complex &c) // c2=5.0*c1
{
	return Complex(c.re*d, c.im*d);
}

Complex & Complex::operator*=(const Complex &c) // c1*=c2
{
	double newRe = re*c.re - im*c.im;	
	double newIm = re*c.im + im*c.re;
	re = newRe;
	im = newIm;
	return *this;
}

Complex & Complex::operator*=(const double d) // c1*=5.0
{
	re *= d;
	im *= d;
	return *this;
}

// for division
Complex Complex::operator/(const Complex &c) const // c3=c1/c2
{
	double newRe = (re*c.re + im*c.im)/(c.re*c.re + c.im*c.im);
	double newIm = (im*c.re - re*c.im)/(c.re*c.re + c.im*c.im);
	return Complex(newRe, newIm);
}

Complex Complex::operator/(const double d) const // c2=c1/5.0
{
	return Complex(re/d, im/d);
}

Complex operator/(const double d, const Complex &c) // c2=5.0/c1
{
	double newRe = (d*c.re)/(c.re*c.re + c.im*c.im);
	double newIm = (-d*c.im)/(c.re*c.re + c.im*c.im);
	return Complex(newRe, newIm);
}

Complex & Complex::operator/=(const Complex &c) // c1/=c2
{
	double newRe = (re*c.re + im*c.im)/(c.re*c.re + c.im*c.im);
	double newIm = (im*c.re - re*c.im)/(c.re*c.re + c.im*c.im);
	re = newRe;
	im = newIm;
	return *this;
}

Complex & Complex::operator/=(const double d) // c1/=5.0
{
	re /= d;
	im /= d;
	return *this;
}

// for comparison	
bool Complex::operator==(const Complex &c) const // c1==c2
{
	return (re == c.re) && (im == c.im);
}

// for output
// friend function
ostream & operator<<(ostream &os, const Complex &c)
{
	os << c.re << (c.im >= 0 ? " + " : " - ") << abs(c.im) << "i";
	return os;
}
