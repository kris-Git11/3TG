#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;

struct pekara
{
    string dan;
    int bijeli;
    int crni;
    int kukuruzni;
    int razeni;
    int zobeni;
} kruh[365];

string TrimMy (string str)
{
    size_t startpos = str.find_first_not_of(" ");
    if( string::npos != startpos )
    {
        str = str.substr( startpos );
    }
    return str;
}

int kruhovi_dodaj (string linija_iz_datoteke, int kruh_index)
{
    int zadnja_lokacija, prije_lokacija, rbr;
    float kolicina_bijelih, kolicina_crnih, kolicina_kukuruznih, kolicina_razenih, kolicina_zobenih;
    string trenutni_text;
    zadnja_lokacija=0;
    prije_lokacija=0;
    rbr=1;
    while (zadnja_lokacija!=linija_iz_datoteke.length()-1)
    {
        prije_lokacija=zadnja_lokacija;
        zadnja_lokacija=linija_iz_datoteke.find(" ",prije_lokacija+1);
        if (zadnja_lokacija==-1)
            zadnja_lokacija=linija_iz_datoteke.length();

        trenutni_text = linija_iz_datoteke.substr(prije_lokacija, zadnja_lokacija-prije_lokacija);
        trenutni_text = TrimMy(trenutni_text);

        int n = trenutni_text.length();
        char PrviZnak[n+1];
        strcpy(PrviZnak, trenutni_text.c_str());

        switch (rbr)
        {
        case 1:
            cout << "Dan:" << trenutni_text << endl;
            //kruh[kruh_index].dan=atoi(trenutni_text.c_str());
            kruh[kruh_index].dan=trenutni_text;
            break;
        default:
            trenutni_text = trenutni_text.substr(1, trenutni_text.length());
            switch (PrviZnak[0]) //b - bjeli, c - crni, k - kukuruzni, z - zobeni, r - razeni
            {
            case 'b':
                cout << "Kolicina bijelog kruha:" << trenutni_text << endl;
                kruh[kruh_index].bijeli=atoi(trenutni_text.c_str());
                kolicina_bijelih = kolicina_bijelih + atoi(trenutni_text.c_str());
                break;

            case 'c':
                cout << "Kolicina crnog kruha:" << trenutni_text << endl;
                kruh[kruh_index].crni=atoi(trenutni_text.c_str());
                kolicina_crnih = kolicina_crnih + atoi(trenutni_text.c_str());
                break;
            case 'k':
                cout << "Kolicina kukuruznog kruha:" << trenutni_text << endl;
                kruh[kruh_index].kukuruzni=atoi(trenutni_text.c_str());
                kolicina_kukuruznih = kolicina_kukuruznih + atoi(trenutni_text.c_str());
                break;
            case 'r':
                cout << "Kolicina razenog kruha:" << trenutni_text << endl;
                kruh[kruh_index].razeni=atoi(trenutni_text.c_str());
                kolicina_razenih = kolicina_razenih + atoi(trenutni_text.c_str());
                break;
            case 'z':
                cout << "Kolicina zobenog kruha:" << trenutni_text << endl;
                kruh[kruh_index].zobeni=atoi(trenutni_text.c_str());
                kolicina_zobenih = kolicina_zobenih + atoi(trenutni_text.c_str());
                break;
            default:
                cout << "Vrsta kruha (" << PrviZnak[0] << ") nepoznata !!! ";
                break;
            }
            break;
        }
        rbr=rbr+1;
    }
    cout << "Ukupan broj prodanih kruhova:" << kruh[kruh_index].bijeli + kruh[kruh_index].crni + kruh[kruh_index].kukuruzni + kruh[kruh_index].razeni + kruh[kruh_index].zobeni << endl;
}

