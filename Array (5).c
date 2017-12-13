#include <stdio.h>
int main ()
{
    int ara[]={10,20,30,40,50,60,70,80,90,100};
    int ara2[10];
    int i,j;
    for (i=0,j=9;i<10;i++,j--)
    {
        ara2[j]=ara[i];
           printf("%d\n",ara2[j]);
    }


    return 0;
}
