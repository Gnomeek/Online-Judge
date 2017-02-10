#include<stdio.h>

int main(void)
{
    char a;
    int count_num=0,count_up=0,count_down=0;
    scanf("%c",&a);
    while(a!='#')
    {
        if('0'<=a&&a<='9')
            count_num++;
        if('A'<=a&&a<='Z')
            count_up++;
        if('a'<=a&&a<='z')
            count_down++;
        scanf("%c",&a);
    }
    printf("%d %d %d",count_up,count_down,count_num);
    return 0;
}
