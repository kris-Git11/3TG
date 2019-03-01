#include "iostream"
#include "algorithm"
#include "fstream"

using namespace std;

//PRVI DIO ZADATKA

struct Drzava
{
    string naziv_drzave[5];
    double povrsina_drzave[5];
    int broj_stanovnika[5];
    string naziv_vrha[5];
    double visina_vrha[5];

};


int main()
{

    Drzava lol;
    const int drzava=5;

    fstream myFile;
    myFile.open("19.2.2019.txt");

    for (int i=0;i<5;i++)
    {
        cout <<"naziv drzave: ";
        cin >> lol.naziv_drzave[i];

        cout <<"povrsina drzave: ";
        cin >>lol.povrsina_drzave[i];

        cout <<"broj stanovnika te drzave: ";
        cin >>lol.broj_stanovnika[i];

        cout <<"naziv najviseg vrha: ";
        cin >>lol.naziv_vrha[i];

        cout <<"visina najviseg vrha: ";
        cin>>lol.visina_vrha[i];

    }


    for (int i=0;i<5;i++)
    {
        myFile <<"naziv drzave: "<<lol.naziv_drzave[i];
        myFile <<"\nPovrsina drzave: "<<lol.povrsina_drzave[i];
        myFile <<"\nBroj stanovnika drzave: "<<lol.broj_stanovnika[i];
        myFile <<"\nNaziv vrha: "<<lol.naziv_vrha[i];
        myFile <<"\nVisina vrha: "<<lol.visina_vrha[i] <<"\n\n";
    }

    myFile.close();

//DRUGI DIO ZADATKA


    Drzava dio;
    ifstream myFile1;
    string citac;
    myFile1.open("19.2.2019.txt");

    for (int i=0;i<5;i++)
    {
        myFile1>>citac>>citac>>dio.naziv_drzave[i];
        myFile1>>citac>>citac>>dio.povrsina_drzave[i];
        myFile1>>citac>>citac>>citac>>dio.broj_stanovnika[i];
        myFile1>>citac>>citac>>dio.naziv_vrha[i];
        myFile1>>citac>>citac>>dio.visina_vrha[i];
    }
    myFile1.close();

//NAJVISE STANOVNIKA
    int najveci=0;
    int pamti=0;
    for (int i=0;i<5;i++)
    {
        if(dio.broj_stanovnika[i]>najveci)
        {
            pamti=i;
            najveci=dio.broj_stanovnika[i];
        }
    }

    cout <<"Najvise stanovnika ima drzava "<<dio.naziv_drzave[pamti]<<" i iznosi "<<dio.broj_stanovnika[pamti]<<" stanovnika"<<endl;

//3 NAJVEĆA VRHOVA
int temp;
string temp1,temp2;
 for(int i=0;i<5;i++)
 {
    for(int j=0;j<5-i;j++)
    {
        if(dio.visina_vrha[j]<dio.visina_vrha[j+1])
            {
                temp=dio.visina_vrha[j]; //switch brojika
                dio.visina_vrha[j]=dio.visina_vrha[j+1];
                dio.visina_vrha[j+1]=temp;

                temp1=dio.naziv_drzave[j];//switch imena drzava
                dio.naziv_drzave[j]=dio.naziv_drzave[j+1];
                dio.naziv_drzave[j+1]=temp1;

                temp2=dio.naziv_vrha[j];//switch imena planina
                dio.naziv_vrha[j]=dio.naziv_vrha[j+1];
                dio.naziv_vrha[j+1]=temp2;
            }
    }

 }
 for (int i=0;i<3;i++)
     cout <<"ime drzave: "<<dio.naziv_drzave[i]<<" ,ime vrha: "<<dio.naziv_vrha[i]<<" ,visina: "<<dio.visina_vrha[i]<<" m"<<endl;

}
/*
Hrvatska
56.594
4154000
Dinara
1831

Njemacka
357.386
82790000
Zugspitze
2962

Engleska
130.395
54790000
Scafell_Pike
978

Rusija
17100000
144500000
Elbrus
5642

Svicarska
41.285
8420000
Dufour
4633
*/
