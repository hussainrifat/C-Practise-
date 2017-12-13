#include <stdio.h>
int per (int n)
{
    int fact=1,i;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",per(a)/per(a-b));
}
