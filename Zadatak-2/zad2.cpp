#include <bits/stdc++.h>

using namespace std;

class Trokut
{
private:
    float a, b, c;
public:
    void ucitaj(float a_, float b_, float c_) {
        a = a_; b = b_; c = c_;
    }
    float povrsina()
    {
        float s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    float opseg()
    {
        return a+b+c;
    }
    bool provjeri()
    {
        if (a+b > c){
            if (b+c > a){
                if (a+c > b){
                    return true;
                }
            }
        }
        return false;
    }

};

int main()
{
    Trokut tr;
    int a, b, c;
    cin >> a >> b >> c;
    tr.ucitaj(a, b, c);
    if (tr.provjeri()){
        cout << "Povrsina: " << tr.povrsina() << endl;
        cout << "Opseg: " << tr.opseg() << endl;
    }
    else {
        cout << "Nije trokut!" << endl;
    }
}
