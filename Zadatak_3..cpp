#include <iostream>
using namespace std;

int main()
{
    int iPolje[5];
    int iParni[5];
    int iNeparni[5];
    int iBB = 5;
    int iBrojacParnih = 0;
    int iBrojacNeparnih = 0;

    cout << "Unos: " << endl;
    for (int iBrojac = 0; iBrojac < iBB; iBrojac++)
    {
        cin >> iPolje[iBrojac];
    }

    for (int iBrojac2 = 0; iBrojac2 < iBB; iBrojac2++)
    {
        if (iPolje[iBrojac2] % 2 == 0)
        {
            iParni[iBrojac2] = iPolje[iBrojac2];
            iBrojacParnih+=1;
            iNeparni[iBrojac2] = 0;
        }

        else if (iPolje[iBrojac2] % 2 != 0)
        {
            iNeparni[iBrojac2] = iPolje[iBrojac2];
            iBrojacNeparnih+=1;
            iParni[iBrojac2] = 0;
        }
    }

    cout << "Parni:" << endl;
    for (int iBrojac3 = 0; iBrojac3 < iBB; iBrojac3++)
    {
        if (iParni[iBrojac3] != 0)
        cout << iParni[iBrojac3] << endl;

        else
            continue;
    }

    cout << "Neparni:" << endl;
    for (int iBrojac3 = 0; iBrojac3 < iBB; iBrojac3++)
    {
        if (iNeparni[iBrojac3] != 0)
        cout << iNeparni[iBrojac3] << endl;

        else
            continue;
    }

    return 0;
}
