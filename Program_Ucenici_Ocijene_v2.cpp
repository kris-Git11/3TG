#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

class Ucenik
{
public:
    string ime;
    string prezime;
    int ocjena[5];
    double prosijek;
    bool pozitivne;

    Ucenik();
	Ucenik(int);

    void citaj_podatke_o_uceniku ()
    {
        cout << "Ime ucenika: ";
        cin >> ime;
        cout << "Prezime ucenika: ";
        cin >> prezime;
        for (int i_brojac = 0; i_brojac < 5; i_brojac++)
        {
            cout << i_brojac + 1 << ". ocjena: ";
            cin >> ocjena[i_brojac];
        }

    };
    bool provjeri_ocjene ()
    {
        for (int i_brojac = 0; i_brojac < 5; i_brojac++)
        {
            if (ocjena[i_brojac] < 2)
            {
                pozitivne = false;
                return pozitivne;
            }
            else if (ocjena[i_brojac] >= 2 && i_brojac == 4)
            {
                pozitivne = true;
                return pozitivne;
            }
            else
                continue;
        }
    };
    double izracunaj_prosijek ()
    {
        double zbroj_ocjena = 0;
        int broj_ocjena = 0;
        prosijek = 0;
        for (int i_brojac = 0; i_brojac < 5; i_brojac++)
        {
            zbroj_ocjena = zbroj_ocjena + ocjena[i_brojac];
            broj_ocjena++;
        }
        prosijek = zbroj_ocjena / broj_ocjena;
        return prosijek;
    };
};

    Ucenik::Ucenik() {}

    Ucenik::Ucenik(int x)
    {
        if (x == 1)
        {
            ime = "Branko";
            prezime = "Kockica";
            for (int i = 0; i < 5; i++)
            {
                ocjena[i] = rand() % 5 + 1;
            }
        }
        else if (x==2)
        {
            ime = "Danko";
            prezime = "Bananko";
            for (int i = 0; i < 5; i++)
            {
                ocjena[i] = rand() % 5 + 1;
            }
        }

    };

int main()
{

    srand (time(NULL));

    Ucenik ucenik[5];
    double prosijek_1, prosijek_2, prosijek_3;
    Ucenik temp;
    string NajboljiImePrezime;
    double NajboljiProsjek = 0;


    for (int i_brojac = 0; i_brojac < 3; i_brojac++)
    {
        ucenik[i_brojac].citaj_podatke_o_uceniku ();
    }

    ucenik[3] = Ucenik(1);
    ucenik[4] = Ucenik(2);

    for (int i_brojac = 0; i_brojac < 5; i_brojac++)
    {
        if (ucenik[i_brojac].provjeri_ocjene())
        {
            cout << ucenik[i_brojac].ime << " " << ucenik[i_brojac].prezime << endl;
            cout << "Prosijek: " << ucenik[i_brojac].izracunaj_prosijek() << endl;

            if (NajboljiProsjek < ucenik[i_brojac].izracunaj_prosijek())
                {
                    NajboljiProsjek = ucenik[i_brojac].izracunaj_prosijek();
                    NajboljiImePrezime = ucenik[i_brojac].ime + " " + ucenik[i_brojac].prezime;
                }
        }
        else
        {
            cout << ucenik[i_brojac].ime << " " << ucenik[i_brojac].prezime << endl;
            cout << "Uceniku nisu sve ocjene pozitivne." << endl;
        }
    }
    cout << "Najveci streber je " << NajboljiImePrezime << " s prosjekom ocjena " << NajboljiProsjek << endl;
    return 0;
}
