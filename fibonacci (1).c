#include <stdio.h>
int main ()
{
    int n,a=0,b=1,c=0;
    printf("Enter a Postive Integer Number : ");
    scanf("%d",&n);

    while (c<n)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
