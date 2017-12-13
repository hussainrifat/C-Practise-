#include <stdio.h>
int fib (int n)
{
      int i,a=0,b=1,c=0;
    for (i=1;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
    }
    return c;
}
int main()
{
    int n,c;
    scanf("%d",&n);
    n=fib(n);
    printf("%d",n);
}
