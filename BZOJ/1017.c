#include<stdio.h>

int main(void)
{
    int i,j,t;
    int arr[3];
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        for(i=0;i<3;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(arr[i]<arr[j])
                {
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
            }
        }
        a=arr[0];
        b=arr[1];
        c=arr[2];
        if((a-b)==1&&(b-c)==1)
            printf("TRUE\n");
        else
            printf("FALSE\n");
    }
    return 0;
}
