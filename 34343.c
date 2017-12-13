#include <stdio.h>
int main ()

{
    int i,n,c,d;
    double a,b,e;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%lf %l
              f",&a,&b);
        c=a/2;
        d=b/2;
        e=c+d;
        printf("Case # %d: %.1lf\n",i,e);
    }
}
