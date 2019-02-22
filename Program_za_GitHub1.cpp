#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;

struct Drzava
{
    string naziv_drzave;
    float povrsina_drzave;
    int broj_stanovnika;
    string naziv_najvisi_vrh;
    float visina_najvisi_vrh;

} Drzava_Unos [5];

int Analiza()
{
    float max_visina = 0;
    float max_visina2 = 0;
    float max_visina3 = 0;
    int prvi_vrh;
    int drugi_vrh;
    int treci_vrh;

    cout << endl;
    cout << "ANALIZA" << endl;

    if ((Drzava_Unos[0].broj_stanovnika > Drzava_Unos[1].broj_stanovnika) && (Drzava_Unos[0].broj_stanovnika > Drzava_Unos[2].broj_stanovnika) && (Drzava_Unos[0].broj_stanovnika > Drzava_Unos[3].broj_stanovnika) && (Drzava_Unos[0].broj_stanovnika > Drzava_Unos[4].broj_stanovnika))
        cout << "Najvise stanovnika ima " << Drzava_Unos[0].naziv_drzave << " sa " << Drzava_Unos[0].broj_stanovnika << " stanovnika." << endl;
    if ((Drzava_Unos[1].broj_stanovnika > Drzava_Unos[0].broj_stanovnika) && (Drzava_Unos[1].broj_stanovnika > Drzava_Unos[2].broj_stanovnika) && (Drzava_Unos[1].broj_stanovnika > Drzava_Unos[3].broj_stanovnika) && (Drzava_Unos[1].broj_stanovnika > Drzava_Unos[4].broj_stanovnika))
        cout << "Najvise stanovnika ima " << Drzava_Unos[1].naziv_drzave << " sa " << Drzava_Unos[1].broj_stanovnika << " stanovnika." << endl;
    if ((Drzava_Unos[2].broj_stanovnika > Drzava_Unos[0].broj_stanovnika) && (Drzava_Unos[2].broj_stanovnika > Drzava_Unos[1].broj_stanovnika) && (Drzava_Unos[2].broj_stanovnika > Drzava_Unos[3].broj_stanovnika) && (Drzava_Unos[2].broj_stanovnika > Drzava_Unos[4].broj_stanovnika))
        cout << "Najvise stanovnika ima " << Drzava_Unos[2].naziv_drzave << " sa " << Drzava_Unos[2].broj_stanovnika << " stanovnika." << endl;
    if ((Drzava_Unos[3].broj_stanovnika > Drzava_Unos[0].broj_stanovnika) && (Drzava_Unos[3].broj_stanovnika > Drzava_Unos[1].broj_stanovnika) && (Drzava_Unos[3].broj_stanovnika > Drzava_Unos[2].broj_stanovnika) && (Drzava_Unos[3].broj_stanovnika > Drzava_Unos[4].broj_stanovnika))
        cout << "Najvise stanovnika ima " << Drzava_Unos[3].naziv_drzave << " sa " << Drzava_Unos[3].broj_stanovnika << " stanovnika." << endl;
    if ((Drzava_Unos[4].broj_stanovnika > Drzava_Unos[0].broj_stanovnika) && (Drzava_Unos[4].broj_stanovnika > Drzava_Unos[1].broj_stanovnika) && (Drzava_Unos[4].broj_stanovnika > Drzava_Unos[2].broj_stanovnika) && (Drzava_Unos[4].broj_stanovnika > Drzava_Unos[3].broj_stanovnika))
        cout << "Najvise stanovnika ima " << Drzava_Unos[4].naziv_drzave << " sa " << Drzava_Unos[4].broj_stanovnika << " stanovnika." << endl;

    for(int brojac = 0; brojac < 5; brojac++)
    {
        if (Drzava_Unos[brojac].visina_najvisi_vrh > max_visina)
        {
            treci_vrh = drugi_vrh;
            drugi_vrh = prvi_vrh;
            prvi_vrh = brojac;
            max_visina3 = max_visina2;
            max_visina2 = max_visina;
            max_visina = Drzava_Unos[brojac].visina_najvisi_vrh;
        }

        else if ((Drzava_Unos[brojac].visina_najvisi_vrh < max_visina) && (Drzava_Unos[brojac].visina_najvisi_vrh > max_visina2) && (Drzava_Unos[brojac].visina_najvisi_vrh > max_visina3))
        {
            treci_vrh = drugi_vrh;
            drugi_vrh = brojac;
            max_visina3 = max_visina2;
            max_visina2 = Drzava_Unos[brojac].visina_najvisi_vrh;
        }

        else if ((Drzava_Unos[brojac].visina_najvisi_vrh < max_visina) && (Drzava_Unos[brojac].visina_najvisi_vrh < max_visina2) && (Drzava_Unos[brojac].visina_najvisi_vrh > max_visina3))
        {
            treci_vrh = brojac;
            max_visina3 = Drzava_Unos[brojac].visina_najvisi_vrh;
        }
    }

    cout << prvi_vrh << " " << max_visina << endl;
    cout << drugi_vrh << " " << max_visina2 << endl;
    cout << treci_vrh << " " << max_visina3 << endl;
    cout << "Najvisi vrh je u " << Drzava_Unos[prvi_vrh].naziv_drzave << ", naziva se " << Drzava_Unos[prvi_vrh].naziv_najvisi_vrh << " i visok je " << Drzava_Unos[prvi_vrh].visina_najvisi_vrh << " m." << endl;
    cout << "Drugi po redu najvisi vrh je u " << Drzava_Unos[drugi_vrh].naziv_drzave << ", naziva se " << Drzava_Unos[drugi_vrh].naziv_najvisi_vrh << " i visok je " << Drzava_Unos[drugi_vrh].visina_najvisi_vrh << " m." << endl;
    cout << "Treci po redu najvisi vrh je u " << Drzava_Unos[treci_vrh].naziv_drzave << ", naziva se " << Drzava_Unos[treci_vrh].naziv_najvisi_vrh << " i visok je " << Drzava_Unos[treci_vrh].visina_najvisi_vrh << " m." << endl;
}

