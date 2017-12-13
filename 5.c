#include <stdio.h>
int factorial (int fact)
{
    int f=1,i;
    for (i=1;i<=fact;i++)
    {
        f*=i;
    }
    return f;
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
}
