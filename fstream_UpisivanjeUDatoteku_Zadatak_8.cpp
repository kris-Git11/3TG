#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream test;
    test.open("TEST.txt");
    for (int iBrojac = 0; iBrojac <= 100; iBrojac++)
        test << iBrojac << '\n';
    test.close();
    return 0;

}
