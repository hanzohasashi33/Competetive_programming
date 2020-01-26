#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j;
    for(i = n;i <=m ;i++)
    {
      int count = 0;
      for(j = 2;j <= sqrt(i);j++)
      {
        if(i%j == 0)
        {
          count ++;
          break;
        }
      }
      if(count == 0 && i != 1)
      {
        printf("%d\n",i);
      }
    }
    test --;
  }
  return 0;
}
