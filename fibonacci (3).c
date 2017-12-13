#include <stdio.h>
int main (void)
{
    int a=0,b=1,c=0,i,n;
    printf("Enter a Value ");
    scanf("%d",&n);
{


    for (i=1;i<=n;i++)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
}

}
