#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        int a = 5 ,b = 3 ;
        cout<<"Add = "<<a+b<<endl<<endl;
    }
};
class B
{
public:
    B()
    {
       int a = 5,b = 3;
       cout<<"sub = "<<a-b<<endl<<endl;
    }

};
class C : public A,public B
{
public:
    C()
    {
       int a = 5,b = 3;
       cout<<"multiply = "<<a*b<<endl<<endl;
    }
};
int main()
{
    cout<<"a = 5 and b = 3"<<endl<<endl;
    C b1;

    return 0;
}
