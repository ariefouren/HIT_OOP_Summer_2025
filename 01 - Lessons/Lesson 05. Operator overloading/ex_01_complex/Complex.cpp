//
// Complex.cpp
// implementation of the class Complex that represents complex numbers
// demonstrates operators' overloading
//
#include <iostream>
#include <string>  // for string class definition
#include <sstream> // for ostringstream - printing to string
#include <iomanip> // for setprecision                                                  
#include "Complex.h"
using namespace std;

// Constructor for Complex class
Complex::Complex(double re, double im)
    : re(re), im(im) {}


// Cast operator to convert Complex to double (real part)
Complex::operator double() const {
    return this->re;
}

// explicit cast operator to convert Complex to string
Complex::operator string() const
{
	ostringstream oss; // Create an output string stream
	oss << fixed << setprecision(2); // Set precision for floating-point numbers
	// Format the complex number as a string
    oss << "(" << re 
        << (im >= 0 ? " + " : " - ") // Add '+' if im part is positive, else add '-'
		<< abs(im) << "i)";  // Add the im part with 'i' suffix
	return oss.str(); // Return the string representation of the complex number
}

// Overloading + operator for Complex + Complex
Complex Complex::operator+(const Complex& other) const {
    return Complex(this->re + other.re, this->im + other.im);
}

// Overloading - operator for Complex - Complex
Complex Complex::operator-(const Complex& other) const {
    return Complex(re - other.re, im - other.im);
}

// Overloading * operator for Complex * Complex
Complex Complex::operator*(const Complex& other) const {
    return Complex(re * other.re - im * other.im,
        re * other.im + im * other.re);
}

// Overloading == operator for Complex == Complex
bool Complex::operator==(const Complex& other) const {
    return (re == other.re) && (im == other.im);
}

// Overloading != operator for Complex != Complex
bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

// Overloading + operator for Complex + re
Complex Complex::operator+(const double& reNum) const {
    return Complex(re + reNum, im);
}

// Overloading - operator for Complex - re
Complex Complex::operator-(const double& reNum) const {
    return Complex(re - reNum, im);
}

// Overloading * operator for Complex * re
Complex Complex::operator*(const double& reNum) const {
    return Complex(re * reNum, im * reNum);
}

// Overloading + operator for re + Complex
Complex operator+(const double& reNum, const Complex& complex) {
    return complex + reNum; // Reuse the already defined operator
}

// Overloading - operator for re - Complex
Complex operator-(const double& reNum, const Complex& complex) {
    return Complex(reNum - complex.re, -complex.im);
}

// Overloading * operator for re * Complex
Complex operator*(const double& reNum, const Complex& complex) {
    return complex * reNum; // Reuse the already defined operator
}

// Function to get the re part of the complex number
double Complex::getRe() const {
    return re;
}

// Function to get the im part of the complex number
double Complex::getIm() const {
    return im;
}

// Overloading / operator for Complex / Complex (division of two complex numbers)
Complex Complex::operator/(const Complex& other) const {
    double denominator = other.re * other.re + other.im * other.im;
    double rePart = (re * other.re + im * other.im) / denominator;
    double imagPart = (im * other.re - re * other.im) / denominator;
    return Complex(rePart, imagPart);
}

// Overloading / operator for Complex / re
Complex Complex::operator/(const double& reNum) const {
    return Complex(re / reNum, im / reNum);
}

// Overloading / operator for re / Complex
Complex operator/(const double& reNum, const Complex& complex) {
    double denominator = complex.re * complex.re + complex.im * complex.im;
    double rePart = (reNum * complex.re) / denominator;
    double imagPart = (-reNum * complex.im) / denominator;
    return Complex(rePart, imagPart);
}

// Prefix ++ operator affecting the re part only
Complex& Complex::operator++() {
    ++re;
    return *this;
}

// Postfix ++ operator affecting the re part only
Complex Complex::operator++(int) {
    Complex temp(*this);
    ++re;
    return temp;
}



// Postfix -- operator affecting the re part only (friend function)
Complex operator--(Complex& complex, int) {
    Complex temp(complex);
    complex.re--;
    return temp;
}

// Prefix -- operator affecting the re part only (friend function)
Complex& operator--(Complex& complex) {
    --complex.re;
    return complex;
}
// Overloading << operator for printing complex numbers
ostream& operator<<(ostream& os, const Complex& complex) {
    os << (string) complex;
    return os;
}

istream& operator>>(istream& is, Complex& complex) {
    char sign;
    is >> complex.re;
    is >> sign;
    if (sign == '+') {
        is >> complex.im;
    }
    else if (sign == '-') {
        is >> complex.im;
        complex.im = -complex.im;
    }
    else {
        is.setstate(ios::failbit);
        return is;
    }
    if (is.peek() == 'i') // Check for 'i' at the end
        is.ignore(); // Ignore 'i' character if present
    return is;
}
