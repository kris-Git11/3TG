#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <algorithm>

using namespace std;

struct drzava
{

	string drz;
	int pov;
	int brojst;
	char najvrh[50];
	int visvrh;

};



int main()
{
	int i = 0;
	drzava d1;
	for (int a = 0; a < 5; a = a + 1)
	{



		cout << "Unesi ime drzave" << endl;
		cin >> d1.drz;
		cout << "Unesi povrsinu drzave" << endl;
		cin >> d1.pov;
		cout << "Unesi broj stanovnika drzave" << endl;
		cin >> d1.brojst;
		cout << "Unesi naziv najvisi vrh" << endl;
		cin >> d1.najvrh;
		cout << "Unesi visinu najviseg vrha" << endl;
		cin >> a1.visvrha;


		fstream myfile;
		myfile.open("C:\\Users\\android\\Desktop\\test.txt", ios::app);
		myfile << " " << d1.drz << " " << d1.pov << " " << d1.brojst << " " << d1.najvrh << " " << d1.visvrh << endl;

		myfile.close();


	}

	ifstream myfile;
	myfile.open("C:\\Users\\android\\Desktop\\test.txt", ios::app);

	string vrhmax;
	int br = 0;
	string ivrh1;
	string ivrh2;
	string ivrh3;
	string idrz1;
	string idrz2;
	string idrz3;
	int vrh1 = 0;
	int vrh2 = 0;
	int vrh3 = 0;

	while (!myfile.eof())
	{


		myfile >> d1.drz >> d1.pov >> d1.brojst >> d1.najvrh >> d1.visvrh;




		if (br < d1.brojst)
		{
			br = d1.brojst;
			vrhmax = d1.drz;
		}

		if (vrh1 < d1.visvrh)
		{
			vrh1 = d1.visvrh;
			idrz1 = d1.drz;
			ivrh1 = d1.najvrh;
		}

		if ((vrh2 < d1.visvrh) && (vrh2<vrh1))
		{
			vrh2 = d1.visvrh;
			idrz2 = d1.drz;
			ivrh2 = d1.najvrh;
		}
		if ((vrh3 < d1.visvrh) && (vrh3<vrh2))
		{
			vrh3 = d1.visvrh;
			idrz3 = d1.drz;
			ivrh3 = d1.najvrh;
		}



	}


	cout << "Najvise stanovnika ima " << vrhmax << " koja ima " << d1.brojst << " stanovnika." << endl;
	cout << "Najvisi vrh je " << ivrh1 << " visok je " << vrh1 << " u drzavi " << idrz1 << endl;
	cout << "Drugi vrh je " << ivrh2 << " visok je " << vrh2 << " u drzavi " << idrz2 << endl;
	cout << "Treci vrh je " << ivrh3 << " visok je " << vrh3 << " u drzavi " << idrz3 << endl;




	system("pause");
	return 0;
}