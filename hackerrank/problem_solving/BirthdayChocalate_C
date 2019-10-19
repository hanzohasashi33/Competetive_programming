#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,j;
    for(i = 0;i < n;i++)
    {
      scanf("%d ",&arr[i]);
    }
    int d,m;
    int sum = 0;
    int count = 0;
    scanf("%d %d",&d,&m);
    for(i = 0;i <= n-m;i++)
    {
      for(j = i;j < m+i;j++)
      {
        sum += arr[j];        
      }
      if(sum == d)
      {
        count++;
      }
      sum = 0;
    }
    printf("%d",count);
    return 0;
}
