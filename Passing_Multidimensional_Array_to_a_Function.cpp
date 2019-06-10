#include <iostream>
using namespace std;

void vIspis(int x[3][2])
{
    cout << "Ispisujem brojeve: " << endl;

    for (int iBrojac = 0; iBrojac < 3; iBrojac++)
    {
        cout << "Stupac " << iBrojac + 1 << ".: " << endl;

        for (int iBrojac2 = 0; iBrojac2 < 2; iBrojac2++)
        {
            cout << iBrojac2 + 1 << ". broj: " << x[iBrojac][iBrojac2] << endl;
        }
    }
}

int main()
{
    int iArrBrojevi[3][2] = {{3, 4}, {9, 5}, {7, 1}};
    vIspis(iArrBrojevi);
    return 0;
}
