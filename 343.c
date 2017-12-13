#include<stdio.h>

int main()
{
    int num, sum = 0, count = 1;
    printf("Enter A Number:\t");
    scanf("%d", &num);
    while(count < num)
    {
        if(num%count == 0)
        {
            sum = sum + count;
        }
        count++;
    }
    if(sum == num)
        printf("%d is a Perfect Number", num);
    else
        printf("%d is not a Perfect Integer", num);
    printf("\n");
    return 0;
}
