#include <iostream>
#include <cstdlib>
using namespace std;

const int iBrojBrojeva = 10;

int compare(const void* a, const void* b)
{
    const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;

	else if (*x < *y)
		return -1;

	return 0;
}

int main()
{
    int iArrBrojevi[iBrojBrojeva];

    cout << "Upisite 10 brojeva: " << endl;

    for (int iBrojac = 0; iBrojac < iBrojBrojeva; iBrojac++)
    {
        cout << iBrojac + 1 << ". broj: ";
        cin >> iArrBrojevi[iBrojac];
    }

    cout << "Prije sortiranja: " << endl;

    for (int iBrojac2 = 0; iBrojac2 < iBrojBrojeva; iBrojac2++)
    {
        cout << iArrBrojevi[iBrojac2] << " ";
    }

    cout << endl;

    qsort(iArrBrojevi, iBrojBrojeva, sizeof(int), compare);

    cout << "Nakon sortiranja: " << endl;

    for (int iBrojac3 = 0; iBrojac3 < iBrojBrojeva; iBrojac3++)
    {
        cout << iArrBrojevi[iBrojac3] << " ";
    }

    return 0;
}
