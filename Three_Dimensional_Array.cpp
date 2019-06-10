#include <iostream>
using namespace std;

int main()
{
    int iArrTest[2][3][2];

    cout << "Unesite 12 brojeva: " << endl;

    for (int iBrojac = 0; iBrojac < 2; iBrojac++)
    {
        for (int iBrojac2 = 0; iBrojac2 < 3; iBrojac2++)
        {
            for (int iBrojac3 = 0; iBrojac3 < 2; iBrojac3++)
            {
                cin >> iArrTest[iBrojac][iBrojac2][iBrojac3];
            }
        }
    }

    cout << "Ispisujem vrijednosti: " << endl;

    for (int iBrojac = 0; iBrojac < 2; iBrojac++)
    {
        for (int iBrojac2 = 0; iBrojac2 < 3; iBrojac2++)
        {
            for (int iBrojac3 = 0; iBrojac3 < 2; iBrojac3++)
            {
                cout << "[" << iBrojac << "][" << iBrojac2 << "][" << iBrojac3 << "] = " << iArrTest[iBrojac][iBrojac2][iBrojac3] << endl;
            }
        }
    }
    return 0;
}
