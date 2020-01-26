#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int count = 0;
    char *str = (char *)malloc(sizeof(char) * 100000);
    scanf("%s",str);
    char ptn1[] = "101";
    char ptn2[] = "010";
    int i,j;
    for(i = 0;i < strlen(str);i++)
    {
      for(j = 0;j < 3;j++)
      {
        if(str[i + j] != ptn1[j])
        {
          break;
        }
      }
      if(j == 3)
      {
        count ++;
        break;
      }
    }
    for(i = 0;i < strlen(str);i++)
    {
      for(j = 0;j < 3;j++)
      {
        if(str[i + j] != ptn2[j])
        {
          break;
        }
      }
      if(j == 3)
      {
        count ++;
        break;
      }
    }
    if(count > 0)
    {
      printf("Good\n");
    }
    else 
    {
      printf("Bad\n");
    }
    test --;
  }
  return 0;
}
