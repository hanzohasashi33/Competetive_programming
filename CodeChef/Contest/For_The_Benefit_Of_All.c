#include <stdio.h>
#include <stdlib.h>

int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n;
    int count = 0;
    scanf("%d",&n);
    double arr[n];
    for(int i = 0;i < n;i++)
    {
      scanf("%lf",&arr[i]);
    }
    for(int i = 0;i < n;i++)
    {
      for(int j = i + 1;j < n;j++)
      {
        if(arr[i] >= arr[j]/2.0 && arr[j] >= arr[i]/2.0)
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
