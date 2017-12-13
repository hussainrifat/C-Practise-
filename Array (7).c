#include <stdio.h>
void main ()
{
    int ct_marks[20]={10,6,7,8,4,5,6,8,5,6,4,5,6,7,8,9,7,5,6,7};
    int mid_marks[20]={20,30,40,20,40,50,30,40,39,49,38,49,37,37,47,37,37,46,47,37};
    int final_marks[20]={89,90,67,78,98,76,67,98,67,88,99,76,56,87,99,45,66,76,87,34};
    int i,total_marks[40],count=0,mark;

    for (i=0;i<20;i++)
    {
        total_marks[i]=ct_marks[i]+mid_marks[i]+final_marks[i];

    }

    for (mark=50;mark<150;mark++)
    {
        for (i=0;i<20;i++)
        { if
            (total_marks[i]==mark)
        {
              count++;
        }
        }

    }
      printf("50 up student Number is %d\n",count);
    for (i=0;i<20;i++)
    {
         printf("Roll: %d\tTotal Marks: %d\n",i,total_marks[i-1]);
    }

}
