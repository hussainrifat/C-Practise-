#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s1,s2;
    int asc;
    getline(cin,s1);
   for (int i=0;i<s1.length();i++) //string to asci
    {
       asc=s1[i];
   }
asc+=3;

s2=s2[asc];
cout<<s2;
}



