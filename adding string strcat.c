#include <stdio.h>
#include<string.h>
int main ()

{
    char a[50] = "Bangla";
    char b[50] = "Desh";
    strcat(a,b);
    printf("%s - length is %d",a);
    return 0;
}
