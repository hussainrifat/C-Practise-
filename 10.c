#include <stdio.h>
int divisor (int n)
{
    int i;
    for (i=1;i<=sqrt(n);i++)
    {
        if (n%i==0)


        if (n%i==i)
    }
     return i;
}
int main()
{
    int a;
    scanf("%d",&a);
    if (divisor(a)==1)
        printf("%d",divisor(a));
    if (divisor(a)==0)
        printf("%d",divisor(a));

}
