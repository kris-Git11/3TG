// zadatak_oop.cpp : Defines the entry point for the console application.
//

/* fiat 5, 6, 6.8 - b
   renault 4, 5, 5.5 - d
   peugeot 6, 6.5, 7 - d
   opel 7, 4.5, 6.4 - b */

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Auto
{
private:
	string motor;
public:
	int npug (int a, int b, int c)
	{ 
		return min(a, min(b, c));
	}
	string vmotora(char vmotor, string motor = "")
	{
		if (vmotor == 'd')
		{
			return motor = "dizel";
		}
		else
		{
			return motor = "benzin";
		}
	}
};

int main()
{
	Auto a;
	double pug[1000], pig[1000], pmv[1000];
	char vmotor[1000];
	string nauta[1000];
	for (int i = 0; i < 3; i++)
	{
		cout << "Za koji auto zelite upisati podatke: ";
		cin >> nauta[i];
		cout << endl;
		cout << "Koliko auto trosi u gradskoj voznji: ";
		cin >> pug[i];
		cout << endl;
		cout << "Koliko auto trosi u izvan gradskoj voznji: ";
		cin >> pig[i];
		cout << endl;
		cout << "Koliko auto trosi u mjesovitoj voznji: ";
		cin >> pmv[i];
		cout << endl;
		cout << "Koju vrstu motora ima auto: ";
		cin >> vmotor[i];
		cout << endl;
	}
	a.npug(pug[0], pug[1], pug[2]);
	int m = min(pug[0], min(pug[1], pug[2]));
	if (m == pug[0])
	{
		cout << "Auto s najmanjom prosjecnom potrosnjom unutar grada je: " << nauta[0] << endl;
	}
	else if (m == pug[1])
	{
		cout << "Auto s najmanjom prosjecnom potrosnjom unutar grada je: " << nauta[1] << endl;
	}
	else if (m == pug[2])
	{
		cout << "Auto s najmanjom prosjecnom potrosnjom unutar grada je: " << nauta[2] << endl;
	}


	cout << "Za koji auto zelite upisati potrosnju: ";
	cin >> nauta[3];
	cout << endl;
	cout << "Koliko auto trosi u gradskoj voznji: ";
	cin >> pug[3];
	cout << endl;
	cout << "Koliko auto trosi u izvan gradskoj voznji: ";
	cin >> pig[3];
	cout << endl;
	cout << "Koliko auto trosi u mjesovitoj voznji: ";
	cin >> pmv[3];
	cout << endl;
	cout << "Koju vrstu motora ima auto: ";
	cin >> vmotor[3];
	cout << endl;

	
	if (pig[0] < 5)
	{
		cout << "Auto s najmanjom prosjecnom potrosnjom unutar grada je: " << nauta[0] << endl;
		cout << "Vrsta motora: " << a.vmotora(vmotor[0]) << endl;
	}
	else if (pig[1] < 5)
	{
		cout << "Auto s najmanjom prosjecnom potrosnjom unutar grada je: " << nauta[1] << endl;
		cout << "Vrsta motora: " << a.vmotora(vmotor[1]) << endl;
	}
	else if (pig[2] < 5)
	{
		cout << "Auto s najmanjom prosjecnom potrosnjom unutar grada je: " << nauta[2] << endl;
		cout << "Vrsta motora: " << a.vmotora(vmotor[2]) << endl;
	}
	else if (pig[3] < 5)
	{
		cout << "Auto s najmanjom prosjecnom potrosnjom unutar grada je: " << nauta[3] << endl;
		cout << "Vrsta motora: " << a.vmotora(vmotor[3]) << endl;
	}

	int godina[1000], mjesec[1000], dan[1000];
	for (int i = 0; i < 1000; i++)
	{
		cout << "Za koji auto zelite upisati podatke: ";
		cin >> nauta[i];
		cout << endl;
		cout << "Koliko auto trosi u gradskoj voznji: ";
		cin >> pug[i];
		cout << endl;
		cout << "Koliko auto trosi u izvan gradskoj voznji: ";
		cin >> pig[i];
		cout << endl;
		cout << "Koliko auto trosi u mjesovitoj voznji: ";
		cin >> pmv[i];
		cout << endl;
		cout << "Koju vrstu motora ima auto: ";
		cin >> vmotor[i];
		cout << endl;
		// pocel sam raditi za datume, ali nisam stigao
		cout << "Koje godine je prizveden: ";
		cin >> godina[i];
		cout << endl;
		cout << "Kojeg mjeseca je prizveden: ";
		cin >> mjesec[i];
		cout << endl;
		cout << "Kojeg dana je prizveden: ";
		cin >> dan[i];
		cout << endl;
	}
	
	system("pause");
    return 0;
}

