// Matija Znidaric
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <algorithm>

using namespace std;
class Radnikk
{
public:
	int x;
	Radnikk() {};
	Radnikk(int);
	Radnikk operator+ (Radnikk);
	
};
Radnikk::Radnikk(int a)
{
	x = a;
}
Radnikk Radnikk::operator+ (Radnikk plus)
{
	Radnikk plus10;
	plus10.x = x+x/10;
	return plus10;
}
int main()
{
	string ime1, ime2, ime3, pime1, pime2, pime3;
	float placa11, placa12, placa13, placa21, placa22, placa23, placa31, placa32, placa33;
	
	string ime4 == Ivo;
	string pime4 == Benko;
	float placa41 = 4500;
	float placa42 = 5400;
	float placa43 = 5000;

		cout << "Unesi ime radnika" << endl;
		cin >> ime1;
		cout << "Unesi prezime radnika" << endl;
		cin >> pime1;
		cout << "unesi prihode od posljednja tri mjeseca" << endl;
		cin >> placa11 >> placa12 >> placa13;
	
		cout << "Unesi ime radnika" << endl;
		cin >> ime2;
		cout << "Unesi prezime radnika" << endl;
		cin >> pime2;
		cout << "unesi prihode od posljednja tri mjeseca" << endl;
		cin >> placa21 >> placa22 >> placa23;

		cout << "Unesi ime radnika" << endl;
		cin >> ime3;
		cout << "Unesi prezime radnika" << endl;
		cin >> pime3;
		cout << "unesi prihode od posljednja tri mjeseca" << endl;
		cin >> placa31 >> placa32 >> placa33;

		float ukupno1 = placa11 + placa12 + placa13;
		float ukupno2 = placa21 + placa22 + placa23;
		float ukupno3 = placa31 + placa32 + placa33;
		float ukupno4 = placa41 + placa42 + placa43;
	cout << "Radnik " << ime1 << " " << pime1 << " imao je ukupni prihod od " << ukupno1 << " kn."<<endl;
	cout << "Radnik " << ime2 << " " << pime2 << " imao je ukupni prihod od " << ukupno2 << " kn."<<endl;
	cout << "Radnik " << ime3 << " " << pime3 << " imao je ukupni prihod od " << ukupno3 << " kn."<<endl;
	cout << "Radnik " << ime4 << " " << pime4 << " imao je ukupni prihod od " << ukupno4 << " kn."<<endl;
	if (max(ukupno1, max(ukupno2, max(ukupno3, ukupno4))) == ukupno1)
	{
		cout << "Najveca primanja imao je " << ime1 << " " << pime1 << endl;
	}
	if (max(ukupno1, max(ukupno2, max(ukupno3, ukupno4))) == ukupno2)
	{
		cout << "Najveca primanja imao je " << ime2 << " " << pime2 << endl;
	}
	if (max(ukupno1, max(ukupno2, max(ukupno3, ukupno4))) == ukupno3)
	{
		cout << "Najveca primanja imao je " << ime3 << " " << pime3 << endl;
	}
	if (max(ukupno1, max(ukupno2, max(ukupno3, ukupno4))) == ukupno4)
	{
		cout << "Najveca primanja imao je " << ime4 << " " << pime4 << endl;
	}
	float plus101 = placa13 + placa13 / 10;
	float plus102 = placa23 + placa23 / 10;
	float plus103 = placa33 + placa33 / 10;
	float plus104 = placa43 + placa43 / 10;
	cout << ime1 << " " << pime1 << " je ukupno isplaćeno " << placa11 + placa12 + plus101 << endl;
	cout << ime2 << " " << pime2 << " je ukupno isplaćeno " << placa21 + placa22 + plus102 << endl;
	cout << ime3 << " " << pime3 << " je ukupno isplaćeno " << placa31 + placa32 + plus103 << endl;
	cout << ime4 << " " << pime4 << " je ukupno isplaćeno " << placa41 + placa42 + plus104 << endl;
	string starime;
	string starpime;
	string najstarime;
	string najstarpime;
	float najdan=30, najmjesec=12, najgodina=2019;
	float dan, mjesec, godina;
	int n;
	int i = 0;
	cout <<"Koliko radnika zelis unositi?";
	cin >> n;
	while (i < n)
	{
		cout << "Unesi ime radnika ";
		cin >>starime;
		cout << "Unesi prezime radnika ";
		cin >> starpime;
		cout << "Unesi datum rodjenja odvojen razmaknicom Dan Mjesec Godina" << endl;
		cin >> dan >> mjesec >> godina;
		if (godina < najgodina)
		{
			najstarime = starime;
			najstarpime = starpime;
			najdan = dan;
			najmjesec = mjesec;
			najgodina = godina;
		}
		if (godina = najgodina)
		{
			if (najmjesec < mjesec)
			{
				najstarime = starime;
				najstarpime = starpime;
				najdan = dan;
				najmjesec = mjesec;
				najgodina = godina;
			}
			if (najmjesec = mjesec)
			{
				if (dan < najdan)
				{
					najstarime = starime;
					najstarpime = starpime;
					najdan = dan;
					najmjesec = mjesec;
					najgodina = godina;
				}
			}
		}
		i++;
	}
	cout << "Najstariji Radnik je " << najstarime << " " << najstarpime << "Rodjen " << najdan << "." << najmjesec << "." << najgodina << endl;


    return 0;
}


