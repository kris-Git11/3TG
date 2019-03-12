// ConsoleApplication90.cpp : Defines the entry point for the console application.
//Matija Znidaric
#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <algorithm>

using namespace std;

class Razlomak
{
public:
	int x, y;
	Razlomak() {};
	Razlomak(int, int);
	Razlomak operator+ (Razlomak);
	Razlomak operator- (Razlomak);
	Razlomak operator* (Razlomak);
	Razlomak operator/ (Razlomak);
};
Razlomak::Razlomak(int a, int b)
{
	x = a; y = b;
}
Razlomak Razlomak::operator+ (Razlomak plus)
{
	Razlomak zbroj;
	zbroj.x = x*plus.y + plus.x*y;
	zbroj.y = y * plus.y;
	return zbroj;
}
Razlomak Razlomak::operator- (Razlomak minus)
{
	Razlomak rezmin;
	rezmin.x = x * minus.y - minus.x*y;
	rezmin.y = y * minus.y;
	return rezmin;
}
Razlomak Razlomak::operator* (Razlomak puta)
{
	Razlomak umnozak;
	umnozak.x = x * puta.x;
	umnozak.y = y * puta.y;
	return umnozak;
}
Razlomak Razlomak::operator/ (Razlomak djeljenje)
{
	Razlomak rezdjel;
	rezdjel.x = y * djeljenje.x;
	rezdjel.y = x * djeljenje.y;
	return rezdjel;
}

int main() {
	Razlomak a(2, 4);
	Razlomak b(1, 4);
	Razlomak c;
	Razlomak d;
	Razlomak e;
	Razlomak f;
	c = a + b;
	d = a - b;
	e = a * b;
	f = b / a;
		for (int i = 1; i <= abs(min(c.x, c.y)); i++)
		{
			if ((c.x%i == 0) && (c.y%i == 0))
			{
				c.x = c.x / i;
				c.y = c.y / i;
				i = 1;
			}
		}
		for (int i = 1; i <= abs(min(d.x, d.y)); i++)
		{
			if ((d.x%i == 0) && (d.y%i == 0))
			{
				d.x = d.x / i;
				d.y = d.y / i;
				i = 1;
			}
		}
		for (int i = 1; i <= abs(min(e.x, e.y)); i++)
		{
			if ((e.x%i == 0) && (e.y%i == 0))
			{
				e.x = e.x / i;
				e.y = e.y / i;
				i = 1;
			}
		}
		for (int i = 1; i <= abs(min(f.x, f.y)); i++)
		{
			if ((f.x%i == 0) && (f.y%i == 0))
			{
				f.x = f.x / i;
				f.y = f.y / i;
				i = 1;
			}
		}

cout <<"Rezultat zbrajanja je "<< c.x << "/" << c.y<<endl;
cout << "Rezultat oduzimanja je " << d.x << "/" << d.y << endl;
cout << "Rezultat mnozenja je " << e.x << "/" << e.y << endl;
cout << "Rezultat djeljenja je " << f.x << "/" << f.y << endl;
	return 0;
}
