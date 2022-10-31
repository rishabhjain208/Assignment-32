#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"Constructor of class A"<<endl;
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout<<"Constructor of class B"<<endl;
    }
};
class C : virtual public B
{
public:
    C()
    {
        cout<<"Constructor of class C"<<endl;
    }
};
int main()
{
    // A a;
   // B b;
    C c;
    return 0;
}