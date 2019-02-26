#include <iostream>
#include <math.h>

template<class T>
class Triangle
{
public:
	Triangle() {}

	T Opseg()	{ return a + b + c; }
	T Povrsina()	{ T s = Opseg() / 2;	return (T)std::sqrt((double)(s * (s - a) * (s - b) * (s - c))); }

	bool isTriangle() { if (this->a + this->b < this->c) return false; else return true; }

	void Unos() { std::cin >> this->a >> this->b >> this->c; }

private:
	T a, b, c;
};

int main()
{
	Triangle<float> t;

	t.Unos();

	std::cout << "Opseg: "		<< t.Opseg()	  << "\n";
	std::cout << "Povrsina: "	<< t.Povrsina()   << "\n";
	std::cout << "isTriangle: " 	<< t.isTriangle() << "\n";

	printf("\n");
	system("pause");
	return 0;
}
