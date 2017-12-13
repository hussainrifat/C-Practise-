#include <stdio.h>
int main ()
{
    int x,rem,temp;

scanf("%d",&x);
    while (x>0)
    {
         rem=x%10;
         temp=rem;
         printf("%d",temp);
         x=x/10;
    }

}
