#include <iostream>
#include <cmath>

using namespace std;

class Trokut
{
private:
	double a, b, c;

public:
	void set() {cin >> a >> b >> c; }
	
	bool provjera() {if (a + b > c) return true;}
	
	double opseg() { return a + b + c; }

	double povrsina()
	{
		double s, Area;
		s = (a + b + c) / 2;
		Area = sqrt(s*(s - a)*(s - b)*(s - c)); 
		return Area;
	}
};

int main()
{

	Trokut T;

	T.set();
	T.provjera();

	cout << "Opseg: " << T.opseg() << endl << "Povrsina: " << T.povrsina() << endl;

	return 0;
}
