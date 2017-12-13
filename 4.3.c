//Write a program that read two numbers and display minimum
#include <stdio.h>
int minimum (int a,int b)
{

    if (a<b)
        return 0;
    else
        return 1;
}

int main()
{
    int c,d;
    scanf("%d %d",&c,&d);
    if (minimum(c,d)==0)
        printf("minimum is %d",c);
    else   printf("minimum is %d",d);

}
