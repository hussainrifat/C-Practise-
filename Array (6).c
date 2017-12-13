#include <stdio.h>
int main (void )
{
    int ara[]={1,2,3,4,5,6,7,8,9,10},i,j,temp;

    for (i=0,j=9;i<9;i++,j--)
    {
        temp=ara[j];
        ara[j]=ara[i];
        ara[i]=temp;
        printf("%d\n",ara[i]);

    }



}
