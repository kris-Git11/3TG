#include <iostream>
using namespace std;

int main()
{
    int iArrBrojevi[100];
    int iBrojBrojeva;
    int iMaxBroj = 0;

    cout << "Unesite broj brojeva: ";
    cin >> iBrojBrojeva;

    while (iBrojBrojeva > 100 || iBrojBrojeva <= 0)
    {
        cout << "Broj mora biti veæi od 0 i manji od 100." << endl;
        cout << "Unesite ponovno broj brojeva: ";
        cin >> iBrojBrojeva;
    }

    for (int iBrojac = 0; iBrojac < iBrojBrojeva; iBrojac++)
    {
        cout << iBrojac + 1 << ". broj: ";
        cin >> iArrBrojevi[iBrojac];

        if (iArrBrojevi[iBrojac] > iMaxBroj)
            iMaxBroj = iArrBrojevi[iBrojac];
    }

    cout << "Najveci upisani broj je: " << iMaxBroj << endl;

    return 0;
}
