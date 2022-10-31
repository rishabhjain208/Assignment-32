#include<iostream>
using namespace std;
class factorial
{
private:
    int n;
public:
    int i,f = 1;
    factorial(int a)
    {
        n = a;
    }
    factorial(factorial &f2)
    {
        n = f2.n;
    }
    factorial(){}
    void fac()
    {
        for(i = 1; i <= n; i++)
        {
            f = f*i;
        }
    }
    void display()
    {
        cout<<"Factorial of n = "<<f;
    }
};
int main()
{
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    factorial f1(n);
    factorial f3(f1);
    f3.fac();
    f3.display();
    return 0;
}
