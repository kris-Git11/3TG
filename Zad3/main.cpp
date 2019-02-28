#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class Ucenik
{
public:
	Ucenik() {}
	Ucenik(std::string ime, std::string prezime, std::vector<int> ocjene)
	{
		m_ime		= ime;
		m_prezime	= prezime;
		m_ocjene	= ocjene;
	}

	float Prosjek()
	{
		// Check for negative Grades
		if (isPositive())
		{
			int sum = 0;

			for (auto i : m_ocjene)
				sum += i;

			return sum / 5.0f;
		}
		
		// Negativna ocjena pronadena return 0f
		return 0.0f;
	}

	void Ucitaj()
	{
		std::cin >> m_ime >> m_prezime;

		for (int i = 0; i < 5; i++)
		{
			int ocjena;
			std::cin >> ocjena;

			m_ocjene.push_back(ocjena);
		}
	}

	std::string getUcenikAndAverage()
	{
		return m_ime + " " + m_prezime + " " + std::to_string(Prosjek());
	}

private:
	std::string m_ime;
	std::string m_prezime;
	std::vector<int> m_ocjene;

	bool isPositive()
	{
		for (auto i : m_ocjene)
		{
			if (i == 1)
				return false;
		}

		return true;
	}
};

int main()
{
	Ucenik* ucenici = new Ucenik[5];

	for (int i = 0; i < 3; i++)
	{
		Ucenik newUcenik;
		newUcenik.Ucitaj();

		ucenici[i] = newUcenik;
	}

	Ucenik temp1("Ivan" , "Ivanovic",  { 3, 2, 2, 2, 4 });
	Ucenik temp2("Josip", "Josipovic", { 5, 4, 4, 2, 1 });

	ucenici[3] = temp1;
	ucenici[4] = temp2;

	std::sort(ucenici, ucenici + 5, [](Ucenik a, Ucenik b) { return a.Prosjek() > b.Prosjek(); });

	std::cout << "Najbolji ucenik je " << ucenici[0].getUcenikAndAverage() << "\n\n\n";

	// Provjera da li su svi u polju
	std::cout << "U polju su:\n";
	for (int i = 0; i < 5; i++)
		std::cout << ucenici[i].getUcenikAndAverage() << "\n";

	// Clear memory
	delete[] ucenici;

	std::cout << "\n";
	system("pause");
	return 0;
}

/*
	Marko Marulic 5 5 4 5 5
	Lovro Lovrovic 3 4 2 3 4
	Leon Leonic 4 4 2 5 3

	Ivan Ivanovic 3 2 2 2 4
	Josip Josipovic 5 4 4 2 2
*/