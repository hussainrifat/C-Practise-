#include <stdio.h>

int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main ()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d",sum(n,m));
}
