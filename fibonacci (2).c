#include <stdio.h>
int main (void)
{
    int a=0,b=1,c=0,sum=0,i,n;
    printf("Enter a Value ");
    scanf("%d",&n);
{
    for (i=1;i<=n;i++)
    {

        a=b;
        b=c;
        c=a+b;

    }
         sum=sum+c;
         printf("%d\n",sum);
}

}
