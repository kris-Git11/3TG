// Drzave.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

struct drzave
{
	string naziv[5], nnajvrh[5]; // naziv drzave, naziv najviseg vrha
	int povrsina[5], vnajvrh[5]; // povrsina drzave, visina najviseg vrha
	int brstan[5]; // broj stanovnika
};
struct file2drzave
{
	string naziv[5], nnajvrh[5]; // naziv drzave, naziv najviseg vrha
	int povrsina[5], vnajvrh[5]; // povrsina drzave, visina najviseg vrha
	int brstan[5]; // broj stanovnika
};

int main()
{
	drzave d;
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		cout << "Naziv drzave: ";
		cin >> d.naziv[i];
		cout << "Povrsina drzave: ";
		cin >> d.povrsina[i];
		cout << "Broj stanovnika drzave: ";
		cin >> d.brstan[i];
		cout << "Naziv najviseg vrha drzave: ";
		cin >> d.nnajvrh[i];
		cout << "Visina najviseg vrha drzave: ";
		cin >> d.vnajvrh[i];
	}

	ofstream file;
	file.open("C:\\Users\\Lovro\\Desktop\\Drzave.txt");
	for (int i = 0; i < n; i++)
	{
		file << d.naziv[i] << endl;
		file << d.povrsina[i] << endl;
		file << d.brstan[i] << endl;
		file << d.nnajvrh[i] << endl;
		file << d.vnajvrh[i] << endl;
		file << endl;
		file << endl;
	}
	file.close();
	
	file2drzave fd;
	ifstream file2;
	file2.open("C:\\Users\\Lovro\\Desktop\\Drzave.txt");
	for (int i = 0; i < 5; i++)
	{
		file2 >> fd.naziv[i];
		file2 >> fd.povrsina[i];
		file2 >> fd.brstan[i];
		file2 >> fd.nnajvrh[i];
		file2 >> fd.vnajvrh[i];

		cout << fd.naziv[i] << endl;
		cout << fd.povrsina[i] << endl;
		cout << fd.brstan[i] << endl;
		cout << fd.nnajvrh[i] << endl;
		cout << fd.vnajvrh[i] << endl;
		cout << endl;
	}
	file2.close();

	int mbrstan; /* najveci br stan */
	mbrstan = max(fd.brstan[0], max(fd.brstan[1], max(fd.brstan[2], max(fd.brstan[3], fd.brstan[4]))));
	if (mbrstan == fd.brstan[0])
	{
		cout << fd.naziv[0] << ", " << fd.brstan[0] << endl;
		cout << endl;
	}
	else if (mbrstan == fd.brstan[1])
	{
		cout << fd.naziv[1] << ", " << fd.brstan[1] << endl;
		cout << endl;
	}
	else if (mbrstan == fd.brstan[2])
	{
		cout << fd.naziv[2] << ", " << fd.brstan[2] << endl;
		cout << endl;
	}
	else if (mbrstan == fd.brstan[3])
	{
		cout << fd.naziv[3] << ", " << fd.brstan[3] << endl;
		cout << endl;
	}
	else if (mbrstan == fd.brstan[4])
	{
		cout << fd.naziv[4] << ", " << fd.brstan[4] << endl;
		cout << endl;
	}

	//sort
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (fd.vnajvrh[j] < fd.vnajvrh[j + 1])
			{
				swap(fd.vnajvrh[j], fd.vnajvrh[j + 1]);
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << fd.vnajvrh[i] << endl;
	}

	system("pause");
	return 0;
}

