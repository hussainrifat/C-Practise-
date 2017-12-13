#include <stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    for (i=1;i<n/2;i++)
    {
        if (n/2%i==0)
            printf("%d\t",i);
    }
    printf("%d",n);
}
