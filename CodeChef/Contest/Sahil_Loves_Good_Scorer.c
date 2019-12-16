#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int n) 
{ 
  int sum = 0; 
  for (int i = 0; i < n; i++) 
    sum += arr[i]; 
  return sum; 
} 

int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int m,n;
    scanf("%d%d",&m,&n);
    int c1[m];
    int c2[n];
    for(int i = 0;i < m;i++)
    {
      scanf("%d",&c1[i]);
    }
    for(int i = 0;i < n;i++)
    {
      scanf("%d",&c2[i]);
    }
    if(sum(c1,m) > sum(c2,n))
    {
      printf("C1");
    }
    else 
    {
      printf("C2");
    }
    printf("\n");
    test --;
  }
  return 0;
}
