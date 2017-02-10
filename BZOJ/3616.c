#include<stdio.h>
#define pi 3.14

int main(void)
{
    float r,h;
    scanf("%f %f",&r,&h);
    printf("%.2f",pi*r*r*2+pi*2*r*h);
    return 0;
}
