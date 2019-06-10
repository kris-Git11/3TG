#include <iostream>
using namespace std;

const int CITY = 2;
const int WEEK = 7;



int main()
{
    int iArrTemperatura[CITY][WEEK];

    cout << "Unesite temperature: " << endl;

    for (int iBrojac = 0; iBrojac < CITY; iBrojac++)
    {
        for (int iBrojac2 = 0; iBrojac2 < WEEK; iBrojac2++)
        {
            cout << "Grad " << iBrojac + 1 << ", Dan " << iBrojac2 + 1 << ", Temperatura = ";
            cin >> iArrTemperatura[iBrojac][iBrojac2];
        }
    }

    cout << endl;
    cout << "Ispisujem vrijednosti: " << endl;

    for (int iBrojac = 0; iBrojac < CITY; iBrojac++)
    {
        for (int iBrojac2 = 0; iBrojac2 < WEEK; iBrojac2++)
        {
            cout << "Grad " << iBrojac + 1 << ", Dan " << iBrojac2 + 1 << ", Temperatura = " << iArrTemperatura[iBrojac][iBrojac2] << endl;
        }
    }
    return 0;
}
