#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

struct Drzava
{
	std::string naziv;
	float pov;
	float brStan;
	std::string vrh;
	unsigned int hVrh;
};

void Add()
{
	std::fstream writer("drzave.txt", std::ios::out);
	std::vector<Drzava> vecDrzave;

	for (int i = 0; i < 5; i++)
	{
		Drzava temp;
		std::cin >> temp.naziv >> temp.brStan >> temp.pov >> temp.vrh >> temp.hVrh;
		vecDrzave.push_back(temp);
	}

	for (auto &i : vecDrzave)
	{
		writer << i.naziv << " " << i.pov << " " << i.brStan << " " << i.vrh << " " << i.hVrh << "\n";
	}

	writer.close();
}

void Analyze()
{
	std::fstream reader("drzave.txt", std::ios::in);

	std::vector<Drzava> vecDrzave;

	while (!reader.eof())
	{
		Drzava i;
		reader >> i.naziv >> i.brStan >> i.pov >> i.vrh >> i.hVrh;

		vecDrzave.push_back(i);
	}

	reader.close();

	std::cout << "\n\n";

	// Drzava sa najvise stanovnika
	std::sort(vecDrzave.begin(), vecDrzave.end(), [](Drzava a, Drzava b) { return a.brStan > b.brStan; });
	std::cout << vecDrzave.at(0).naziv << " " << vecDrzave.at(0).brStan << " milijun stanovnika\n";

	// Drzave sa najvisim vrhom
	std::sort(vecDrzave.begin(), vecDrzave.end(), [](Drzava a, Drzava b) { return a.hVrh > b.hVrh; });
	for (int i = 0; i < 3; i++)
	{
		std::cout << vecDrzave.at(i).naziv << " " << vecDrzave.at(i).vrh << " " << vecDrzave.at(i).hVrh << "\n";
	}
}

int main()
{
	char input;
	std::cout << "1. Add\n2. Analyze\nAnswer: ";
	std::cin >> input;

	if (input == '1') Add();
	else Analyze();

	std::cout << "\n";
	system("pause");
	return 0;
}
