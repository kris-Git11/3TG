#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Auto
{
public:

	string naziv, vrsta_motora;
	double pot_grad, pot_izv_grad, pot_mjest_voz;
	string datum, sdan, smjesec, sgodina;
	int dan, mjesec, godina;


	void set()
	{
		cout << "naziv_auta, vrsta_motora, potrosnja u gradu, potrosnja izvan grada, potrosnja u mjestu, datum dd.mm.gggg\n";
		cin >> naziv;
		cin >> vrsta_motora >> pot_grad >> pot_izv_grad >> pot_mjest_voz;
		cin >> datum;
		sdan = datum.substr(0, 2);
		smjesec = datum.substr(3, 2);
		sgodina = datum.substr(6, 4);

		if (sdan[0] == '0') sdan = sdan.substr(1, 1);
		if (smjesec[0] == '0') smjesec = smjesec.substr(1, 1);

		dan = stoi(sdan);
		mjesec = stoi(smjesec);
		godina = stoi(sgodina);
	}

	Auto() {};

	Auto(int a)
	{
		naziv = "Opel Astra";
		vrsta_motora = "benzinski";
		pot_grad = 7;
		pot_izv_grad = 4.5;
		pot_mjest_voz = 6.4;
		dan = 1;
		mjesec = 2;
		godina = 2016;
	}


	double operator+(double b)
	{
		double at;
		at = pot_mjest_voz * b;
		return at;
	}

};

int main()
{
	int n;

	cout << "broj automobila: ";
	cin >> n;
	
	vector<Auto> a(999);
	Auto temp;

	for (int i = 0; i < n; i++)
	{
		temp.set();
		a[i] = temp;
	}

	a[n] = Auto(1);

	cout << endl;

	for (int i = 0; i < n+1; i++)
	{
		if (a[i].pot_izv_grad < 5) cout << a[i].naziv << " trosi manje od 5 l/100km na izvangradskim voznjama\n";
	}

	for (int i = 0; i < n+1; i++)
	{
		a[i] = a[i] + 0.08;
	}

	for (int i = 0; i < n+1; i++)
	{
		if (a[i].pot_mjest_voz - a[i].pot_grad < 25) cout << a[i].naziv << " ima jos uvijek manju potrosnju"<< endl;
	}

	Auto max = a[0];

	for (int i = 0; i < n + 1; i++)
	{
		if (max.godina < a[i].godina) { max = a[i]; }
		else if (max.godina == a[i].godina)
		{
			if (max.mjesec < a[i].mjesec) { max = a[i]; }
			else if (max.mjesec == a[i].mjesec)
			{
				if (max.dan < a[i].dan) { max = a[i]; }
			}
		}
	}

	cout << "najnoviji auto je " << max.naziv << endl;

	system("pause");
	return 0;
}
