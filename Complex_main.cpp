#include <iostream>
#include <cmath>
#include <string>
#include "Header.h"
using namespace std;

void print_complex()
{
	double a, b;
	cout << "Forma algebrica a unui numar complex este: " << endl;
	cout << "Scrieti partea reala a numarului complex: ";
	cin >> a;
	cout << "Scrieti partea imaginara a numarului complex: ";
	cin >> b;
	Complex x(a, b);

	Complex r = x.print_compl();

	cout << "Numarul complex este: ";
	if (b < 0)
		cout << r.getterReal() << r.getterImag() << "i" << endl;
	else
		cout << r.getterReal() << "+" << r.getterImag() << "i" << endl;

}

void add_complex()
{
	double a, b, c, d;
	cout << "Adunarea a 2 numere complexe" << endl;
	cout << "Scrieti partea reala a primului numar complex: ";
	cin >> a;
	cout << "Scrieti partea imaginara a primului numar complex: ";
	cin >> b;
	cout << "Scrieti partea reala a celui de al doilea numar complex: ";
	cin >> c;
	cout << "Scrieti partea imaginara a celui de al doilea numar complex:";
	cin >> d;

	Complex x(a, b); //primul numar complex
	Complex y(c, d); //al doilea numar complex

	Complex r = x.addition(y);

	cout << "Rezultatul adunarii a celor 2 numere complexe: ";
	if (b + d < 0)
		cout << r.getterReal() << r.getterImag() << "i" << endl;
	else
		cout << r.getterReal() << "+" << r.getterImag() << "i" << endl;

}
void mul()
{
	double a, b, c, d;
	cout << "Inmultirea a 2 numere complexe: " << endl;
	cout << "Scrieti partea reala a primului numar complex: ";
	cin >> a;
	cout << "Scrieti partea imaginara a primului numar complex: ";
	cin >> b;
	cout << "Scrieti partea reala a celui de al doilea numar complex: ";
	cin >> c;
	cout << "Scrieti partea imaginara a celui de al doilea numar complex:";
	cin >> d;

	Complex x(a, b);
	Complex y(c, d);

	Complex r = x.mult(y);

	cout << "Rezultatul inmultirii a celor 2 numere complexe este: ";
	if (a * d + b * c < 0)
		cout << r.getterReal() << r.getterImag() << "i" << endl;
	else
		cout << r.getterReal() << "+" << r.getterImag() << "i" << endl;

}

void div()
{
	double a, b, c, d;
	cout << "Impartirea a 2 numere complexe" << endl;
	cout << "Scrieti partea reala a primului numar complex: ";
	cin >> a;
	cout << "Scrieti partea imaginara a primului numar complex: ";
	cin >> b;
	cout << "Scrieti partea reala a celui de al doilea numar complex: ";
	cin >> c;
	cout << "Scrieti partea imaginara a celui de al doilea numar complex:";
	cin >> d;

	Complex x(a, b);
	Complex y(c, d);

	Complex r = x.quot(y);

	cout << "Rezultatul impartirii a celor 2 numere complexe: ";
	if (a * (-1) * d + c * b < 0)
		cout << r.getterReal() << r.getterImag() << "i" << endl;
	else
		cout << r.getterReal() << "+" << r.getterImag() << "i" << endl;

}

void modul()
{
	double a, b;
	cout << "Modulul unui numar complex" << endl;
	cout << "Scrieti partea reala a numarului complex: ";
	cin >> a;
	cout << "Scrieti partea imaginara a numarului complex:: ";
	cin >> b;

	Complex x(a, b);

	double r = x.abs();

	cout << "Modulul numarului complex este: ";
	cout << "sqrt" << (a * a + b * b) << " = " << r << "." << endl;
}

void polar()
{
	double a, b;
	cout << "Forma polara:" << endl;
	cout << "Scrieti partea reala a numarului complex: ";
	cin >> a;
	cout << "Scrieti partea imaginara a numarului complex: ";
	cin >> b;
	Complex x(a, b);
	double r = x.abs();
	float u = x.Winkel();


	cout << "Forma polara este  " << r << "*(cos(" << u << "^" << ")+sin(" << u << "^" << ")*i)" << endl;

}

void print_expo()
{
	double a, b;
	cout << "Forma exponentiala a numarului complex:";
	cout << "Scrieti partea reala a numarului complex: ";
	cin >> a;
	cout << "Scrieti partea imaginara a numarului complex: ";
	cin >> b;
	Complex x(a, b);
	double r = x.abs();
	float u = x.Winkel();

	cout << "Forma exponentiala este  " << r << "*e^(" << u << '*' << "*i)" << endl;
}

