#include <iostream>
using namespace std;

int main()
{
    int x[3];
    int iBB = 4;

    cout << "Unos: " << endl;
    for (int iBrojac = 0; iBrojac < iBB; iBrojac++)
    {
        cin >> x[iBrojac];
    }

    cout << "Parni:" << endl;
    for (int iBrojac2 = 0; iBrojac2 < iBB; iBrojac2++)
    {
        if (x[iBrojac2] % 2 == 0)
        cout << x[iBrojac2] << endl;
    }

    cout << "Pozitivni:" << endl;
    for (int iBrojac3 = 0; iBrojac3 < iBB; iBrojac3++)
    {
        if (x[iBrojac3] > 0)
        cout << x[iBrojac3] << endl;
    }

    return 0;
}
