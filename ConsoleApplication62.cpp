// ConsoleApplication62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

struct drzava {
	char ime[20];
	int broj_stan;
	int pov;
	char vrh[20];
	int visvrha;

};

struct filedrdrzave
{
	char ime[20];
	char vrh[20];
	int pov;
	int visvrha;
	int broj_stan;
};
int main()
{
	drzava drz[5];
	int i, max;

	for (i = 0; i <= 4; i++)
	{
		cout << "\n Unesi ime drzave ";
		cin >> drz[i].ime;

		cout << "\n unesi broj stanovnika";
		cin >> drz[i].broj_stan;

		cout << "\n Unesi povrsinu";
		cin >> drz[i].pov;

		cout << "\n Unesi  vrh";
		cin >> drz[i].vrh;

		cout << "\n Unesi najvisi vrh";
		cin >> drz[i].visvrha;
	}
	ofstream myfile;
	myfile.open("c:\\users\\android\\desktop\\varga.txt");
	for (i = 0; i <= 4; i++)
	{
		myfile << " Ime drzave" << drz[i].ime << endl;
		myfile << " Broj stanovnika" << drz[i].broj_stan << endl;
		myfile << " Povrsina drzave " << drz[i].pov << endl;
		myfile << " Ime najviseg vrha " << drz[i].vrh << endl;
		myfile << " visina najviseg vrha " << drz[i].visvrha << endl;
		myfile << endl;
		myfile << endl;


		myfile.close();

	}
	myfile filedrdrzave d;
	ifstream filedr;
	filedr.open("c:\\users\\android\\desktop\\varga.txt");

	for (int i = 0; i <= 4; i++)
	{
		myfile << d[i].ime << endl;
		myfile << d[i].broj_stan << endl;
		myfile << d[i].pov << endl;
		myfile << d[i].vrh << endl;
		myfile << d[i].visvrha << endl;
		myfile << endl;
		myfile << endl;
	}
	filedr.close();

	int maxbrojstan;
	maxbrojstan = max(d.broj_stan[0], max(d.broj_stan[1], max(d.brojstan[2], max(d.brojstan[3], d.brojstan[4]))));
	if (maxbrojstan == d.broj_stan[0])
	{
		cout << d.ime[0] << ", " << d.broj_stan[0] << endl;
		cout << endl;
	}
	else if (maxbrojstan == d.broj_stan[1])
	{
		cout << d.ime[1] << ", " << d.broj_stan[1] << endl;
		cout << endl;
	}
	else if (broj_stan == d.broj_stan[2])
	{
		cout << d.ime[2] << ", " << d.broj_stan[2] << endl;
		cout << endl;
	}
	else if (maxbrojstan == d.broj_stan[3])
	{
		cout << d.ime[3] << ", " << d.broj_stan[3] << endl;
		cout << endl;
	}
	else if (broj_stan == d.broj_stan[4])
	{
		cout << d.ime[4] << ", " << d.broj_stan[4] << endl;
		cout << endl;
	}


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (d.visvrha[j] < d.visvrha[j + 1])
			{
				swap(d.visvrha[j], d.visvrha[j + 1]);
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << d.visvrha[i] << endl;
	}
	return 0;


}