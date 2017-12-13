#include <stdio.h>
main (void)
{
    int mid_mrk[5]={23,23,12,15,16},final_mrk[5]={70,56,67,45,67},total_marks[5],i,mark,count,below=0;


    for (i=0;i<5;i++)
    {
        total_marks[i]=mid_mrk[i]+final_mrk[i];
    }

    for (mark=50;mark<100;mark++)
    {
        count=0;

       for (i=0;i<5;i++)
      {
        if(total_marks[i]==mark)
        {
            count++;
        }

        else
        {
            below++;
        }
      }
    }
    printf("50 Up marks Student Number is %d\n",count);
printf("50 Below marks Student Number is %d\n",below);
}
