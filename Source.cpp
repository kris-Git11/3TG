#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

//Marko Novak 3.TG

struct Drzava
{
	string naziv_drzave, naziv_najviseg_vrha;
	long float povrsina_drzave;
	long int broj_stanovnika_drzave;
		int visina_najviseg_vrha_m;

	bool operator()(const Drzava& lhs, const Drzava& rhs) const { return lhs.broj_stanovnika_drzave > rhs.broj_stanovnika_drzave; }
};


int main()
{
	const int brDrzava = 5;
	string filePath = "Drzave.txt";
	
	Drzava drzave[brDrzava];

	for (int i = 0; i < brDrzava; i++)
	{
		cout << "Naziv drzave: ";
		cin >> drzave[i].naziv_drzave;
		cout << "Povrsina drzave: ";
		cin >> drzave[i].povrsina_drzave;
		cout << "Broj stanovnika drzave: ";
		cin >> drzave[i].broj_stanovnika_drzave;
		cout << "Naziv najviseg vrha: ";
		cin >> drzave[i].naziv_najviseg_vrha;
		cout << "Visina najviseg vrha (u m): ";
		cin >> drzave[i].visina_najviseg_vrha_m;
	}

	
	ofstream myfile;
	myfile.open(filePath);

	for (int i = 0; i < brDrzava; i++)
	{
		myfile
			<< "Naziv drzave: " << drzave[i].naziv_drzave
			<< "\nPovrsina drzave: " << drzave[i].povrsina_drzave
			<< "\nBroj stanovnika drzave: " <<  drzave[i].broj_stanovnika_drzave
			<< "\nNaziv najviseg vrha: " <<  drzave[i].naziv_najviseg_vrha
			<< "\nVisina najvišeg vrha (u m): " << drzave[i].visina_najviseg_vrha_m
			<< " m\n";
	}

	myfile.close();

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Drzava opetDrzave[brDrzava];
	string temp;

	ifstream fdrzave;
	fdrzave.open(filePath);

	for (int i = 0; i < brDrzava; i++)
	{
		fdrzave
			>> temp >> temp >> opetDrzave[i].naziv_drzave
			>> temp >> temp >> opetDrzave[i].povrsina_drzave
			>> temp >> temp >> temp >> opetDrzave[i].broj_stanovnika_drzave
			>> temp >> temp >> temp >> opetDrzave[i].naziv_najviseg_vrha
			>> temp >> temp >> temp >> temp >> temp >> opetDrzave[i].visina_najviseg_vrha_m
			>> temp;
	}

	fdrzave.close();

	sort(opetDrzave, opetDrzave + brDrzava, opetDrzave[0]);

	//sort(opetDrzave, opetDrzave + brDrzava, [](Drzava a, Drzava b) {return (a.visina_najviseg_vrha_m > b.visina_najviseg_vrha_m); });

	cout << "\nDrzava s najvise stanovnika: " << opetDrzave[0].naziv_drzave << "\nBroj stanovnika: " << opetDrzave[0].broj_stanovnika_drzave << endl << endl;


	vector<Drzava> vecDrzave;

	for (int i = 0; i < brDrzava; i++)
	{
		vecDrzave.push_back(opetDrzave[i]);
	}

	sort(vecDrzave.begin(), vecDrzave.end(), [](Drzava a, Drzava b) {return (a.visina_najviseg_vrha_m > b.visina_najviseg_vrha_m); });

	cout << "Drzave s najvisim vrhovima:\n";

	for (int i = 0; i < 3; i++)
	{
		cout
			<< "Ime drzave: " << vecDrzave[i].naziv_drzave << endl
			<< "Naziv vrha: " << vecDrzave[i].naziv_najviseg_vrha << endl
			<< "Visina vrha: " << vecDrzave[i].visina_najviseg_vrha_m << " m" << endl << endl;
	}


	system("pause");
	return 0;
}


/*
Hrvatska
56.594
4154000
Dinara
1831
Njemacka
357.386
82790000
Zugspitze
2962
Engleska
130.395
54790000
Scafell_Pike
978
Rusija
17100000
144500000
Elbrus
5642
Svicarska
41.285
8420000
Dufour
4633
*/