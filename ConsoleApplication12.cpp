// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <math.h>


using namespace std;

int main()
{
	string line;
	int tocka = 0, zarez = 0, dvotocka = 0, usklicnik = 0, upitnik = 0;

	ifstream file("C:\\Users\\ucenik\\Desktop\\t.txt");
	while (!file.eof())
	{
		getline(file, line);
		for (int i = 0; i < line.length(); i++)
		{
			if (line.at(i) == '.') { tocka++; }
			else if (line.at(i) == ',') { zarez++; }
			else if (line.at(i) == ':') { dvotocka++; }
			else if (line.at(i) == '!') { usklicnik++; }
			else if (line.at(i) == '?') { upitnik++; }
		}
	}
	file.close();

	cout << tocka << endl;
	cout << zarez << endl;
	cout << dvotocka << endl;
	cout << usklicnik << endl;
	cout << upitnik << endl;

	int a = tocka;
	int b = zarez;
	int c = dvotocka;
	int d = usklicnik;
	int e = upitnik;

	for (int i = 0; i < 6; i++)
	{
		if (a >= b)
		{
			if (a >= c)
			{
				if (a >= d)
				{
					if (a >= e)
					{
						while (a > 0)
						{
							cout << ".";
							a--;
						}
						cout << endl;

					}
					else { goto next; }
				}
				else { goto next; }
			}
			else { goto next; }
		}
		else { goto next; }
	next:
		if (b >= a)
		{
			if (b >= c)
			{
				if (b >= d)
				{
					if (b >= e)
					{
						while (b > 0)
						{
							cout << ",";
							b--;
						}
						cout << endl;
					}
					else { goto next1; }
				}
				else { goto next1; }
			}
			else { goto next1; }
		}
		else { goto next1; }
	next1:
		if (c >= a)
		{
			if (c >= b)
			{
				if (c >= d)
				{
					if (c >= e)
					{
						while (c > 0)
						{
							cout << ":";
							c--;
						}
						cout << endl;
					}
					else { goto next2; }
				}
				else { goto next2; }
			}
			else { goto next2; }
		}
		else { goto next2; }
	next2:
		if (d >= a)
		{
			if (d >= b)
			{
				if (d >= c)
				{
					if (d >= e)
					{
						while (d > 0)
						{
							cout << "!";
							d--;
						}
						cout << endl;
					}
					else { goto next3; }
				}
				else { goto next3; }
			}
			else { goto next3; }
		}
		else { goto next3; }
	next3:
		if (e >= a)
		{
			if (e >= b)
			{
				if (e >= c)
				{
					if (e >= d)
					{
						while (e > 0)
						{
							cout << "?";
							e--;
						}
						cout << endl;
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}
