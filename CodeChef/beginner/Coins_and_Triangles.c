#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i = 0;i <= n;i++)
    {
      sum = i * (i + 1)/2;
      if(sum > n)
      {
        printf("%d",i - 1);
        break ;
      }
    }
    printf("\n");
    test --;
  }
  return 0;
}
