#include <stdio.h>
int factorial (int n)
{
    int fact=1,i;
    for (i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int p,r;
    scanf("%d%d",&p,&r);
    printf("%d\n\n",factorial(p)/factorial(p-r));
}