void init()
{
	int n, i, j;
	double lista_modul[20], parte_imaginara, parte_reala;
	Complex c1, sir[30];
	cout << "Cate numere complexe doriti sa introduceti? " << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Scrieti partea reala a numarului complex: ";
		cin >> parte_reala;
		cout << "Scrieti partea imaginara a numarului complex: ";
		cin >> parte_imaginara;
		c1.setterReal(parte_reala);
		c1.setterImag(parte_imaginara);
		sir[i] = c1;
	}
	cout << "Numerele complexe sunt: " << endl;
	for (i = 0; i <= n - 1; i++)
		if (sir[i].getterImag() > 0)
			cout << sir[i].getterReal() << "+" << sir[i].getterImag() << "i" << endl;
		else
			cout << sir[i].getterReal() << sir[i].getterImag() << "i" << endl; //le afisez
	for (i = 0; i <= n - 1; i++) //calculez modulul fiecarui numar complex si il pun intr-un vector numit lista_modul
		lista_modul[i] = sir[i].abs();
	for (i = 0; i < n - 1; i++) //sortez crescator modulele numerelor
		for (j = i + 1; j < n; j++)
			if (lista_modul[i] > lista_modul[j])
			{
				double auxiliar;
				auxiliar = lista_modul[i];
				lista_modul[i] = lista_modul[j];
				lista_modul[j] = auxiliar;
			}
	cout << "Modulele sunt sortate crescator: "; // modulele sortate crescator pe ecran
	for (i = 0; i < n; i++)
		cout << lista_modul[i] << " " << endl;
	cout << "Numerele complexe sortate crescator in functie de modulul lor: ";
	for (i = 0; i < n; i++) // numerele complexe sortate crescator in functie de modulul lor
		for (j = 0; j < n; j++)
			if (lista_modul[i] == sir[j].abs())
				if (sir[j].getterImag() < 0)
					cout << sir[j].getterReal() << sir[j].getterImag() << "i  " << endl;
				else
					cout << sir[j].getterReal() << "+" << sir[j].getterImag() << "i  " << endl;
	cout << "Suma este: ";
	double suma_real = 0, suma_imaginar = 0;
	for (i = 0; i < n; i++) //calculez suma tuturor numerelor complexe citite anterior de la tastatura
		suma_real = suma_real + sir[i].getterReal();
	for (i = 0; i < n; i++)
		suma_real = suma_real + sir[i].getterImag();
	if (suma_imaginar > 0)
		cout << suma_real << "+" << suma_imaginar << "i" << endl; //afisez suma pe ecran 
	else
		cout << suma_real << suma_imaginar << "i" << endl;
}

void test_addition()
//Metoda adunarii numerelor complexe va fi testata
{
	Complex nr1 = Complex(-1, -2);
	Complex nr2 = Complex(1, 2);
	Complex rezultat = nr1.addition(nr2);
	if (rezultat.getterReal() == 0 && rezultat.getterImag() == 0)
		cout << "Test ok!";
	Complex nr3 = Complex(-1, -2);
	Complex nr4 = Complex(7, 2);
	Complex rezultat2 = nr1.addition(nr2);
	if (rezultat2.getterReal() == 6 && rezultat2.getterImag() == 0)
		cout << "Test ok!";
}

void test_mult()
// Metoda inmultirii numerelor complexe va fi testata
{
	Complex nr1 = Complex(-1, -2);
	Complex nr2 = Complex(1, 2);
	Complex rezultat = nr1.mult(nr2);
	if (rezultat.getterReal() == 3 && rezultat.getterImag() == -4)
		cout << "Test ok!";
	Complex nr3 = Complex(-1, -2);
	Complex nr4 = Complex(7, 2);
	Complex rezultat2 = nr3.mult(nr4);
	if (rezultat2.getterReal() == -3 && rezultat2.getterImag() == -16)
		cout << "Test ok!";
}

void test_quot()
//Metoda impartirii numerelor complexe va fi testata
{
	Complex nr1 = Complex(1, 2);
	Complex nr2 = Complex(3, 3);
	Complex rezultat = nr1.quot(nr2);
	if (rezultat.getterReal() == 0.5 && rezultat.getterImag() == 0.166667)
		cout << "Test ok!";
	Complex nr3 = Complex(5, 2);
	Complex nr4 = Complex(5, 2);
	Complex rezultat2 = nr3.quot(nr4);
	if (rezultat2.getterReal() == 1 && rezultat2.getterImag() == 0)
		cout << "Test ok!";
}

void test_abs()
//Metoda determinarii modulului numerelor complexe va fi testata
{
	Complex nr1 = Complex(0, 0);
	Complex nr2 = Complex(3, 4);
	double rezultat1 = nr1.abs();
	double rezultat2 = nr2.abs();
	if (rezultat1 == 0 && rezultat2 == 5)
		cout << "Test ok!";
}



int main()
{
	print_complex();
	print_expo();
	add_complex();
	mul();
	div();
	modul();
	polar();
	init();
	cout << "Teste: " << endl;
	test_addition();
	test_abs();
	test_mult();

	test_quot();
	return 0;
}