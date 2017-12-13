#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    int id1,id2;
    ofstream ofile("Cprogram.txt");
    cin>>id1;
    ofile<<id1;
    ofile.close();
    ifstream ifile("Cprogram.txt");
    ifile>>id2;
    cout<<id2;
    ifile.close();
}

