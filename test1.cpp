#include <iostream>
using namespace std;

class Radnik
{
public:
  string ime;
  string prezime;
  int primanja;
  Radnik()
  {
    int p[]={5400,4500,5000};
    int s4=5400+4500+5000;
    ime="ivo";
    prezime="benko";
    primanja=s4;
  }

};

int main()
{
  Radnik radnik1;
  Radnik radnik2;
  Radnik radnik3;
  int primanja[3];
  int primanja2[3];
  int primanja3[3];
  int s=0;
  int s2=0;
  int s3=0;
  char ime[10];
  char prezime[10];
  cout<<"unesi ime i prezime radnika1: "<<endl;
  cin>>ime;
  cin>>prezime;

  //cout<<"ime radnika1: "<<endl;
  radnik1.ime=ime;
  //cout<<radnik1.ime;
  //cout<<"prezime radnika2: "<<endl;
  radnik1.prezime=prezime;

  cout<<"primanja za posljednja 3 mjeseca"<<endl;
  for(int i=0;i<3;i++)
  {
    cin>>primanja[i];
    s+=primanja[i];
  }
  radnik1.primanja=s;


  char ime2[10];
  char prezime2[10];
  cout<<"unesi ime i prezime radnika2: "<<endl;
  cin>>ime2;
  cin>>prezime2;

   radnik2.ime=ime2;
  radnik2.prezime=prezime2;
  cout<<"primanja za posljednja 3 mjeseca"<<endl;
  for(int i=0;i<3;i++)
  {
    cin>>primanja2[i];
    s2+=primanja2[i];
  }
   radnik2.primanja=s2;


  char ime3[10];
  char prezime3[10];
  cout<<"unesi ime i prezime radnika3: "<<endl;
  cin>>ime3;
  cin>>prezime3;

   radnik3.ime=ime3;
  radnik3.prezime=prezime3;
  cout<<"primanja za posljednja 3 mjeseca"<<endl;
  for(int i=0;i<3;i++)
  {
    cin>>primanja3[i];
    s3+=primanja3[i];
  }
   radnik3.primanja=s3;
   cout<<"radnici su: "<<endl;

  cout<<radnik1.ime<<endl;
  cout<<radnik1.prezime<<endl;
  cout<<radnik1.primanja<<endl;

  cout<<radnik2.ime<<endl;
  cout<<radnik2.prezime<<endl;
  cout<<radnik2.primanja<<endl;

  cout<<radnik3.ime<<endl;
  cout<<radnik3.prezime<<endl;
  cout<<radnik3.primanja<<endl;

  Radnik r;
  cout<<r.ime<<endl;
  cout<<r.prezime<<endl;
  cout<<r.primanja<<endl;

  cout<<"najveca primanja: "<<endl;
  int najveca_p=0;
  if(radnik1.primanja<radnik2.primanja)
  {
    najveca_p=radnik2.primanja;
  }
  else{najveca_p=radnik1.primanja;}
  if(radnik1.primanja<radnik3.primanja||radnik1.primanja>radnik2.primanja)
  {
    najveca_p=radnik3.primanja;
  }
  else{najveca_p=radnik1.primanja;}
  if(radnik2.primanja<radnik3.primanja||radnik1.primanja<radnik2.primanja)
  {
    najveca_p= radnik3.primanja;
  }
  else{najveca_p=radnik2.primanja;}
  if(najveca_p<r.primanja)
  {
    cout<<r.primanja;
  }
  else{
    cout<<najveca_p;
  }







  return 0;
}
