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


int main()
{
	radnik r1, r2, r3, r4;
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



	int ukup1, ukup2, ukup3, ukup4;
	ukup1 = r1.primanja1 + r1.primanja2 + r1.primanja3;
	ukup2 = r2.primanja1 + r2.primanja2 + r2.primanja3;
	ukup3 = r3.primanja1 + r3.primanja2 + r3.primanja3;
	
	if (ukup1 > ukup2)
	{
		if (ukup1 > ukup3)
		{
		
				cout << r1.ime << " ima najveca primanja od " << ukup1;


		}
	}
	if (ukup2 > ukup1)
	{
		if (ukup2 > ukup3)
		{
			
				cout << r2.ime << " ima najveca primanja od " << ukup2;


		}
	}
	if (ukup3 > ukup2)
	{
		if (ukup3 > ukup1)
		{
			
				cout << r3.ime << " ima najveca primanja od " << ukup3;

			

		}
	}
	system("pause");
	return 0;
}