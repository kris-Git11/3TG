#include <bits/stdc++.h>

using namespace std;

class Radnik
{
    public:
    float p1, p2, p3;
    int dan, mj, god;
    string ime, prezime;

    int ukupno()
    {
        return p1 + p2 + p3;
    }
    Radnik()
    {
        cin >> ime >> prezime >> p1 >> p2 >> p3 >> dan >> mj >> god;
    }

    void operator++ ()
    {
        float postotak = 0.1 * p3;
        p3 = p3 + postotak;
    }

};

int main()
{
    int n, max_placa = 0, min_god = 99999, min_dan = 9999, min_mj = 999;
    string max_ime, max_prezime, naj_ime, naj_prezime;
    cout << "Unesite broj radnika: " << endl;
    cin >> n;
    cout << "Unesite podatke za " << n << " radnika, tipa: ime prezime placa1 placa2 placa3 dan mjesec godina..." << endl;
    Radnik r[n];
    cout << "Svi radnici: " << endl;
    for (int i=0; i<n; i++){
        cout << r[i].ime << " " << r[i].prezime << " " << r[i].ukupno() << endl;
        if (r[i].ukupno() > max_placa){
            max_placa = r[i].ukupno(); max_ime = r[i].ime; max_prezime = r[i].prezime;
        }
        if (r[i].god < min_god){
            min_god = r[i].god; min_mj = r[i].mj; min_dan = r[i].dan;
            naj_ime = r[i].ime; naj_prezime = r[i].prezime;
        }
        else if (min_god == r[i].god){
            if (r[i].mj < min_mj){
                min_god = r[i].god; min_mj = r[i].mj; min_dan = r[i].dan;
                naj_ime = r[i].ime; naj_prezime = r[i].prezime;
            }
            else  if (min_mj == r[i].mj){
                if (r[i].dan < min_dan){
                    min_god = r[i].god; min_mj = r[i].mj; min_dan = r[i].dan;
                    naj_ime = r[i].ime; naj_prezime = r[i].prezime;
                }
            }
        }
    }
    cout << "Najvecu placu je imao: " << endl;
    cout << max_placa << " " << max_ime << " " << max_prezime << endl;
    cout << "Poslije povecanja za 10% " << endl;
    for (int i=0; i<n; i++)
    {
        ++r[i];
        cout << r[i].ime << " " << r[i].prezime << " " << r[i].ukupno() << endl;
    }
    cout << "Najstariji je: " << endl;
    cout << naj_ime << " " << naj_prezime << endl;
}
