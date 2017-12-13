#include <iostream>
using namespace std;

class complex1
{
public:
    int a,b,c,d;

    void getmark()
    {
        cin>>a>>b;
    }
void display()
{
    cout<<a<<b;
}
    complex1 operator+(complex1 ob)
    {
        complex1 t;
        t.a=a+ob.a;
        t.b=b+ob.b;

    }
};

int main()
{
    complex1 ob1,ob2,result;
    ob1.getmark();
    ob2.getmark();

    result=ob1+ob2;
result.display();


}
