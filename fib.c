#include <stdio.h>
int main()
{
    int i,a=0,b=1,c=0,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}

