#include <stdio.h>
void main()
{

int a,b,c,n;
scanf("%d",&n);

for (a=1;a<n;a++)
{
    for (b=1;b<n;b++)
    {
        for (c=1;c<n;c++)
        {
            printf("%d\n",a,b,c);
        }
    }
}

}

