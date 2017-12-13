#include <stdio.h>
int sum (int n)
{
    int res=0;
    while (n>0)
    {
        res=res+n%10;
        n=n/10;
    }
    return res;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
}
