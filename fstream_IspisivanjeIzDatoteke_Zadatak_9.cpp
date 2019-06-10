#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main ()
{
    string redak;

    ifstream test ("fstream_IspisivanjeIzDatoteke_Zadatak_9.cpp");
    if (test.is_open())
        {
            while (!test.eof())
            {
                getline (test,redak);
                char * ACslova = new char [redak.length()+1];
                strcpy(ACslova, redak.c_str());
                char * p = strtok (ACslova," ");
                while (p != 0)
                {
                    cout << p << '\n';
                    p = strtok(NULL, " ");
                }

                delete[] ACslova;
            }
            test.close();
        }
    else
        cout << "Ne mogu otvoriti file." << endl;

    return 0;
}
