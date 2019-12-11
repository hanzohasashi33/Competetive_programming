#include <stdio.h>
#include <stdlib.h>

int min(int arr[],int n)
{
  int mini = arr[0];
  for(int i = 0;i < n;i++)
  {
    if(arr[i] <= mini)
    {
      mini = arr[i];
    }
  }
  return mini;
}

int second_min(int arr[],int n)
{
  int secmin = 10000000;
  for(int i = 0;i < n;i++)
  {
    if(arr[i] > min(arr,n) && arr[i] <= secmin)
    {
      secmin = arr[i];
    }
  }
  return secmin;
}

int main()
{
  int test;
  scanf("%d",&test);
  while( test > 0 )
  {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("%d\n",min(arr,n) + second_min(arr, n));
    test --;
  }
  return 0;
}
