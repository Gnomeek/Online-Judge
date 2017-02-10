#include<stdio.h>

void swap(int *a, int *b);
int main(void)
{
    int n,i,j;
    int arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
    printf("%d %d",arr[0],arr[n-1]);
    return 0;
}

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b =  c;
}
