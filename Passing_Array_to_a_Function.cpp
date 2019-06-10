#include <iostream>
using namespace std;

void vIspis(int x[5])
{
    cout << "Ispisujem ocijene: " << endl;

    for (int iBrojac = 0; iBrojac < 5; iBrojac++)
    {
        cout << "Student " << iBrojac + 1 << ": " << x[iBrojac] << endl;
    }
}

int main()
{
    int iArrOcijene[5] = {88, 76, 90, 61, 69};
    vIspis(iArrOcijene);
    return 0;
}
