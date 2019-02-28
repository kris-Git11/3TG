#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class Ucenik
{
private:
	string ime, prezime;
	int ocjene[5];

public:
	Ucenik();
	Ucenik(int);
	void set();
	bool ocjene_pozitivne();
	float prosjek();

	string getime() { return ime; }
	string getprezime() { return prezime; }
};

Ucenik::Ucenik() {}

Ucenik::Ucenik(int a)
{
	if (a == 1)
	{
		ime = "James";
		prezime = "Bond";
		for (int i = 0; i < 5; i++) { ocjene[i] = 1; }
	}
	else if (a==2)
	{
		ime = "Hans";
		prezime = "Muller";
		for (int i = 0; i < 5; i++) { ocjene[i] = 2; }
	}
}


void Ucenik::set()
{
	cin >> ime >> prezime;

	for (int i = 0; i < 5; i++)
	{
		cin >> ocjene[i];
	}
}

bool Ucenik::ocjene_pozitivne()
{
	for (int i = 0; i < 5; i++)
	{
		if (ocjene[i] == 1) return false;
	}	

	return true;
}

float Ucenik::prosjek()
{
	float zbroj=0;
	for (int i=0; i < 5; i++)
	{
		zbroj += ocjene[i];
	}
	//.f?
	return zbroj / 5;
}

int main()
{
	vector<Ucenik> ucenik(5);

	Ucenik temp;

	for (int i = 0; i < 3; i++)
	{
		temp.set();
		ucenik[i]=temp;
	}

	ucenik[3] = Ucenik(1);
	ucenik[4] = Ucenik(2);

	system("cls");

	cout << "IME\tPREZIME\tPROSJEK" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << ucenik[i].getime() << "\t" << ucenik[i].getprezime() << "\t";

		if (ucenik[i].ocjene_pozitivne())  cout << ucenik[i].prosjek() << endl;
		else cout << "N/A" << endl;
	}
	
	sort(ucenik.begin(), ucenik.end(), [](Ucenik a, Ucenik b) {return (a.prosjek() > b.prosjek()); });

	//Gleda dal je vise ucenika s istim najboljim prosjekom
	if (ucenik[0].ocjene_pozitivne())
	{
		int found = 0;

		for (int i = 0; i < 4; i++)
		{
			if (ucenik[0].prosjek() == ucenik[i + 1].prosjek()) found++;
		}

		if (!found) cout << "\nNajbolji ucenik: " << ucenik[0].getime() << " " << ucenik[0].getprezime() << " " << ucenik[0].prosjek() << endl;
		else
		{
			cout << "\nNajbolji ucenici su:\n";

			for (int i = 0; i <= found; i++)
			{
				cout << ucenik[i].getime() << " " << ucenik[i].getprezime() << " " << ucenik[i].prosjek() << endl;
			}
		}
	}

	else cout << "\nSVI NA POPRAVNI!" << endl;

	system("pause");
	return 0;
}

/*
Stef Stefic 5 5 5 5 4
Marko Marulic 1 2 2 5 5
Marko Novak 5 5 5 5 4
*/