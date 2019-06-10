#include <iostream>
using namespace std;

int main()
{
    int iArrBrojevi[100];
    int iUpis;
    int iZbrojBrojeva = 0;

    cout << "Unesite broj brojeva za upis: ";
    cin >> iUpis;

    while (iUpis > 100 || iUpis <= 0)
    {
        cout << "Broj mora biti veci od 0 i manji od 100." << endl;
        cout << "Unesite ponovno broj brojeva za upis: ";
        cin >> iUpis;
    }

    for (int iBrojac = 0; iBrojac < iUpis; iBrojac++)
    {
        cout << iBrojac + 1 << ". broj: ";
        cin >> iArrBrojevi[iBrojac];
        iZbrojBrojeva += iArrBrojevi[iBrojac];
    }

    int iAritSredina = iZbrojBrojeva / iUpis;

    cout << "Aritmeticka sredina je: " << iAritSredina << endl;
}
