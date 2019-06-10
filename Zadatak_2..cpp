#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int b[5];
    int iBB = 6;

    cout << "Unos: " << endl;
    cout << "a: " << endl;
    for (int iBrojac = 0; iBrojac < iBB; iBrojac++)
    {
        cin >> a[iBrojac];
    }

    cout << "b: " << endl;
    for (int iBrojac = 0; iBrojac < iBB; iBrojac++)
    {
        cin >> b[iBrojac];
    }

    cout << "Max:" << endl;
    for (int iBrojac2 = 0; iBrojac2 < iBB; iBrojac2++)
    {
        cout << max(a[iBrojac2], b[iBrojac2]) << endl;
    }

    return 0;
}
