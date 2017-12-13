#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
            printf("Maximum Number is %d",a);
        else  printf("Maximum Number is %d",c);
    }
    else  if (b>c)
    {
        if (b>a)
            printf("Maximum Number is %d",b);
        else  printf("Maximum Number is %d",a);
    }

}
