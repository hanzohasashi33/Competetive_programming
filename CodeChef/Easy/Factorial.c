#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    long long int n;
    scanf("%lld",&n);
    long long int i = 0;
    long long int zeroes = 0;
    long long int x = 5;
    for(i = 0;i < 100;i++)
    {
      if(x > n)
      {
        break;
      }
      else 
      {
        zeroes += n/x;
        x = x * 5;
      }
    }
    printf("%lld\n",zeroes);
    test --;
  }
  return 0;
}
