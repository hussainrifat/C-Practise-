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

int main ()
{
    int a,tes;
    scanf("%d",&tes);
    while (tes--)
    {
    scanf("%d",&a);
    printf("factorial of %d is %d\n\n",a,factorial(a));
    }
}
