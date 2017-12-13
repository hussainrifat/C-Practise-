#include<stdio.h>
int main ()
{
    int i,j,length;
    char a[30] = "Bangla",b[30] = "Desh";

    length=6;
    for(i=length,j=0;b[j] != '\0' ;i++,j++)
    {
         a[i]=b[j];
}

printf ("%s",a);
}
