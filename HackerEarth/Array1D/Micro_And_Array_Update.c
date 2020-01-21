// Write your code here
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int find_minimum(int a[], int n) 
{
  int c = 0;
  int min = a[0];
  for (c = 0; c < n; c++)
    if (a[c] <= min)
      min = a[c];

  return min;
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int arr[n];
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int mini = find_minimum(arr,n);
        if(mini > k)
        {
            printf("0\n");
        }
        else 
        {
            printf("%d\n",k - mini);
        }
        test -= 1;
    }
    return 0;
}
