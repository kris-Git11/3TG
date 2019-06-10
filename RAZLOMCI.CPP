#include <iostream>
using namespace std;

class Razlomak
{
    public:
        int brojnik, nazinik;
        Razlomak () {};
        Razlomak (int,int);
        Razlomak operator+ (Razlomak);
        Razlomak operator- (Razlomak);
        Razlomak operator* (Razlomak);
        Razlomak operator/ (Razlomak);
};
Razlomak::Razlomak (int a, int b)
{
    brojnik = a;
    nazinik = b;
}

Razlomak Razlomak::operator+ (Razlomak vek)
{
    Razlomak v;
    v.brojnik = brojnik + vek.brojnik;
    v.nazinik = nazinik + vek.nazinik;
    return v;
}

Razlomak Razlomak::operator- (Razlomak vek)
{
    Razlomak v;
    v.brojnik = brojnik - vek.brojnik;
    v.nazinik = nazinik - vek.nazinik;
    return v;
}

Razlomak Razlomak::operator* (Razlomak vek)
{
    Razlomak v;
    v.brojnik = brojnik * vek.brojnik;
    v.nazinik = nazinik * vek.nazinik;
    return v;
}

Razlomak Razlomak::operator/ (Razlomak vek)
{
    Razlomak v;
    v.brojnik = brojnik * vek.nazinik;
    v.nazinik = nazinik * vek.brojnik;
    return v;
}
int main ()
{
    Razlomak a (3,1);
    Razlomak b (1,2);
    Razlomak c, d, e, f;
    c = a + b;
    cout << c.brojnik << "," << c.nazinik << endl;
    d = a - b;
    cout << d.brojnik << "," << d.nazinik << endl;
    e = a * b;
    cout << e.brojnik << "," << e.nazinik << endl;
    f = a / b;
    cout << f.brojnik << "," << f.nazinik << endl;
    return 0;
}
