#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <algorithm>

using namespace std;

struct radnik
{


	string ime;
	int primanja1;
	int primanja2;
	int primanja3;

};

union poseban
{
	string posime;
	float pri1, pri2, pri3;

} Poseban;


int main()
{
	int i = 0;
	radnik r1, r2, r3, r4;

	Poseban.posime = "Ivo Benko";
	Poseban.pri1 = 5400;
	Poseban.pri2 = 4500;
	Poseban.pri3 = 5000;


	cout << "Unesi ime i prezime prvog radnika" << endl;
	cin >> r1.ime;
	cout << "Unesi primanja radnika za prvi mjesec" << endl;
	cin >> r1.primanja1;
	cout << "Unesi primanja radnika za drugi mjesec" << endl;
	cin >> r1.primanja2;
	cout << "Unesi primanja radnika za treci mjesec" << endl;
	cin >> r1.primanja3;

	cout << "Unesi ime i prezime prvog radnika" << endl;
	cin >> r2.ime;
	cout << "Unesi primanja radnika za prvi mjesec" << endl;
	cin >> r2.primanja1;
	cout << "Unesi primanja radnika za drugi mjesec" << endl;
	cin >> r2.primanja2;
	cout << "Unesi primanja radnika za treci mjesec" << endl;
	cin >> r2.primanja3;

	cout << "Unesi ime i prezime prvog radnika" << endl;
	cin >> r3.ime;
	cout << "Unesi primanja radnika za prvi mjesec" << endl;
	cin >> r3.primanja1;
	cout << "Unesi primanja radnika za drugi mjesec" << endl;
	cin >> r3.primanja2;
	cout << "Unesi primanja radnika za treci mjesec" << endl;
	cin >> r3.primanja3;
	cout << r1.ime << " " << r1.primanja1 << " " << r1.primanja2 << " " << r1.primanja3 << endl;
	cout << r2.ime << " " << r2.primanja1 << " " << r2.primanja2 << " " << r2.primanja3 << endl;
	cout << r3.ime << " " << r3.primanja1 << " " << r3.primanja2 << " " << r3.primanja3 << endl;
	cout << Poseban.posime << " " << Poseban.pri1 << " " << Poseban.pri2 << " " << Poseban.pri3 << endl;


	int ukup1, ukup2, ukup3, ukup4;
	ukup1 = r1.primanja1 + r1.primanja2 + r1.primanja3;
	ukup2 = r2.primanja1 + r2.primanja2 + r2.primanja3;
	ukup3 = r3.primanja1 + r3.primanja2 + r3.primanja3;
	ukup4 = Poseban.pri1 + Poseban.pri2 + Poseban.pri3;

	if (ukup1 > ukup2)
	{
		if (ukup1 > ukup3)
		{
			if (ukup1 > ukup4)
			{
				cout << r1.ime << " ima najveca primanja od " << ukup1;

			}

		}
	}
	if (ukup2 > ukup1)
	{
		if (ukup2 > ukup3)
		{
			if (ukup2 > ukup4)
			{
				cout << r2.ime << " ima najveca primanja od " << ukup2;

			}

		}
	}
	if (ukup3 > ukup2)
	{
		if (ukup3 > ukup1)
		{
			if (ukup3 > ukup4)
			{
				cout << r3.ime << " ima najveca primanja od " << ukup3;

			}

		}
	}
	if (ukup4 > ukup3)
	{
		if (ukup4 > ukup1)
		{
			if (ukup4 > ukup2)
			{
				cout << r4.ime << " ima najveca primanja od " << ukup4;

			}

		}
	}







	system("pause");
	return 0;
}