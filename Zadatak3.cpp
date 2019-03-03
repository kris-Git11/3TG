

#include "pch.h"


#include <iostream>
using namespace std;

#define MAX 10

class ucenik
{
	
private:
	char  ime[30];
	char prezime[30];
	int   ukupno;
	int   pred1[5] = { 2,3,2,3,4 };
	int   pred2[5] = { 4,5,3,4,5 };
	int   pred3[5] = { 2,3,4,2,3 };
	int   pred4[5] = { 3,4,5,2,3 };
	int   pred5[5] = { 3,4,2,3,4 };
	
	
public:
	float Prosjek(float pros)
	{
		if (pred1[5] > 1 && pred2[5] > 1 && pred3[5] > 1 && pred4[5] && pred5[5]) {
			pros = (pred1[5] + pred2[5] + pred3[5] + pred4[5] + pred5[5]) / 5;
		}
	}
	
	void getDetails(void);

	void putDetails(void);
	
};


void ucenik::getDetails(void) {
	cout << "Unesi ime : " ;
	cin >> ime;
	cout << "Unesi prezime : ";
	cin >> prezime;
	cout << " 1 predmet : " << endl;
	for (int i = 0; i < 5; i++) {

		cout << pred1[i] << "  " << endl;
	}
	cout << " 2 predmet : " << endl;
	for (int i = 0; i < 5; i++) {
		cout << pred2[i] << "  " << endl;
	}
	cout << " 3 predmet : " << endl;
	for (int i = 0; i < 5; i++) {
		cout << pred3[i] << "  " << endl;
	}
	cout << " 4 predmet : " << endl;
	for (int i = 0; i < 5; i++) {
		cout << pred4[i] << "  " << endl;
	}
	cout << " 5 predmet : " << endl;
	for (int i = 0; i < 5; i++) {
		cout <<  pred5[i]<<  "  " << endl;
	}
	
}



int main()
{
	ucenik std[MAX];       
	int n, loop;

	cout << "Unesi ukupan broj ucenika: ";
	cin >> n;

	for (loop = 0; loop < n; loop++) {
		cout << "Unesi podatke o ucenicima " << loop + 1 << ":\n";
		std[loop].getDetails();
	}

	cout << endl;

	return 0;
}
