#include <stdio.h>
int main ()
{
    int i,length;
    char str[30];
    gets(str);

    for (i=0,length=0;str[i]!='\0';i++)
    {
        length=length+1;
    }
    printf("Length of %s is %d",str,length);
    return 0;
}
