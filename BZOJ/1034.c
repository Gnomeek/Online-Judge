#include <stdio.h>

int N;
int calc(int n)
{
 int i, res = 2;//1 和自身

 if(n == 1)return 1;

 for(i = 2; i*i <= n; i++)
  if(n%i == 0)
  {
   if(n == i*i)res+=1;
   else res+=2;
  }
 return res;
}
int main(void)
{
  scanf("%d", &N);
  printf("%d", calc(N));
  return 0;
}
