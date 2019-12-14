#include<stdio.h>
#include<stdlib.h>

int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int attempts;
    scanf("%d",&attempts);
    int sum = 0;
    int q[attempts];
    int scores[attempts];
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;
    int max4 = 0;
    int max5 = 0;
    int max6 = 0;
    int max7 = 0;
    int max8 = 0;
    int i = 0;
    for(i = 0;i < attempts;i++)
    {
      scanf("%d%d",&q[i],&scores[i]);
      
      if(q[i] == 1)
      {
        if(scores[i] > max1)
        {
          max1 = scores[i];
        }
      }
      else if(q[i] == 2)
      {
        if(scores[i] > max2)
        {
          max2 = scores[i];
        }
      }
      else if(q[i] == 3)
      {
        if(scores[i] > max3)
        {
          max3 = scores[i];
        }
      }
      else if(q[i] == 4)
      {
        if(scores[i] > max4)
        {
          max4 = scores[i];
        }
      }
      else if(q[i] == 5)
      {
        if(scores[i] > max5)
        {
          max5 = scores[i];
        }
      }
      else if(q[i] == 6)
      {
        if(scores[i] > max6)
        {
          max6 = scores[i];
        }
      }
      else if(q[i] == 7)
      {
        if(scores[i] > max7)
        {
          max7 = scores[i];
        }
      }
      else if(q[i] == 8)
      {
        if(scores[i] > max8)
        {
          max8 = scores[i];
        }
      }
      else 
      {
        sum += 0;
      }
    }
    sum = max1 + max2 + max3 + max4 + max5 + max6 + max7 + max8;
    printf("%d\n",sum);
    test --;  
  }
  return 0;
}
