////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
*  Project name: Zadatak 2 (Opseg i povrsina trokuta pomocu klase)
*  Start time:   26.II.2019.  08:01:21
*  Finished time:26.II.2019.  08:33:56
*  Author:       Vlasic Leon
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

class Trokut
{
private:
	double a, b, c;

public:
	void Ucitaj() { cin >> a >> b >> c; };
	bool Provjeri() { if ((a + b > c) && (b + c > a) && (c + a > b))  return true; };
	double Opseg() { return a + b + c; }

	double Povrsina()
	{
		double s, pov;
		s = (a + b + c) / 2;
		pov = sqrt(s*(s - a)*(s - b)*(s - c));
		return pov;
	}
};

int main()
{
	Trokut T;
	T.Ucitaj();
	if (T.Provjeri() == true)
	{
		cout << "\nOpseg trokuta: " << T.Opseg() << "\nPovrsina trokuta: " << T.Povrsina() << "\n\n";
	}

	else 
	{
		cout << "To nemoze biti trokut! Ponovi upit\n\n";
		exit(0);
	}
	

	

	system("pause");
	return 0;
}
