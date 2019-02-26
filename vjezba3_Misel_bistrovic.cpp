#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

class trokut {
private:
	float a, b, c, s;

public:

	void citaj() {cin >> a >> b >> c;};
	bool provjeri()
	{
	    if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            return true;
        }
    };
	double opseg() {
	     return a + b + c;
	     };
	double povrsina()
        {
	    return sqrt ((((a+b+c)/2)*(((a+b+c)/2) - a)*(((a+b+c)/2) - b)*(((a+b+c)/2) - c)));
	    };
};



int main()
{
	trokut T;
	T.citaj();
	if (T.provjeri())
	{
		cout << "Opseg je " << T.opseg() << endl;
		cout << "Povrsina je " << T.povrsina() << endl;
	}

	system("pause");
    return 0;
}

