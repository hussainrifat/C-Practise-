#include <stdio.h>
int rev (int n)
{
    int res=0;
    while (n>0)
    {
        res=res*10+n%10;
        n=n/10;
    }
    return res;
}
int main ()
{
    int a;
    scanf("%d",&a);
    printf("%d",rev(a));
}
