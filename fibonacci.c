#include <stdio.h>

double fibonacci(int n)
{
    if (n==0 ||n==1)
    {
        return n;
    }
    else return (fibonacci(n-2)+fibonacci(n-1));
}
void main()
{
    double fib;
    int n,i;
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        fib=fibonacci(i);
        printf("%0.f ",fib);
    }
}
