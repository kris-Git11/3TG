// ConsoleApplication64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class trokut
{
private:
	float a, b, c;
public:
	void ucitaj()
	{
		 cin >> a;
		 cin >> b;
		 cin >> c;
	}
	int provjera()
	{
		if (a + b > c)
		{
			if (a + c > b)
			{
				if (b + c > a)
				{
					return true;
				}
			}
		}
		return false;
	}
	float opseg() 
	{
		return a + b + c; 
	}
	float povrsina()
	{ 
		float s = (a + b + c) / 2;
		return sqrt(s * (s - a)*(s - b)*(s - c));
	}
};

int main()
{
	trokut t;
	t.ucitaj();
	if (t.provjera() == true)
	{
		cout << "Opseg trokuta: " << t.opseg() << endl;
		cout << "Povrsina trokuta: " << t.povrsina() << endl;
	}
	else
	{
		cout << "Trokut nije moguc" << endl;
	}
	

	system("pause");
    return 0;
}

