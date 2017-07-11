#include<iostream>
using namespace std;

class Complex
{
    int a,b;
public:
    Complex()
    {
        a=0;
        b=0;
    }
    Complex(int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"\n Real Part is "<<a<<"\t Imaginary part is "<<b;
    }
    void getdata()
    {
        cout<<"\n Enter Real and Imaginary Part";
        cin>>a>>b;
    }
    friend Complex operator +(Complex c1, Complex c2);

};
Complex operator +(Complex c1, Complex c2)
{
    Complex c3;
    c3.a=  c1.a+c2.a;
    c3.b= c1.b+c2.b;
    return c3;
}
int main()
{
    Complex c1, c2, c4;
    c1.getdata();
    c2.getdata();
    c4= c1 +c2;
    return 0;
}
