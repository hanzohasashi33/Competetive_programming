#include <stdio.h>
#include <stdlib.h>


int main()
{
  long int n;
  scanf("%ld",&n);
  long int i;
  long int arr[n];
  long int sum = 0;
  for(i = 0;i < n;i++)
  {
    scanf("%ld",&arr[i]);
    sum += arr[i];
  }
  long int reqsum = (n * (n + 1))/2; 
  if(sum == reqsum)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}
