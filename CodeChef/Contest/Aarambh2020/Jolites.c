#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int test;
  scanf("%d",&test);
  char ptn[] = "JGEC";
  while(test > 0)
  {
    int n;
    int count = 0;
    scanf("%d",&n);
    int i = 0,j = 0;
    char txt[n];
    scanf("%s",txt);
    for(i = 0;i < n - 4 + 1;i++)
    {
      for(j = 0;j < 4;j++)
      {
        if(txt[i + j] != ptn[j])
        {
          break;
        }
      }
      if(j == 4)
      {
        count ++;
      }
    }
    printf("%d\n",count);
    test --;
  }
  return 0;
}
