#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	int random = rand();

	cout << "Seed = " << time(0) << endl;
	cout << "Random number = " << random << endl;
    return 0;
}
