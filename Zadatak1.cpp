#include <iostream>
#include <cmath>

using namespace std;

class Trokut
{
private:
	double a, b, c;

public:
	void seta(double a1) { a = a1; }
	void setb(double b1) { b = b1; }
	void setc(double c1) { c = c1; }

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
	double a, b, c;

	cin >> a >> b >> c;

	Trokut T;

	if (a + b <= c) return 0;

	T.seta(a);
	T.setb(b);
	T.setc(c);

	cout << "Opseg: " << T.opseg() << endl << "Povrsina: " << T.povrsina() << endl;

	system("pause");
	return 0;
}