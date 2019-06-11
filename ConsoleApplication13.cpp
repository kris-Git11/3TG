// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

struct pravokutnik
{
	int a, b;
};

class pravokutnik2
{
public:
	double opseg(double, double);
	double povrsina(double, double);

	double opsegkrug(double);
	double povrsinakrug(double);
};

double pravokutnik2::opseg(double a, double b) { return ((2 * a) + (2 * b)); }

double pravokutnik2::povrsina(double a, double b) { return (a * b); }

double pravokutnik2::opsegkrug(double r) { return (2 * r * 3.14); }

double pravokutnik2::povrsinakrug(double r) { return ((r * r) * 3.14); }

int main()
{
	pravokutnik p;
	pravokutnik2 p2;

	double rko, // radijsu opisane kruznice kvadratu
		rku, // radijsu upisane kruznice kvadratu
		rpo; // radijsu opisane kruznice pravokutniku

	ifstream file("C:\\Users\\ucenik\\Desktop\\t.txt");
	file >> p.a;
	file >> p.b;
	if (p.a == p.b)
	{
		cout << "Geometrijski lik: kvadrat" << endl << endl;
		cout << "Povrsina: " << p2.povrsina(p.a, p.b) << endl;
		cout << "Opseg: " << p2.opseg(p.a, p.b) << endl << endl;
		rku = (p.a / 2);
		cout << "Opseg upisanog kruga kvadratu: " << p2.opsegkrug(rku) << endl;
		cout << "Povrsina upisanog kruga kvadratu: " << p2.povrsinakrug(rku) << endl;
		rko = ((p.a*(sqrt(2))) / 2);
		cout << "Opseg opisanog kruga kvadratu: " << p2.opsegkrug(rko) << endl;
		cout << "Povrsina opisanog kruga kvadratu: " << p2.povrsinakrug(rko) << endl;

	}
	else if (p.a != p.b)
	{
		cout << "Geometrijski lik: pravokutnik" << endl << endl;
		cout << "Povrsina: " << p2.povrsina(p.a, p.b) << endl;
		cout << "Opseg: " << p2.opseg(p.a, p.b) << endl << endl;
		rpo = ((sqrt((p.a * p.a) + (p.b * p.b))) / 2);
		cout << "Opseg opisanog kruga pravokutniku: " << p2.opsegkrug(rpo) << endl;
		cout << "Povrsina opisanog kruga pravokutniku: " << p2.povrsinakrug(rpo) << endl;
	}

	system("pause");
	return 0;
}

