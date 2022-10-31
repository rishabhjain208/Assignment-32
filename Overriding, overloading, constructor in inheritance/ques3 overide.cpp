#include<iostream>
using namespace std;
class animal
{
public:
    virtual void sound()
    {
        cout<<"Dog Bark"<<endl;
    }
};
class dog : public animal
{
  public:
    void sound()
    {
        cout<<"A Dog Bark"<<endl;
    }
};
int main()
{
    dog d1;
    animal a1;
    dog &d = d1;
    animal &a = d1;
    d.sound();
    //a  = d1;
    a.sound();

    return 0;
}
