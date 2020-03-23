#include <iostream>
#include <cmath>
#include <string>
#include "Complex.h"
using namespace std;

Complex::Complex()
{
	r = 0;
	i = 0;
}

Complex::Complex(double r, double i)
{
	this->r = r;
	this->i = i;
}


double Complex::getterReal() const
{	//return::the real part

	return r;
}


void Complex::setterReal(double r) {
	this->r = r;
}


double Complex::getterImag() const
{	//return::the imaginary part

	return i;
}


void Complex::setterImag(double im) {
	this->i = i;
}


Complex Complex::addition(Complex other)
{	//return::sum of 2 complex numbers

	Complex Summe;
	Summe.setterReal(this->getterReal() + other.getterReal());
	Summe.setterImag(this->getterImag() + other.getterImag());
	return Summe;
}


//Destructor
Complex::~Complex()
{

}

