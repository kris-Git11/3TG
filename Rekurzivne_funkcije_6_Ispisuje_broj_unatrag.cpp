#include <iostream>
using namespace std;

int BrojUnatrag ( int x )
{
    cout << x % 10;

    if ( x / 10 > 0 )
    return BrojUnatrag ( x / 10 );
}

int main()
{
    int iBroj;

    cout << "Unesite broj: ";
    cin >> iBroj;

    BrojUnatrag ( iBroj );
}
