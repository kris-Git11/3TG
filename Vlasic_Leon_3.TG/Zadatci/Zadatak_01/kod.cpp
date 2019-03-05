////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
*  Project name: Zadatak 1
*  Start time:   19.II.2019.  08:01:21
*  Paused time:  19.II.2019.  08:24:40
*  Resumed time: 22.II.2019.  20:35:13
*  Finished time:22.II.2019.  21:31:12
*  Author:       Vlasic Leon
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//#include "stdafx.h"		// Odabrati ovo za VS 2015
#include "pch.h"		// Odabrati ovo za VS 2017
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

struct Drzava
{
	string naziv_drzave, naziv_naj_vrha;
	int pov_drzave, br_stan, visina_naj_vrha;

};


int main()
{
	fstream MyFile_1("C:\\Users\\Vlašiæ Leon\\Desktop\\Drzava.txt");
	string line;
	Drzava poljeDrzava[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Upisi naziv drzave: ";
		cin >> poljeDrzava[i].naziv_drzave;
		cout << "Upisi povrsinu drzave: ";
		cin >> poljeDrzava[i].pov_drzave;
		cout << "Upisi broj stan. te drzave: ";
		cin >> poljeDrzava[i].br_stan;
		cout << "Upisi naziv najviseg vrha: ";
		cin >> poljeDrzava[i].naziv_naj_vrha;
		cout << "Upisi visinu najviseg vrha: ";
		cin >> poljeDrzava[i].visina_naj_vrha;
	}


	if (MyFile_1.is_open())
	{
		for (int i = 0; i < 5; i++)
		{
			MyFile_1 << poljeDrzava[i].naziv_drzave << " ";
			MyFile_1 << poljeDrzava[i].pov_drzave << " ";
			MyFile_1 << poljeDrzava[i].br_stan << " ";
			MyFile_1 << poljeDrzava[i].naziv_naj_vrha << " ";
			MyFile_1 << poljeDrzava[i].visina_naj_vrha << "\n";
		}


		MyFile_1.close();
	}
	else cout << "Unable to open MyFile_1";


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	fstream MyFile_2("C:\\Users\\Vlašiæ Leon\\Desktop\\Drzava.txt");
	string word;
	int brojac_rijeci = 0;
	int podatci_za_usporedbu[6];
	int podatci_za_usporedbu_2[6];
	int poredak[6];
	int naj_vrh[3] { 0,0,0 };
	string Sve_rijeci[26];

	if (MyFile_2.is_open())
	{
		while (MyFile_2 >> word)
		{
			Sve_rijeci[brojac_rijeci] = word;
			brojac_rijeci++;
		}

		//Br_stan
		podatci_za_usporedbu[0] = stoi(Sve_rijeci[2]);
		podatci_za_usporedbu[1] = stoi(Sve_rijeci[7]);
		podatci_za_usporedbu[2] = stoi(Sve_rijeci[12]);
		podatci_za_usporedbu[3] = stoi(Sve_rijeci[17]);
		podatci_za_usporedbu[4] = stoi(Sve_rijeci[22]);
		
		int naj_stan = 0, koja_drz, koja_drz_2[3];

		for (int i = 0; i < 5; i++)
		{
			if (naj_stan < podatci_za_usporedbu[i])
			{
				naj_stan = podatci_za_usporedbu[i];
				koja_drz = i;
			}
		}

		cout << "\nDrzava s najvise stanovnika: ";
		cout << poljeDrzava[koja_drz].naziv_drzave;
		cout << "\nBroj stanovnika: ";
		cout << poljeDrzava[koja_drz].br_stan << "\n";


		//Visina naj vrha
		podatci_za_usporedbu_2[0] = stoi(Sve_rijeci[4]);
		podatci_za_usporedbu_2[1] = stoi(Sve_rijeci[9]);
		podatci_za_usporedbu_2[2] = stoi(Sve_rijeci[14]);
		podatci_za_usporedbu_2[3] = stoi(Sve_rijeci[19]);
		podatci_za_usporedbu_2[4] = stoi(Sve_rijeci[24]);

		for (int i = 0; i < 5; i++)
		{
			if (naj_vrh[0] < podatci_za_usporedbu_2[i])
			{
				naj_vrh[0] = podatci_za_usporedbu_2[i];
				koja_drz_2[0] = i;
			}
		}

		for (int i = 0; i < 5; i++)
		{
			if (naj_vrh[0] != podatci_za_usporedbu_2[i])
			{
				if (naj_vrh[1] < podatci_za_usporedbu_2[i])
				{
					naj_vrh[1] = podatci_za_usporedbu_2[i];
					koja_drz_2[1] = i;
				}
			}
			
		}

		for (int i = 0; i < 5; i++)
		{
			if (naj_vrh[0] != podatci_za_usporedbu_2[i] && naj_vrh[1] != podatci_za_usporedbu_2[i])
			{
				if (naj_vrh[2] < podatci_za_usporedbu_2[i])
				{
					naj_vrh[2] = podatci_za_usporedbu_2[i];
					koja_drz_2[2] = i;
				}
			}

		}

		for (int i = 0; i < 3; i++)
		{
			cout << "\nNaziv drzave: ";
			cout << poljeDrzava[koja_drz_2[i]].naziv_drzave;
			cout << "\nNaziv vrha: ";
			cout << poljeDrzava[koja_drz_2[i]].naziv_naj_vrha << "\n";
			cout << "Visina vrha: ";
			cout << poljeDrzava[koja_drz_2[i]].visina_naj_vrha << "\n";
		}



		MyFile_2.close();
	}

	else cout << "\nUnable to re-open MyFile_1/2\n";


	system("pause");
	return 0;
}