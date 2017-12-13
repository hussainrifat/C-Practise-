#include <iostream>
using namespace std;

class base
{
public:
    int roll_number;
    void get_roll(int a)
    {
        roll_number=a;
    }
    void put_number ()
    {
        cout<<"Roll NUmber: "<<roll_number<<endl;
    }

};

class test:public base
{
protected:
    float sub1;
    float sub2;
    public:
    void get_mark(float a,float b)
    {
        sub1=a;
        sub2=b;
    }
    void show_mark()
    {
        cout<<"Mark is Sub1 is : "<<sub1;
        cout<<"Mark is Sub2 is : "<<sub2;
    }
};

class result:public test
{
    float total;
public:
    void display()
    {
        total=sub1+sub2;
        put_number();
        show_mark();
        cout<<"Total is: "<<total;
    }
};
int main ()
{
result ob1;
    ob1.get_roll(12);
    ob1.get_mark(123.4,234.3);
    ob1.display();
}
