#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int maxtimes(int a,int b)
{
  return a + b;
}

int mintimes(int a,int b)
{
  if(a > b)
  {
    return a;
  }
  else 
  {
    return b;
  }
}


int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int a,b;
    scanf("%d %d",&a,&b);
    {
      printf("%d %d\n",mintimes(a, b),maxtimes(a, b));
    }
    test --;
  }
  return 0;
}
