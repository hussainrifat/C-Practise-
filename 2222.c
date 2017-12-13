#include <stdio.h>
int main()
{
  int n,i=1,sum,m,j;

  scanf("%d",&m);
  for (j=1,sum=0;j<=m;j++)
  {
  scanf("%d",&n);
  while(i<n)
    {
      if(n%i==0)
           sum=sum+i;
          i++;}

  if(sum==n)
  {
      printf("Case  %d: %d is perfect\n",j,n);
  }
  else
      printf("Case  %d: %d isn't perfect\n");
  }
  return 0;
}

