#include<iostream>
using namespace std;
class addition
{
private :
    int a,b,c;
public:
    int add(int a, int b)
    {
        return a+b;
    }
    int add(int a, int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    addition A;
    int a,b,c;
    cout<<"Enter the value of a and b = ";
    cin>>a>>b;
    cout<<endl;
    cout<<"Sum of Two number is = "<<A.add(a,b)<<endl;
    cout<<endl;
    cout<<"Enter the value of a b and c = ";
    cin>>a>>b>>c;
    cout<<endl;
    cout<<"Sum of Three number is = "<<A.add(a,b,c)<<endl;
    return 0;
}
