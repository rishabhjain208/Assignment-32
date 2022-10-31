#include<iostream>
using namespace std;
class rectangle
{
public:
    void area(int a,int b)
    {
        cout<<"Area of Rectangle of int data type = "<<(a*b)<<endl;
     //   return (a*b);

    }
    void area(double a,double b)
    {
        //return
        cout<<"Area of Rectangle of float data type = "<<(a*b);

    }

};
int main()
{
    rectangle r;
    r.area(3,8);
    r.area(2.0,3.2);
    return 0;
}
