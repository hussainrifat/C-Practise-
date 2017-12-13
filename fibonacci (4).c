#include<stdio.h>
#include<conio.h>
void main()
{
int pt,ct,nt,n,i,sum;
clrscr();
printf("Enter number of terms of fibonacci series ");
scanf("%d",&n);
pt=0;
ct=1;
sum=1;
for(i=1;i<=n-2;i++)
{
 nt=pt+ct;
 sum=sum+nt;
 pt=ct;
 ct=nt;
}
printf("\nSum of %d terms of Fibonacci series =  %d",n,sum);
getch();
}
