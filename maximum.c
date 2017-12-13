#include <stdio.h>
int main ()
{
    int i,n,a,max=0,pos;

        for (i=1;i<=n;i++)
        {
            scanf("d",&a);

            if (max<a)
            {max=a;
            pos=i;
            }
        }
        printf("Maximum Number is %d and Position is %d",max,pos);
return 0;
}


