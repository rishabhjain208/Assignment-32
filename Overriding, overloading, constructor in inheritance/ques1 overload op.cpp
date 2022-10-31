#include<iostream>
using namespace std;
class floatt
{
private:
    int a;
public:
    void setdata(int n)
    {
        a = n;

    }
    void getdata()
    {
        cout<<"Result = "<<a<<endl;
    }
    floatt operator +(floatt f)
    {
        floatt temp;
        temp.a = a + f.a;
        return temp;
    }
    floatt operator -(floatt f)
     {
        floatt temp;
        temp.a = a - f.a;
        return temp;
     }
    floatt operator *(floatt f)
    {
         floatt temp;
        temp.a = a * f.a;
        return temp;
    }
     floatt operator /(floatt f)
    {
         floatt temp;
         temp.a = a / f.a;
        return temp;
    }

};
int main()
{
    floatt f1,f2,f3,f4,f5,f6;
    f1.setdata(20);
    f2.setdata(20);
    f3 = f1+f2;
    f3.getdata();
    f4 = f1-f2;
    f4.getdata();
    f5 = f1*f2;
    f5.getdata();
    f6 = f1/f2;
    f6.getdata();
    return 0;
}
