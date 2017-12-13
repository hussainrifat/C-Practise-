#include <stdio.h>
int main ()
{int i,n,sum=0;
while (1)
{
scanf("%d",&n);
sum=0;
if (n>0)
   {
       for (i=0;i<10;i++)
    {
        if (n%2==0)
            sum=sum+n;
            n++;
    }
    printf("%d\n",sum);
   }
   else break;

   }


}
