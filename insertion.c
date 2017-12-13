#include <stdio.h>
int main ()
{
    int ar[100],n,c,d,position,swap;
    printf("Enter Number of Element:");
    scanf("%d",&n);

    for (c=0;c<n;c++)
    {
        scanf("%d",&ar[c]);
    }

    for (c=0;c<n-1;c++)
    {
        position=c;
        for (d=c+1;d<n;d++)
        {
            if (ar[position]>ar[d])
            {
                position=d;
            }
            if (position!=c)
            {
                swap=ar[c];
                ar[c]=ar[position];
                ar[position]=swap;
            }
        }
    }

    printf("List ");
    for (c=0;c<n;c++)
    {
        printf("%d ",ar[c]);
    }
}
