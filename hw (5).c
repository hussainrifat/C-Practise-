#include <stdio.h>

int main ()
{
    int ar[100],n,c,d,swap;
    scanf("%d",&n);

    for (c=0;c<n;c++)
    {
        scanf("%d",&ar[c]);
    }


    for (c=0;c<n;c++)
    {
        d=c;
        while(d>0 && ar[d]<ar[d-1])
        {
            swap=ar[d];
            ar[d]=ar[d-1];
            ar[d-1]=swap;
    d--;    }
    }
    for (c=0;c<n;c++)
    {
        printf("%d ",ar[c]);
    }
}
