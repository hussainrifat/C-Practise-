#include <stdio.h>
int main ()
{
    int i,j,n,a,temp,sum=0;

    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        scanf("%d",&a);
        for (j=1; j<=n; j++)
        {
            if (a%i==0)
            sum+=i;
        }

        if (sum==n)
            printf("Case # %d:%d is Perfect\n",i,a);
        else printf("Case # %d:%d isn't perfect\n",i,a);


    }
}
