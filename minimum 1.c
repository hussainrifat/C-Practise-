#include <stdio.h>
int main ()
{
    int i,n,a,min=1001,pos;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if (a<min)
        {
            min=a;
            pos=i;
        }
    }
    printf("Minimum number is %d and position is %d",min,pos);
}
