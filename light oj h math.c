#include <stdio.h>
int main ()
{
    int a,b,c,i,n;
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {

        scanf("%d%d%d",&a,&b,&c);
        if (a*a==b*b+c*c)
        {
            printf("Case %d: Yes\n",i);
        }

        else if  (b*b==a*a+c*c)
        {
            printf("Case %d: Yes\n",i);
        }


         else if  (c*c==a*a+b*b)
        {
            printf("Case %d: Yes\n",i);
        }
        else  printf("Case %d: No\n",i);


    }
}
