#include <stdio.h>
int main ()
{
    char ch[10];
    ch[0]='B';
    ch[1]='A';
    ch[2]='N';
    ch[3]='G';
    ch[4]='L';
    ch[5]='A';
    ch[6]='D';
    ch[7]='E';
    ch[8]='S';
    ch[8]='H';
    printf("%s",ch);
    //if i use %s and ch instead %c then it will be error
    //if i use %c,ch then it will be print nothing
    //if i use %s,ch then it will print whole input
    return 0;
}
