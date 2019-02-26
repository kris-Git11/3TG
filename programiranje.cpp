// ConsoleApplication83.cpp : Defines the entry point for the console application.
//Čitanje iz datoteke, klase, (prolaženje redova (!myfile.eof))

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <algorithm>

using namespace std;

struct Drzava
{

	string ime;
	int povrsina;
	int broj_stanovnika;
	char naziv_najviseg_vrha[50];
	int visina_najviseg_vrha;

};



int main()
{
	int i = 0;
	Drzava a1;
	while (i < 5)
	{



		cout << "Unesi Ime drzave" << endl;
		cin >> a1.ime;
		cout << "Unesi povrsinu drzave" << endl;
		cin >> a1.povrsina;
		cout << "Unesi broj stanovnika drzave" << endl;
		cin >> a1.broj_stanovnika;
		cout << "Unesi naziv najviseg vrha drzave drzave" << endl;
		cin >> a1.naziv_najviseg_vrha;
		cout << "Unesi visinu najviseg vrha drzave" << endl;
		cin >> a1.visina_najviseg_vrha;


		fstream myfile;
		myfile.open("C:\\Users\\android\\Desktop\\Drzave.txt", ios::app);
		myfile << " " << a1.ime << " " << a1.povrsina << " " << a1.broj_stanovnika << " " << a1.naziv_najviseg_vrha << " " << a1.visina_najviseg_vrha << endl;

		myfile.close();
		i = i + 1;

	}

	ifstream myfile;
	myfile.open("C:\\Users\\android\\Desktop\\Drzave.txt", ios::app);

	string ime_najvise;
	int brojstan = 0;
	string imevrh1;
	string imevrh2;
	string imevrh3;
	string imevrh4;
	string imevrh5;
	string imedrz1;
	string imedrz2;
	string imedrz3;
	string imedrz4;
	string imedrz5;
	int vrh1 = 0;
	int vrh2 = 0;
	int vrh3 = 0;
	int vrh4 = 0;
	int vrh5 = 0;

	while (!myfile.eof())
	{


		myfile >> a1.ime >> a1.povrsina >> a1.broj_stanovnika >> a1.naziv_najviseg_vrha >> a1.visina_najviseg_vrha;




		if (brojstan < a1.broj_stanovnika)
		{
			brojstan = a1.broj_stanovnika;
			ime_najvise = a1.ime;
		}

		if (vrh1 <1)
		{
			vrh1 = a1.visina_najviseg_vrha;
			imedrz1 = a1.ime;
			imevrh1 = a1.naziv_najviseg_vrha;
		}
		else
		{
			if (vrh2 <1)
			{
				vrh2 = a1.visina_najviseg_vrha;
				imedrz2 = a1.ime;
				imevrh2 = a1.naziv_najviseg_vrha;
			}
			else
			{
				if (vrh3 <1)
				{
					vrh3 = a1.visina_najviseg_vrha;
					imedrz3 = a1.ime;
					imevrh3 = a1.naziv_najviseg_vrha;
				}
				else
				{
					if (vrh4 <1)
					{
						vrh4 = a1.visina_najviseg_vrha;
						imedrz4 = a1.ime;
						imevrh4 = a1.naziv_najviseg_vrha;
					}
					else
					{
						vrh5 = a1.visina_najviseg_vrha;
						imedrz5 = a1.ime;
						imevrh5 = a1.naziv_najviseg_vrha;


					}

				}
			}
		}




	}


	cout << "Najvise stanovnika ima " << ime_najvise << " ima " << brojstan << " stanovnika." << endl;
	if ((vrh1>vrh2) && (vrh1>vrh3) && (vrh1>vrh4) && (vrh1>vrh5))
	{
		cout << "Najvisi vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;

		if ((vrh2>vrh3) && (vrh2>vrh4) && (vrh2>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;

			if ((vrh3>vrh4) && (vrh3>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}

			if ((vrh4>vrh3) && (vrh4>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh5>vrh3) && (vrh5>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh3>vrh2) && (vrh3>vrh4) && (vrh3>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;

			if ((vrh2>vrh4) && (vrh2>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh4>vrh2) && (vrh4>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh5>vrh2) && (vrh5>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh4>vrh3) && (vrh4>vrh2) && (vrh4>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;

			if ((vrh2>vrh3) && (vrh2>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh3>vrh2) && (vrh3>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}
			if ((vrh5>vrh2) && (vrh5>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}


		}

		if ((vrh5>vrh3) && (vrh5>vrh4) && (vrh5>vrh2))
		{
			cout << "Drugi najvisi vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;

			if ((vrh2>vrh4) && (vrh2>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh4>vrh2) && (vrh4>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh3>vrh2) && (vrh3>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}


		}

	}
	if ((vrh2>vrh1) && (vrh2>vrh3) && (vrh2>vrh4) && (vrh2>vrh5))
	{
		cout << "Najvisi vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;





		if ((vrh1>vrh3) && (vrh1>vrh4) && (vrh1>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;

			if ((vrh3>vrh4) && (vrh3>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}

			if ((vrh4>vrh3) && (vrh4>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh5>vrh3) && (vrh5>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh3>vrh1) && (vrh3>vrh4) && (vrh3>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;

			if ((vrh1>vrh4) && (vrh1>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}

			if ((vrh4>vrh1) && (vrh4>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh5>vrh1) && (vrh5>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh4>vrh3) && (vrh4>vrh1) && (vrh4>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;

			if ((vrh1>vrh3) && (vrh1>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}

			if ((vrh3>vrh1) && (vrh3>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}
			if ((vrh5>vrh1) && (vrh5>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}


		}

		if ((vrh5>vrh3) && (vrh5>vrh4) && (vrh5>vrh1))
		{
			cout << "Drugi najvisi vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;

			if ((vrh1>vrh4) && (vrh1>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}

			if ((vrh4>vrh1) && (vrh4>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh3>vrh1) && (vrh3>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}


		}





	}
	if ((vrh3>vrh2) && (vrh3>vrh1) && (vrh3>vrh4) && (vrh3>vrh5))
	{
		cout << "Najvisi vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;




		if ((vrh2>vrh1) && (vrh2>vrh4) && (vrh2>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;

			if ((vrh1>vrh4) && (vrh1>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}

			if ((vrh4>vrh1) && (vrh4>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh5>vrh1) && (vrh5>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh1>vrh2) && (vrh1>vrh4) && (vrh1>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;

			if ((vrh2>vrh4) && (vrh2>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh4>vrh2) && (vrh4>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh5>vrh2) && (vrh5>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh4>vrh1) && (vrh4>vrh2) && (vrh4>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;

			if ((vrh2>vrh1) && (vrh2>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh1>vrh2) && (vrh1>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}
			if ((vrh5>vrh2) && (vrh5>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}


		}

		if ((vrh5>vrh1) && (vrh5>vrh4) && (vrh5>vrh2))
		{
			cout << "Drugi najvisi vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;

			if ((vrh2>vrh4) && (vrh2>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh4>vrh2) && (vrh4>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh1>vrh2) && (vrh1>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}


		}




	}
	if ((vrh4>vrh2) && (vrh4>vrh1) && (vrh4>vrh3) && (vrh4>vrh5))
	{
		cout << "Najvisi vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;




		if ((vrh2>vrh3) && (vrh2>vrh1) && (vrh2>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;

			if ((vrh3>vrh1) && (vrh3>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}

			if ((vrh1>vrh3) && (vrh1>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh5>vrh3) && (vrh5>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh3>vrh2) && (vrh3>vrh1) && (vrh3>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;

			if ((vrh2>vrh1) && (vrh2>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh1>vrh2) && (vrh1>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}
			if ((vrh5>vrh2) && (vrh5>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh1>vrh3) && (vrh1>vrh2) && (vrh1>vrh5))
		{
			cout << "Drugi najvisi vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;

			if ((vrh2>vrh3) && (vrh2>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh3>vrh2) && (vrh3>vrh5))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}
			if ((vrh5>vrh2) && (vrh5>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}


		}

		if ((vrh5>vrh3) && (vrh5>vrh1) && (vrh5>vrh2))
		{
			cout << "Drugi najvisi vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;

			if ((vrh2>vrh1) && (vrh2>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh1>vrh2) && (vrh1>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}
			if ((vrh3>vrh2) && (vrh3>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}


		}



	}
	if ((vrh5>vrh2) && (vrh5>vrh3) && (vrh5>vrh4) && (vrh5>vrh1))
	{
		cout << "Najvisi vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;






		if ((vrh2>vrh3) && (vrh2>vrh4) && (vrh2>vrh1))
		{
			cout << "Drugi najvisi vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;

			if ((vrh3>vrh4) && (vrh3>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}

			if ((vrh4>vrh3) && (vrh4>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh1>vrh3) && (vrh1>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh5 << " koji je visok " << vrh5 << " u drzavi " << imedrz5 << endl;
			}

		}

		if ((vrh3>vrh2) && (vrh3>vrh4) && (vrh3>vrh1))
		{
			cout << "Drugi najvisi vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;

			if ((vrh2>vrh4) && (vrh2>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh4>vrh2) && (vrh4>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh1>vrh2) && (vrh1>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}

		}

		if ((vrh4>vrh3) && (vrh4>vrh2) && (vrh4>vrh1))
		{
			cout << "Drugi najvisi vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;

			if ((vrh2>vrh3) && (vrh2>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh3>vrh2) && (vrh3>vrh1))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}
			if ((vrh1>vrh2) && (vrh1>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;
			}


		}

		if ((vrh1>vrh3) && (vrh1>vrh4) && (vrh1>vrh2))
		{
			cout << "Drugi najvisi vrh je " << imevrh1 << " koji je visok " << vrh1 << " u drzavi " << imedrz1 << endl;

			if ((vrh2>vrh4) && (vrh2>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh2 << " koji je visok " << vrh2 << " u drzavi " << imedrz2 << endl;
			}

			if ((vrh4>vrh2) && (vrh4>vrh3))
			{
				cout << "Treci najveci vrh je " << imevrh4 << " koji je visok " << vrh4 << " u drzavi " << imedrz4 << endl;
			}
			if ((vrh3>vrh2) && (vrh3>vrh4))
			{
				cout << "Treci najveci vrh je " << imevrh3 << " koji je visok " << vrh3 << " u drzavi " << imedrz3 << endl;
			}


		}




	}


	return 0;
}
