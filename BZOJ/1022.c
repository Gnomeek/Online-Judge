#include<stdio.h>
int main(void)
{
    char a,b;
    int i,j;
    a='a';
    b='z';
    for(i=0;i<26;i++)
    {
        printf("%c",a+i);
        if(a+i=='m')
            printf("\n");
    }
    printf("\n");
    for(j=0;j<26;j++)
    {
        printf("%c",b-j);
        if(b-j=='n')
            printf("\n");
    }
    return 0;
}
