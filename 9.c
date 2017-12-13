//9
#include <stdio.h>
int prime (int n)
{
    int i;
    for (i=2;i<sqrt(n);i++)
    {
        if (n%i==0)
            return 1;
    }
     return 0;
}
int main ()
{
    int a;
    scanf("%d",&a);
    if  (prime(a)==1)
        printf("Not Prime");
    else printf("Prime ");
}
