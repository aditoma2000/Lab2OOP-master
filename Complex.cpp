#include <iostream>
#include <cmath>
#include <string>
#include "Complex.h"
#define Pi 3.14
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

Complex Complex::mult(Complex otherone)
{//return:: the solution of the multiplication of 2 complex numbers
	Complex Produkt;

	if (this->getterImag() == 0 || otherone.getterImag() == 0)
	{
		Produkt.setterReal(this->getterReal() * otherone.getterReal() + this->getterImag() * otherone.getterImag());
		Produkt.setterImag(this->getterReal() * otherone.getterImag() - this->getterImag() * otherone.getterReal());

	}
	else
	{
		Produkt.setterReal(this->getterReal() * otherone.getterReal() - this->getterImag() * otherone.getterImag());
		Produkt.setterImag(this->getterReal() * otherone.getterImag() + this->getterImag() * otherone.getterReal());
	}

	return Produkt;
}


Complex Complex::quot(Complex nr)

{
	Complex quotient;
	if (this->getterImag() == 0 || nr.getterImag() == 0)
	{
		quotient.setterReal((this->getterReal() * nr.getterReal() + this->getterImag() * nr.getterImag()) / (nr.getterReal() * nr.getterReal() + nr.getterImag() * nr.getterImag()));
		quotient.setterImag((nr.getterReal() * this->getterImag() - this->getterReal() * nr.getterImag()) / (nr.getterReal() * nr.getterReal() + nr.getterImag() * nr.getterImag()));
	}
	else
	{
		quotient.setterReal((this->getterReal() * nr.getterReal() + this->getterImag() * nr.getterImag()) / (nr.getterReal() * nr.getterReal() + nr.getterImag() * nr.getterImag()));
		quotient.setterImag((nr.getterReal() * this->getterImag() + this->getterReal() * nr.getterImag()) / (nr.getterReal() * nr.getterReal() + nr.getterImag() * nr.getterImag()));
	}
	return quotient;
}



double Complex::abs()
//return::abs of 2 complex numbers
{
	double abs;
	abs = sqrt((this->getterReal() * this->getterReal()) + (this->getterImag() * this->getterImag()));
	return abs;
}

float Complex::Winkel()
{
	float angle;
	angle = (atan2(this->getterImag(), this->getterReal()) * 180) / Pi;
	return angle;
}

string Complex::polar_Form()
{//return::Polar Form of a complex number
	double theta;
	theta = atan2(this->getterImag(), this->getterReal());
	string str = to_string(this->abs() * (cos(theta) + sin(theta))) + "*i";
	return str;
}


string Complex::print_expo()
//return::exponential form
{
	double theta;
	theta = atan2(this->getterImag(), this->getterReal());
	string expo = to_string(this->abs()) + "*e^" + to_string(theta) + "*i";
	return expo;

}
Complex Complex::print_compl()
//prints a given complex number
{
	Complex nr;
	nr.setterReal(this->getterReal());
	nr.setterImag(this->getterImag());
	return nr;
}

//Destructor
Complex::~Complex()
{

}


