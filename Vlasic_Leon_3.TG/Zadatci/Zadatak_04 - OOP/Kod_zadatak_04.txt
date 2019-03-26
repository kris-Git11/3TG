// Vlasic Leon, 3.TG

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

/*
Unijeti podatke za tri automobila i za svaki prosjecnu potrosnju u gradu, 
izvan grada i za mjesovitu voznju. Ispisati naziv automobila koji ima najmanju 
potrosnju u voznji gradom. Unijeti podatke i za automobil Opel Astra sa potrosnjom 
7, 4.5 i 6.4 l/100km i ima benzinski motor (preko konstruktora). 

Ispisati naziv i vrstu motora automobila koji trose manje od 5 l/100 km na 
izvangradskim voznjama (od cetiri automobila). Pomocu preopterecenog operatora 
povecati svim automobilima podatak za mjesovitu potrosnju za 8% pa ispisati samo 
automobile kod kojih je ta potrosnja jos uvijek manja za 25% u odnosu na potrosnju 
u gradskoj voznji. Napraviti da se u programu moze unositi podatke za bilo koji 
broj automobila (manji od 1000) i da se svakom automobilu moze unijeti datum 
proizvodnje, te odrediti i ispisati najnoviji automobil.
*/

class Automobil
{
public:
	Automobil();
	Automobil(int);
	~Automobil();
	
	void operator!() // Povecanje potrosnje
	{
		m_pot_mjesovit *= 1.08f;
	}


	void setBrend(string brend) { m_brend = brend; }
	void setModel(string model) { m_model = model; }
	void setPot_u_gradu(double pot_u_g) { m_pot_u_gradu = pot_u_g; }
	void setPot_van_grada(double pot_van_g) { m_pot_van_grada = pot_van_g; }
	void setPot_mjesovit(double pot_mjesovit) { m_pot_mjesovit = pot_mjesovit; }
	void setVrsta_motora(string motor) { m_motor = motor; }
	
	string getbrend() { return m_brend; }
	string getmodel() { return m_model; }
	string getmotor() { return m_motor; }
	double getpotugradu() { return m_pot_u_gradu; }
	double getpotvangrada() { return m_pot_van_grada; }
	double getpotmjes() { return m_pot_mjesovit; }

private:
	double m_pot_u_gradu, m_pot_van_grada, m_pot_mjesovit;
	string m_brend, m_model, m_motor;
};

Automobil::Automobil()
{

}

Automobil::Automobil(int a)
{
	if (a == 1)
	{
		m_brend = "Opel";
		m_model = "Astra";
		m_pot_mjesovit = 9.5;
		m_pot_u_gradu = 7.89;
		m_pot_van_grada = 10.32;
		m_motor = "benzinski";
	}
}


Automobil::~Automobil()
{

}



int main()
{
	Automobil auto_1;
	auto_1.setBrend ("BMW");
	auto_1.setModel ("i8");
	auto_1.setPot_u_gradu (7.3);
	auto_1.setPot_van_grada (8.9);
	auto_1.setPot_mjesovit (8.2);
	auto_1.setVrsta_motora("dizel");

	Automobil auto_2;
	auto_2.setBrend ("Audi");
	auto_2.setModel ("A5");
	auto_2.setPot_u_gradu (6.38);
	auto_2.setPot_van_grada (7.74);
	auto_2.setPot_mjesovit (7);
	auto_2.setVrsta_motora("benzinac");

	Automobil auto_3;
	auto_3.setBrend ("Audi");
	auto_3.setModel ("A7");
	auto_3.setPot_u_gradu (5.66);
	auto_3.setPot_van_grada (7.1);
	auto_3.setPot_mjesovit (6.45);
	auto_3.setVrsta_motora("dizel");

	string ime_najm_pot_u_gradu;
	if (auto_1.getpotugradu() == (min(min(auto_1.getpotugradu(), auto_2.getpotugradu()), auto_3.getpotugradu())))
		ime_najm_pot_u_gradu = auto_1.getbrend() + " " + auto_1.getmodel();

	else if (auto_2.getpotugradu() == (min(min(auto_1.getpotugradu(), auto_2.getpotugradu()), auto_3.getpotugradu())))
		ime_najm_pot_u_gradu = auto_2.getbrend() + " " + auto_2.getmodel();

	else if (auto_3.getpotugradu() == (min(min(auto_1.getpotugradu(), auto_2.getpotugradu()), auto_3.getpotugradu())))
		ime_najm_pot_u_gradu = auto_3.getbrend() + " " + auto_3.getmodel();

	cout << "Najmanju potrosnju od prva tri automobila u gradu ima:\n";
	cout << ime_najm_pot_u_gradu;
	cout << ", a potrosnja iznosi: ";
	cout << min(min(auto_1.getpotugradu(), auto_2.getpotugradu()), auto_3.getpotugradu()) << endl;

	if (auto_1.getpotugradu <= 5)
	{
		cout << auto_1.getbrend << " " << auto_1.getmodel << " trosi manje od 5 L/100km, a vrsta motora je: ";
		cout << auto_1.getmotor() << endl;
	}
	

	cout << "\n\n\n";
	system("pause");
    return 0;
}

