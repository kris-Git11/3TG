#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using std :: setw;
using namespace std;

double standardmj(double vrj, string vrmj)
{
    if (vrmj == "mg")
        {
            return vrj / 1000;
        }
    else if (vrmj == "g")
        {
            return vrj;
        }
    else if (vrmj == "dag")
        {
            return vrj / 0.1;
        }
    else if (vrmj == "kg")
        {
            return vrj / 0.001;
        }
    else if (vrmj == "dm3" || vrmj == "dm^3")
        {
            return vrj / 1000;
        }
    else if (vrmj == "m3" || vrmj == "m^3")
        {
            return vrj;
        }
    else if (vrmj == "g/mol" || vrmj == "gmol^-1")
        {
            return vrj;
        }
    else if (vrmj == "kg/mol" || vrmj == "kgmol^-1")
        {
            return vrj / 0.001;
        }
    else
        {
            return vrj;
        }
}

string mjjedinicavar (char mjjed)
{
    if (mjjed == 'm')
        {
            return "Upisite mjernu jedinicu (mg, g, dag, kg): ";
        }
    else if (mjjed == 'M')
        {
            return "Upisite mjernu jedinicu (g/mol, kg/mol): ";
        }
    else if (mjjed == 'V')
        {
            return "Upisite mjernu jedinicu (dm3, m3): ";
        }
    else if (mjjed == 'n')
        {
            return "Upisite mjernu jedinicu (mol): ";
        }
    else
        {
            return "-1";
        }
}

string MjernaJedinicaPreracun (char cSlovo1Preracun, char cSlovo2Preracun)
{
    if (cSlovo1Preracun == 'm' && cSlovo2Preracun == 'n')
        {
            return "Dozvoljena mjerna jedinica je: kg/mol.";
        }
    else if (cSlovo1Preracun == 'm' && cSlovo2Preracun == 'M')
        {
            return "Ne postoji druga mjerna jedinica.";
        }
    else if (cSlovo1Preracun == 'M' && cSlovo2Preracun == 'n')
        {
            return "Dozvoljene mjerne jedinice su: mg, dag, kg.";
        }
    else if (cSlovo1Preracun == 'M' && cSlovo2Preracun == 'm')
        {
            return "Ne postoji druga mjerna jedinica.";
        }
    else if (cSlovo1Preracun == 'n' && cSlovo2Preracun == 'm')
        {
            return "Dozvoljena mjerna jedinica je: kg/mol.";
        }
    else if (cSlovo1Preracun == 'n' && cSlovo2Preracun == 'M')
        {
            return "Dozvoljene mjerne jedinice su: mg, dag, kg.";
        }
    else if (cSlovo1Preracun == 'n' && cSlovo2Preracun == 'L')
        {
            return "Ne postoji mjerna jedinica.";
        }
    /*else if (cSlovo1Preracun == 'n' && cSlovo2Preracun == 'Vm')
        {
            return "Dozvoljena mjerna jedinica je: dm3.";
        }*/


}

/*
mg - 1000
g - 1
dag - 0,1
kg - 0,001

dm3 - 1000
m3 - 1

g/mol - 1
kg/mol - 0,001
*/

