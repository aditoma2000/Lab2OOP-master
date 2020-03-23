#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Complex
{
private:
	double r;
	double i;

public:
	Complex(double r, double i);
	Complex();

	double getterReal() const;      //access method
	void setterReal(double r);
	double getterImag() const; //access method
	void setterImag(double i);
	Complex addition(Complex other);
	~Complex();





};
