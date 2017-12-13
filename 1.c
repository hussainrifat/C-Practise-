#include <stdio.h>
main (void)
{
    int x,rem,sum=0;
    scanf("%d",&x);

    while (x>0)
    {
        //123
        rem=x%10;
        sum=sum+rem ;
        x=x/10;
    }
    printf("Sum is %d",sum);
}
