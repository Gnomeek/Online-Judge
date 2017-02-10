#include<stdio.h>

int main(void)
{
    int a,b,c;
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        a=t/100;
        b=t%100/10;
        c=t%10;
        if(a>=b&&b>=c)
        {
            printf("%d\n",100*a+10*b+c);
            continue;
        }
        if(a>=b&&b<=c&&a>=c)
        {

            printf("%d\n",100*a+10*c+b);
            continue;
        }
        if(a>=b&&b<=c&&c>=a)
        {
            printf("%d\n",100*c+10*a+b);
            continue;
        }
        if(b>=a&&a>=c)
        {
            printf("%d\n",100*b+10*a+c);
            continue;
        }
        if(b>=a&&a<=c&&b>=c)
        {
            printf("%d\n",100*b+10*c+a);
            continue;
        }
        if(b>=a&&a<=c&&b<=c)
        {
            printf("%d\n",100*c+10*b+a);
            continue;
        }
    }
    return 0;
}
