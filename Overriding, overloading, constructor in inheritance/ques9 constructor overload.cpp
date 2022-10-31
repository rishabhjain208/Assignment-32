#include<iostream>
using namespace std;
class shape
{
  private:
  int a,b;
  int r;
  public:
    shape(int R)
    {
        r = R;
    }
    shape(int A, int B)
    {
        a = A;
        b = B;
    }
    shape(shape &ss)
    {
        a = ss.a;
        b = ss.b;
    }
    void areaci()
    {
        cout<<"Area of circle = "<<3.14*r*r<<endl;
    }
    void areare()
    {
        cout<<"Area of Rectangle = "<<a*b<<endl;
    }
    void aretri()
    {
        cout<<"Area of triangle = "<<(a*b)/2<<endl;
    }
};
int main()
{
    shape s(5),s1(3,2);
    shape s2  = s1;
    int ch;
    cout<<"Enter the your choice "<<endl;
    cout<<"1. Area of Circle \n2. Area of Rectangle \n3. Area of Triangle \n4.Exit \n";
    cin>>ch;
    switch(ch)
    {
     case 1:  s.areaci();
              break;
     case 2: s1.areare();
             break;
     case 3: s2.aretri();
             break;
     case 4: exit(0);
             break;
    }
    return 0;
}
