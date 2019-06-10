#include <iostream>
using namespace std;

int iPotenciranje ( int B, int E )
{
    if ( E == 1 )
    return B;

    else if ( E == 0 )
    return 1;

    return B * iPotenciranje ( B, E - 1 );
}

int main()
{
    int iBroj;
    int iEksponent;

    cout << "Unesite broj: ";
    cin >> iBroj;

    cout << "Unesite eksponent: ";
    cin >> iEksponent;

    int iRezultat = iPotenciranje ( iBroj, iEksponent );

    cout << "Rezultat potenciranja broja " << iBroj << " sa " << iEksponent << " je " << iRezultat << "." << endl;

    return 0;
}
