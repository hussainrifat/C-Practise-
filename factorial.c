#include <stdio.h>
double factorial (int n)
{
    if(n==1 ||n==0)
    {
        return 1;
    }
    else
        return(n*factorial(n-1));

}
int main ()
{
double fact;
int n;
scanf("%d",&n);
fact=factorial(n);
printf("%f",fact);
}
