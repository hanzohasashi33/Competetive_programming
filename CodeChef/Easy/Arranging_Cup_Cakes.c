#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
  long int test;
  scanf("%ld",&test);
  while(test > 0)
  {
    long int n;
    scanf("%ld",&n);
    long int i = 0;
    for(i = sqrt(n);i >= 1;i--)
    {
      if(n % i == 0)
      {
        printf("%ld\n",n/i - i);
        break;
      }
    }
    test -= 1;
  }
  return 0;
}
