#include <stdio.h>
int main ()
{
    int num[6],i,sum=0;
    for (i=0;i<6;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("%d",sum);
    return 0;
}
