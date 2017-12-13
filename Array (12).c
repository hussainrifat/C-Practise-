#include <stdio.h>
int main ()
{
    int ar[15],i,pos;
    printf("Enter Elements ");
    for (i=0; i<15; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter Position You want to delete : ");
    scanf("%d",&pos);
    for (i=pos-1; i<15; i++)
    {
        ar[i]=ar[i+1];
    }

    for (i=0; i<15; i++)
    {
        printf("%d",ar[i]);
    }
}
