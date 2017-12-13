#include <iostream>
using namespace std;

class mark
{
public:
    int mid,fin,ct;
    void get_mark()
    {
        cout<<"Enter Mark: ";
        cin>>mid>>fin>>ct;
    }
};

class result:public mark {

float total;
    public:
void display(void)
{
total=mid+fin+ct;

    cout<<"Total is : "<<total;
}

};

int main ()
{
    result ob1;
    ob1.get_mark();
    ob1.display();
    return 0;
}