int TjednaAnaliza()
{
    float kolicina_bijelih, kolicina_crnih, kolicina_kukuruznih, kolicina_razenih, kolicina_zobenih;
    int rbr_tjedna;
    rbr_tjedna = 0;

    cout << endl;
    cout << "TJEDNA ANALIZA" << endl;

    for(int brojac=0; brojac<365; brojac++)
    {

        if (kruh[brojac].dan=="pon" || kruh[brojac].dan=="")
        {
            if (rbr_tjedna > 0)
            {
                cout << "U tjednu " << rbr_tjedna << " bilo je prodano ukupno " << kolicina_bijelih+kolicina_crnih+kolicina_kukuruznih+kolicina_razenih+kolicina_zobenih << " komada kruha." << endl;
                cout << "Od toga, ukupno :" << endl;
                cout << " - " << kolicina_bijelih << " komada bijelog kruha."<< endl;
                cout << " - " << kolicina_crnih << " komada crnog kruha."<< endl;
                cout << " - " << kolicina_kukuruznih << " komada kukuruznog kruha."<< endl;
                cout << " - " << kolicina_razenih << " komada razenog kruha."<< endl;
                cout << " - " << kolicina_zobenih << " komada zobenog kruha."<< endl;
            }
            rbr_tjedna = rbr_tjedna + 1;
            kolicina_bijelih=kruh[brojac].bijeli;
            kolicina_crnih=kruh[brojac].crni;
            kolicina_kukuruznih=kruh[brojac].kukuruzni;
            kolicina_razenih=kruh[brojac].razeni;
            kolicina_zobenih=kruh[brojac].zobeni;
            if (kruh[brojac].dan=="")
                return 0;
        }
        else
        {
            kolicina_bijelih=kolicina_bijelih+kruh[brojac].bijeli;
            kolicina_crnih=kolicina_crnih+kruh[brojac].crni;
            kolicina_kukuruznih=kolicina_kukuruznih+kruh[brojac].kukuruzni;
            kolicina_razenih=kolicina_razenih+kruh[brojac].razeni;
            kolicina_zobenih=kolicina_zobenih+kruh[brojac].zobeni;
        }
    }
}

int main()
{
    int broj_dana, broj_vrsta_kruha;

    cout << "Upisite broj dana za provjeru: ";
    cin >> broj_dana;
    ofstream file_pekara;
    file_pekara.open("Kruheki2.txt", ios::app);
    for (int brojac_i = 0; brojac_i < broj_dana; brojac_i++)
    {
        string file_dan, vrsta_kruha, kolicina_vrste_kruha, cijeli_red;
        cout << "Dan (pon, uto, sri, cet, pet, sub, ned): ";
        cin >> file_dan;

        cijeli_red = file_dan + " ";

        cout << "Upisite broj vrsta kruha unutar tog dana: ";
        cin >> broj_vrsta_kruha;
        for (int brojac_a = 0; brojac_a < broj_vrsta_kruha; brojac_a++)
        {
            cout << "Vrsta kruha (b - bjeli, c - crni, k - kukuruzni, z - zobeni, r - razeni): ";
            cin >> vrsta_kruha;

            cout << "Koliko je prodano kruha " << vrsta_kruha << ": ";
            cin >> kolicina_vrste_kruha;

            cijeli_red = cijeli_red + vrsta_kruha + kolicina_vrste_kruha + " ";
        }

        file_pekara << cijeli_red << endl;
    }
    file_pekara.close();

    int rbr = 0;
    ifstream file_pekara_citanje;
    file_pekara_citanje.open("Kruheki2.txt");
    if (file_pekara_citanje.is_open())
    {
        string file_line;
        while (getline(file_pekara_citanje, file_line))
        {
            //cout << file_line << '\n';
            kruhovi_dodaj(file_line, rbr);
            rbr=rbr+1;
        }
        file_pekara_citanje.close();
    }
    else
        cout << "Datoteku nije moguce otvoriti ...";
    string file_line;

    TjednaAnaliza();

    return 0;
}