int main()
{
    char slovo1;
    string mj1;
    char slovo2;
    string mj2;
    double vrij1;
    double vrij1stnd;
    double vrij2;
    double vrij2stnd;
    string OKvalues;



    poc:
    cout << endl;
    cout << "( m, M, n, N, V ): ";
    cin >> slovo1;
    OKvalues = "mMnNV";
    if (OKvalues.find(slovo1)>OKvalues.length()) goto poc;
    pocvrij:
    cout << "Upisite vrijednost bez mjerne jedinice te varijeble: ";
    cin >> vrij1;

/*
    if ((vrij1 / 1)==0)
        {
        //vrij1 = NULL;
        goto pocvrij;
        }
*/

    if (mjjedinicavar(slovo1)!="-1")
        {
        cout << mjjedinicavar(slovo1);
        cin >> mj1;
        cout << endl;
        vrij1stnd = standardmj(vrij1,mj1);
        }

    switch (slovo1)
    {
    case 'm':
        {
            poc_m:
            cout << "( n, M ): ";
            cin >> slovo2;
            OKvalues = "nM";
            if (OKvalues.find(slovo2)>OKvalues.length()) goto poc_m;
            cout << "Upisite vrijednost bez mjerne jedinice te varijeble: ";
            cin >> vrij2;
            cout << mjjedinicavar(slovo2);
            cin >> mj2;
            vrij2stnd == standardmj(vrij2,mj2);

            switch (slovo2)
            {
            case 'n':
                {
                    double M = vrij1stnd / vrij2stnd;
                    cout << endl;
                    cout << "M = m / n" << endl;
                    cout << "M = " << M << " gmol^-1" << endl;
                }
            case 'M':
                {
                    double n = vrij1stnd / vrij2stnd;
                    cout << vrij1stnd << "  " << vrij2stnd << endl;
                    cout << endl;
                    cout << "n = m / M" << endl;
                    cout << "n = " << n << " mol" << endl;
                }
            }
        }
    case 'M' :
        {
            poc_M:
            cout << "( n, m ): ";
            cin >> slovo2;
            OKvalues = "nm";
            if (OKvalues.find(slovo2)>OKvalues.length()) goto poc_M;
            cout << "Upisite vrijednost bez mjerne jedinice te varijeble: ";
            cin >> vrij2;
            cout << mjjedinicavar(slovo2);
            cin >> mj2;
            vrij2stnd == standardmj(vrij2,mj2);

            switch (slovo2)
            {
            case 'n':
                {
                    double m = vrij1stnd * vrij2stnd;
                    cout << endl;
                    cout << "m = M * n" << endl;
                    cout << "m = " << m << " g" << endl;
                }
            case 'm':
                {
                    double n = vrij2stnd / vrij1stnd;
                    cout << endl;
                    cout << "n = m / M" << endl;
                    cout << "n = " << n << " mol" << endl;
                }
            }
        }
    case 'n' :
        {
            poc_n:
            cout << "( m, M, L, Vm ): ";
            cin >> slovo2;
            OKvalues = "nMLVm";
            if (OKvalues.find(slovo2)>OKvalues.length()) goto poc_n;
            cout << "Upisite vrijednost bez mjerne jedinice te varijeble: ";
            cin >> vrij2;
            cout << mjjedinicavar(slovo2);
            cin >> mj2;
            vrij2stnd == standardmj(vrij2,mj2);

            switch (slovo2)
            {
            case 'm':
                {
                    double M = vrij2stnd / vrij1stnd;
                    cout << endl;
                    cout << "M = m / n" << endl;
                    cout << "M = " << M << " gmol^-1" << endl;
                }
            case 'M':
                {
                    double m = vrij1stnd * vrij2stnd;
                    cout << endl;
                    cout << "m = n * M" << endl;
                    cout << "m = " << m << " g" << endl;
                }
            case 'L':
                {
                    double N = vrij1stnd * vrij2stnd;
                    cout << endl;
                    cout << "N = n * L" << endl;
                    cout << "N = " << N << endl;
                }
            /*case 'Vm':
                {
                    double V = vrij1stnd * 22.414;
                    cout << endl;
                    cout << "V = n * Vm" << endl;
                    cout << "V = " << V << " m^3" << endl;
                }*/
            }
        }
    case 'N' :
        {
            cout << "Vrijednost Avogadrove konstante: L = 6.022 * 10^23 mol^-1" << endl;
            double n = (vrij1 / 6.022e023);
            cout << endl;
            cout << "n = N / L" << endl;
            cout << "n = " << n << " mol" << endl;
        }
    case 'V' :
        {
            cout << "Vrijednost molarnog volumena: Vm = 22.414 m^3mol^-1" << endl;
            double n = vrij1 / 22.414;
            cout << endl;
            cout << "n = V / Vm" << endl;
            cout << "n = " << n << " mol" << endl;
        }
    }



    goto poc;
    return 0;
}
