#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int test;
  scanf("%d",&test);
  while (test > 0)
  {
    int n;
    scanf("%d",&n);
    int pt[n][2];
    int count = 0;
    for(int i = 0;i < n;i++)
    {
        scanf("%d%d",&pt[i][0],&pt[i][1]);
    }
    for(int i = 0;i < n - 1;i++)
    {
      for(int j = i + 1;j < n;j++)
      {
        if(pt[i][0] != pt[j][0] && pt[i][1] != pt[j][1])
        {
          count ++;
        }
      }
    }
    printf("%d\n",count);
    test --;
  }
  return 0;
}