int main()
{
    int broj_vrsta_kruha;

    ofstream file_drzava;
    file_drzava.open("Drzave.txt", ios::app);
    for (int brojac_i = 0; brojac_i < 5; brojac_i++)
    {
        string drzava, pov_drzava, broj_stan_drzava, najvisi_vrh, visina_vrh, cijeli_red;
        cout << "Naziv drzave(npr. Velika_Britanija): ";
        cin >> drzava;
        Drzava_Unos[brojac_i].naziv_drzave = drzava;

        cout << "Povrsina drzave: ";
        cin >> pov_drzava;
        Drzava_Unos[brojac_i].povrsina_drzave = atof(pov_drzava.c_str());

        cout << "Broj stanovnika: ";
        cin >> broj_stan_drzava;
        Drzava_Unos[brojac_i].broj_stanovnika = atoi(broj_stan_drzava.c_str());

        cout << "Naziv najviseg vrha: ";
        cin >> najvisi_vrh;
        Drzava_Unos[brojac_i].naziv_najvisi_vrh = najvisi_vrh;

        cout << "Visina najviseg vrha: ";
        cin >> visina_vrh;
        Drzava_Unos[brojac_i].visina_najvisi_vrh = atof(visina_vrh.c_str());

        cijeli_red = drzava + " " + pov_drzava + " " + broj_stan_drzava + " " + najvisi_vrh + " " + visina_vrh + " ";

        file_drzava << cijeli_red << endl;
    }
    file_drzava.close();

    cout << endl;

    ifstream file_drzava_citanje;
    file_drzava_citanje.open("Drzave.txt");
    if (file_drzava_citanje.is_open())
    {
        string file_line;
        while (getline(file_drzava_citanje, file_line))
        {
            cout << file_line << endl;
        }
        file_drzava_citanje.close();
    }
    else
        cout << "Datoteku nije moguce otvoriti ...";

    Analiza();

    return 0;
}
