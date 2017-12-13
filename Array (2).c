#include <stdio.h>
void main ()
{
    int nm[5],i,sum=0;

    for (i=1;i<4;i++)
    {
        scanf("%d",&nm[i]);
        sum=sum+nm[i];
    }
    printf("%d",sum);

}
