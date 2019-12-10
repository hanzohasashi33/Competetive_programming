#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//FIRST TRY
/*
int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n;
    scanf("%d",&n);
    int arr[1];
    int maxi = 0;
    int i = 1;
    for(i = n/2;i <= n;i++)
    {
      if(n % i >= maxi)
      {
        arr[0] = i;
        maxi = n % i ;
      }
    }
    printf("%d",arr[0]);
    test --;
  }
  return 0;
}
*/


int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n;
    scanf("%d",&n);
    printf("%d\n",(n/2)+ 1);
    test --;
  }
  return 0;
}
