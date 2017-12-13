#include <stdio.h>
int  fact(int n)
{
    int res=1,i;
    for (i=1;i<=n;i++)
    {
        res*=i;
    }
  return res;
}


int main ()
{ int n,r;
    while (scanf("%d%d",&n,&r)==2)
    {
        printf("%d",fact(n)/fact(r));
    }
}
