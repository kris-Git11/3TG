#include "iostream"
#include "math.h"


using namespace std;

class trokut
{
    private:
    float a,b,c;
    public:
    void set_values(float,float,float);

    float opseg() {return (a+b+c);}

    float povrsina()
    {
        float s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }

    float provjeri()
    {
        if(a+b>c)
        {
            if(b+c>a)
            {
                if(c+a>b)
                    return true;
            }
        }
        return false;
    }



};

void trokut::set_values (float x, float y,float z)
{
    a=x;
    b=y;
    c=z;
}





int main()
{
    trokut tro;
    float a,b,c;
    cout<<"unesite stranice trokuta: "<<endl;
    cin >>a;
    cin >>b;
    cin >>c;
    tro.set_values(a,b,c);

        if (tro.provjeri())
        {
            cout <<"opseg: "<<tro.opseg()<<endl;
            cout <<"povrsina: "<<tro.povrsina()<<endl;

        }
        else
            cout <<"to nije trokut"<<endl;


}
