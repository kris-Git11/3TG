#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

struct ocjene_t {
int ocjena;
};

struct ucenici_t {
string ime;
string prezime;
ocjene_t ocjene[5];
float ocjena_prosjek;
} ucenik[5];

int ucenici_dodaj (string linija_iz_datoteke, int ucenik_index)
{
int zadnja_lokacija, prije_lokacija, rbr;
float ocjena_prosjek, ocjena_broj, ocjena_zbroj;
string trenutni_text;
zadnja_lokacija=0;
prije_lokacija=0;
rbr=1;
ocjena_broj=0;
ocjena_zbroj=0;
while (zadnja_lokacija!=linija_iz_datoteke.length())
{
prije_lokacija=zadnja_lokacija;
zadnja_lokacija=linija_iz_datoteke.find(" ",prije_lokacija+1);

if (zadnja_lokacija==-1) zadnja_lokacija=linija_iz_datoteke.length();
trenutni_text=linija_iz_datoteke.substr(prije_lokacija, zadnja_lokacija-prije_lokacija);
switch (rbr)
{
case 1:
cout << "Ime:" << trenutni_text << '\n';
ucenik[ucenik_index].ime=trenutni_text;
break;
case 2:
cout << "Prezime:" << trenutni_text << '\n';
ucenik[ucenik_index].prezime=trenutni_text;
break;
default:
cout << "Ocjena:" << trenutni_text << '\n';
ucenik[ucenik_index].ocjene[(int)ocjena_broj].ocjena=atoi(trenutni_text.c_str());
ocjena_broj=ocjena_broj+1;
ocjena_zbroj=ocjena_zbroj+atoi(trenutni_text.c_str());
break;
}
rbr=rbr+1;
}
ocjena_prosjek=ocjena_zbroj/ocjena_broj;
ucenik[ucenik_index].ocjena_prosjek=ocjena_prosjek;
cout << "Prosjek:" << ocjena_prosjek << '\n';
}

int ucenici_ispisi_najboljeg ()
{
float ocjena_max;
int ocjena_max_index;
ocjena_max=0;

for( int a = 0; a < 4; a = a + 1 ) {
if (ocjena_max<ucenik[a].ocjena_prosjek)
{
ocjena_max=ucenik[a].ocjena_prosjek;
ocjena_max_index=a;
}
}
cout << "Najbolji ucenik je:" << ucenik[ocjena_max_index].ime << " " <<
ucenik[ocjena_max_index].prezime << '\n';
cout << "A prosjek mu je:" << ucenik[ocjena_max_index].ocjena_prosjek << '\n';
}

int main()
{
string file_line;
int rbr;

rbr=0;

ifstream file_ucenici ("ucenici.txt");
if (file_ucenici.is_open())
{
while ( getline (file_ucenici,file_line) )
{
cout << file_line << '\n';
ucenici_dodaj(file_line, rbr);
rbr=rbr+1;
}
file_ucenici.close();
}
else cout << "Datoteku nije moguce otvoriti ...";

ucenici_ispisi_najboljeg();

return 0;
}

/*
int ucenici_prebroji()
{
int rbr;
string file_line;
rbr=0;
ifstream file_ucenici („ucenici.txt“);
if (file_ucenici.is_open())
{
while ( getline (file_ucenici,file_line) )
{
rbr=rbr+1;
}
file_ucenici.close();
}
else cout << „Datoteku nije moguce otvoriti ...“;
return rbr;
}

ucenici_t* ucenici=new ucenici_t[ucenici_prebroji()]; //works fine

*/
