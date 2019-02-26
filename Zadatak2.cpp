// ConsoleApplication88.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <algorithm>

using namespace std;

class trokut
{
private:
	int a, b, c;
public:
	void vratia(int a1) { a = a1; };
	void vratib(int b1) { b = b1; };
	void vratic(int c1) { c = c1; };
	bool provjera() {
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			return true;
		}
		else
		{
			return 0;
		}
	};
	double opseg() {
		return a + b + c;
	}
	double povrsina()
	{
		int s = (a + b + c) / 2;
		int pov = (s*(s - a)*(s - b)*(s - c));
		return pov;
	}
	;
};
	int main()
	{
		trokut tro;
		int a, b, c;
		cin >> a >> b >> c;
		tro.vratia(a);
		tro.vratib(b);
		tro.vratic(c);

		if (tro.provjera() == true)
		{

			cout <<"Povrsina tog trokuta je "<< tro.povrsina() << endl;
			cout <<"Opseg tog trokuta je " <<tro.opseg() << endl;
		}
		else
		{
			cout << "Taj trokut nije moguč." << endl;
		}



		return 0;
	}

