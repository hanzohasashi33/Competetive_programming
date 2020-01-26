#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    char str[100000];
    long long int n;
    scanf("%lld",&n);
    scanf("%s",str);
    long long int count = 0;
    long long int i = 0;
    for(;i < n;i++)
    {
      if(str[i] == '1')
      {
        count ++;
      }
    }
    long long int num = (count * (count - 1))/2 + count;
    printf("%lld\n",num);
    test --;
  }
  return 0;
}

