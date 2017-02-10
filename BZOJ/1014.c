#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a>b&&b>c)
            printf("%d %d %d\n",a,b,c);
        if(a>b&&b<c&&a>c)
            printf("%d %d %d\n",a,c,b);
        if(a>b&&b<c&&c>a)
            printf("%d %d %d\n",c,a,b);
        if(b>a&&a>c)
            printf("%d %d %d\n",b,a,c);
        if(b>a&&a<c&&b>c)
            printf("%d %d %d\n",b,c,a);
        if(b>a&&a<c&&b<c)
            printf("%d %d %d\n",c,b,a);
    }
    return 0;
}

