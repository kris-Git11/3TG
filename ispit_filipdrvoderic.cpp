#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

//Filip Drvoderić//

class Automobil
{
public:
	Automobil();
	Automobil(int);
	~Automobil();


	void setVrsta(string vrsta) 
	{ 
		m_vrsta = vrsta;
	}
	void setModel(string model) 
	{ 
		m_model = model; 
	}
	void setPotrgrd(double potrgrd) 
	{ 
		m_potrgrd = potrgrd; 
	}
	void setPotrizvn(double potrizvn) 
	{ 
		m_potrizvn = potrizvn; 
	}
	void setPotrmjs(double potrmjs) 
	{ 
		m_potrmjs = potrmjs; 
	}

	string getvrsta() 
	{ 
		return m_vrsta; 
	}
	string getmodel() 
	{ 
		return m_model; 
	}
	double getpotrgrd() 
	{ 
		return m_potrgrd; 
	}
	double getpotrizvn() 
	{ 
		return m_potrizvn; 
	}
	double getpotrmjs() 
	{ 
		return m_potrmjs; 
	}

private:
	double m_potrgrd, m_potrizvn, m_potrmjs;
	string m_vrsta, m_model;
};

Automobil::Automobil()
{

}

Automobil::Automobil(int a)
{
	if (a == 1)
	{
		m_vrsta = "Opel";
		m_model = "Astra";
	}
}


Automobil::~Automobil()
{

}



int main()
{
	Automobil auto_1;
	auto_1.setVrsta("Audi");
	auto_1.setModel("r8");
	auto_1.setPotrgrd(6.3);
	auto_1.setPotrizvn(8.8);
	auto_1.setPotrmjs(7.3);

	Automobil auto_2;
	auto_2.setVrsta("Citroen");
	auto_2.setModel("c4");
	auto_2.setPotrgrd(4.3);
	auto_2.setPotrizvn(6.8);
	auto_2.setPotrmjs(5.4);

	Automobil auto_3;
	auto_3.setVrsta("Kia");
	auto_3.setModel("Sportage");
	auto_3.setPotrgrd(4.5);
	auto_3.setPotrizvn(9.1);
	auto_3.setPotrmjs(7.3);

	string ime_najm_potrgrd;
	if (auto_1.getpotrgrd() == (min(min(auto_1.getpotrgrd(), auto_2.getpotrgrd()), auto_3.getpotrgrd())))
		ime_najm_potrgrd = auto_1.getvrsta() + " " + auto_1.getmodel();

	else if (auto_2.getpotrgrd() == (min(min(auto_1.getpotrgrd(), auto_2.getpotrgrd()), auto_3.getpotrgrd())))
		ime_najm_potrgrd = auto_2.getvrsta() + " " + auto_2.getmodel();

	else if (auto_3.getpotrgrd() == (min(min(auto_1.getpotrgrd(), auto_2.getpotrgrd()), auto_3.getpotrgrd())))
		ime_najm_potrgrd = auto_3.getvrsta() + " " + auto_3.getmodel();

	cout << "Najmanju potrosnju u gradu ima:" << endl; ;
	cout << ime_najm_potrgrd;
	cout << " on trosi: " << endl;
	cout << min(min(auto_1.getpotrgrd(), auto_2.getpotrgrd()), auto_3.getpotrgrd());
	cout << " L/100km";



	cout << "\n\n\n";
	system("pause");
	return 0;
}
