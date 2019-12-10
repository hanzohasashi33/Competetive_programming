#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int noofnotes(int n)
{
  int notes = 0;
  if (n >= 100)
  {
    notes += n/100;
    n = n - (n/100 * 100);
  }
  
  if (n >= 50)
  {
    notes += n/50;
    n = n - (n/50 * 50);
  }

  if(n >= 10)
  {
    notes += n/10;
    n = n - (n/10 * 10);
  }

  if(n >= 5)
  {
    notes += n/5;
    n -= (n/5 * 5);
  }

  if(n >= 2)
  {
    notes += n/2;
    n -= (n/2 *2);
  }

  if(n >= 1)
  {
    notes += n/1;
    n -= (n/1 * 1);
  }

  return notes;
}


int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n;
    scanf("%d",&n);
    printf("%d\n",noofnotes(n));
    test --;
  }
  return 0;
}
