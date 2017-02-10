#include <stdio.h>

int N;
int calc(int n)
{
 int i, res = 0;//1 和自身

 if(n == 1)return 1;

 for(i = 1; i*i <= n; i++)
  if(n%i == 0)
  {
    res=res+i+n/i;
    if(i*i==n)
        res=res-i;
  }
 return res;
}
int main(void)
{
  scanf("%d", &N);
  printf("%d", calc(N));
  return 0;
}

