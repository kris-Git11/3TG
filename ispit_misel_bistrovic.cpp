// ConsoleApplication73.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"
#include "algorithm"
#include "string"
#include "fstream"
using namespace std;
int placa1[10][10][10];
string ime1[10];
string prezime1[10];
class radnici {

private:
	string ime[10];
	string prezime[10];
	int placa[10][10][10];

public:

	void getp();
	void citaj();
	radnici();
};

radnici::radnici() {
	ime1[4] = "Ivo";
	prezime1[4] = "Benko";
	placa1[4][0][0] = 5400;
	placa1[0][4][0] = 4500;
	placa1[0][0][4] = 5000;
}

void radnici::getp() {
	placa[10][10][10] = placa1[10][10][10];
	ime[10] = ime1[10];
	prezime[10] = prezime1[10]; 
}

void radnici::citaj() {
	for (int i = 0; i < 3; i++)
	{
		cout << "Upisi ime: "; cin >> ime1[i];
		cout << "Upisi prezime: "; cin >> prezime1[i];
		cout << "Upisi place " << i+1 << "." << " radnika: "; cin >> placa1[i][0][0] >> placa1[0][i][0] >> placa1[0][0][i];
	}
}
void sortiranje(int A[], int N) {
	int i, j, min, zamjeni;
	for (i = 0; i < N; i++) {
		min = i;
		for (j = i + 1; j < N; j++) {
			if (A[j] < A[min]) min = j;
		}
		zamjeni = A[i];
		A[i] = A[min];
		A[min] = zamjeni;
	}
}


int main()
{
	radnici r;
	r.citaj();
	int ukupna_primanja[10];
	int a;
	for (int i = 0; i < 4; i++)
	{
		a = (placa1[i][0][0] + placa1[0][i][0] + placa1[0][0][i]);
		ukupna_primanja[i] = a;
		a = 0; 
	}
	sortiranje(ukupna_primanja, 4);
	for (int i = 0; i < 4; i++)
	{
		if (ukupna_primanja[4] == (placa1[i][0][0] + placa1[0][i][0] + placa1[0][0][i]))
		{
			cout << "Radnik s najvecom placom je " << ime1[i] << " " << prezime1[i];
		}
	}
    return 0;
}

