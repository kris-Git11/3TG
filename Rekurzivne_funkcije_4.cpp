#include <iostream>
#include <math.h>
using namespace std;

int NajveciZajednickiDjelitelj ( int x, int y )
{

    if ( y == 1 ) return x;

    return NajveciZajednickiDjelitelj ( y, x % y );
}

int main()
{
    int Broj1;
    int Broj2;

    cout << "Upisite broj: ";
    cin >> Broj1;
    cout << "Upisite broj: ";
    cin >> Broj2;

    cout << NajveciZajednickiDjelitelj ( Broj1, Broj2 );

    return 0;
}
