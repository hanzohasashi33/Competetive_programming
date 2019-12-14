#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x2 - x1 >= 1 && y2 - y1 == 0)
    {
      printf("right");
    }
    else if(x1 - x2 >= 1 && y2 - y1 == 0)
    {
      printf("left");
    }
    else if(y2 - y1 >= 1 && x2 - x1 == 0)
    {
      printf("up");
    }
    else if(y1 - y2 >= 1 && x2 - x1 == 0)
    {
      printf("down");
    }
    else 
    {
      printf("sad");
    }
    printf("\n");
    test --;
  }
  return 0;
}
