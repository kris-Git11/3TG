#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Datum
{
	int dan;
	int mjesec;
	int godina;
};

class Radnik
{
public:
	Radnik() {}
	Radnik(std::string ime, std::string prezime, std::vector<float> placa)
	{
		m_ime = ime;
		m_prezime = prezime;
		m_placa = placa;
	}

	// Povecanje zadnje placae za 10%
	void operator!()
	{
		m_placa.at(m_placa.size() - 1) *= 1.1f;
	}

	float ukPrihod()
	{
		float sum = 0.f;
		for (auto &i : m_placa)
		{
			sum += i;
		}

		return sum;
	}
	
	// Setters
	void setIme(std::string ime) {	m_ime = ime; }
	void setPrezime(std::string prezime) {m_prezime = prezime;}
	void setPlaca(std::vector<float> placa) {m_placa = placa;}

	// Getters
	std::string getIme() { return m_ime; }
	std::string getPrezime() { return m_prezime; }
	std::vector<float> getPlaca() { return m_placa; }

private:
	std::vector<float> m_placa;

	std::string m_ime;
	std::string m_prezime;

	Datum m_datum;
};

int main()
{
	Radnik br1;
	br1.setIme("Bob");
	br1.setPrezime("Bobor");
	br1.setPlaca({ 4000, 3500, 5000 });

	Radnik br2;
	br2.setIme("Stef");
	br2.setPrezime("Stankovic");
	br2.setPlaca({ 4500, 3200, 4000 });

	Radnik br3;
	br3.setIme("Josip");
	br3.setPrezime("Jozic");
	br3.setPlaca({ 4000, 3600, 4000 });

	std::cout << br1.getIme() << " " << br1.getPrezime() << " " << br1.ukPrihod() << "\n";
	std::cout << br2.getIme() << " " << br2.getPrezime() << " " << br2.ukPrihod() << "\n";
	std::cout << br3.getIme() << " " << br3.getPrezime() << " " << br3.ukPrihod() << "\n";

	Radnik br4("Ivo", "Benko", { 5400, 4500, 5000 });

	std::vector<Radnik> ukupnePlace;
	ukupnePlace.push_back(br1);
	ukupnePlace.push_back(br2);
	ukupnePlace.push_back(br3);

	std::sort(ukupnePlace.begin(), ukupnePlace.end(), [](Radnik a, Radnik b) {return a.ukPrihod() < b.ukPrihod(); });

	std::cout << "Najvecu zaradu ima:\n";
	std::cout << ukupnePlace.at(ukupnePlace.size() - 1).getIme() << " ";
	std::cout << ukupnePlace.at(ukupnePlace.size() - 1).getPrezime() << "\n";

	!br1;
	!br2;
	!br3;
	!br4;

	std::cout << br1.getIme() << " " << br1.getPrezime() << " " << br1.ukPrihod() << "\n";
	std::cout << br2.getIme() << " " << br2.getPrezime() << " " << br2.ukPrihod() << "\n";
	std::cout << br3.getIme() << " " << br3.getPrezime() << " " << br3.ukPrihod() << "\n";

	system("pause");
	return 0;
}