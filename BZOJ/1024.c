#include<stdio.h>

int main(void)
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(((i%3==2)&&(i%5==3)&&(i%7==2))==1)
            count++;
    }
    printf("%d",count);
    return 0;
}
