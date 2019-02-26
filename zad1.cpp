#include <bits/stdc++.h>

using namespace std;

struct drzava
{
    string ime, ime_vrh;
    int pov, br_st, visina_vrh;
};

bool usp_st (drzava a, drzava b) {return a.br_st > b.br_st;}
bool usp_vrh (drzava a, drzava b) {return a.visina_vrh > b.visina_vrh;}

int main()
{
    drzava d[5];
    ofstream wr ("C:\\Users\\android\\Desktop\\file.txt");
    for (int i=0; i<5; i++){
        cin >> d[i].ime >> d[i].pov >> d[i].br_st >> d[i].ime_vrh >> d[i].visina_vrh;
        wr << d[i].ime << " " << d[i].pov << " " << d[i].br_st << " " << d[i].ime_vrh << " " << d[i].visina_vrh << endl;
    }
    wr.close();
    ifstream rd ("C:\\Users\\android\\Desktop\\file.txt");
    sort(d, d+5, usp_st);
    cout << "*************************************" << endl;
    cout << d[0].ime << " " << d[0].br_st << endl;
    sort(d, d+5, usp_vrh);
    for (int i=0; i<3; i++){
        cout << d[i].ime << " " << d[i].ime_vrh << " " << d[i].visina_vrh << endl;
    }
}
