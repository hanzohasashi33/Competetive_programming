#include <stdio.h>
#include <stdlib.h>


int sum(int n)
{
  return n * (n + 1)/2;
}

int main()
{
  int test;
  scanf("%d",&test);
  while ( test > 0 )
  {
    int n,k;
    scanf("%d %d",&k,&n);
    for(int i = 0;i < k;i++)
    {
      n = sum(n);
    }
    printf("%d\n",n);
    test --;
  }
  return 0;
}
