#include <stdio.h>
int main ()
{
    int n,src,i,a,flag=0,pos;
    printf("Enter Search Number ");
    scanf("%d",&src);
    printf("Enter Total Number ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(src==a)
        {
            flag=1;
            pos=i;

        }
    }

    if (flag==1)
    {
        printf("Match ,Position %d",pos);
    }
    else printf("Doesn't Match");
}
