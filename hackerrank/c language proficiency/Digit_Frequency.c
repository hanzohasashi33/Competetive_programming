#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[1000];
  scanf("%s",str);
  int i = 0;
  int count_0 = 0;
  int count_1 = 0;
  int count_2 = 0;
  int count_3 = 0;
  int count_4 = 0;
  int count_5 = 0;
  int count_6 = 0;
  int count_7 = 0;
  int count_8 = 0;
  int count_9 = 0;
  for(i = 0;i < strlen(str);i++)
  {
    if(str[i] == '0')
    {
      count_0 ++;
    }
    if(str[i] == '1')
    {
      count_1 ++;
    }
    if(str[i] == '2')
    {
      count_2 ++;
    }
    if(str[i] == '3')
    {
      count_3 ++;
    }
    if(str[i] == '4')
    {
      count_4 ++;
    }
    if(str[i] == '5')
    {
      count_5 ++;
    }
    if(str[i] == '6')
    {
      count_6 ++;
    }
    if(str[i] == '7')
    {
      count_7 ++;
    }
    if(str[i] == '8')
    {
      count_8 ++;
    }
    if(str[i] == '9')
    {
      count_9 ++;
    }
  }
  printf("%d %d %d %d %d %d %d %d %d %d",count_0,count_1,count_2,count_3,count_4,count_5,count_6,count_7,count_8,count_9);
  return 0;
}
