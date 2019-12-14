#include <stdio.h>
#include <stdlib.h>

int minimum(int apples,int oranges)
{
  if (apples > oranges)
  {
    return oranges ;
  }
  else 
  {
    return apples ;
  }
}



int maximum (int apples,int oranges)
{
  if(apples > oranges)
  {
    return apples ;
  }
  else 
  {
    return oranges ;
  }
}



int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int apples,oranges,gold ;
    scanf("%d %d %d",&apples,&oranges,&gold);
    if(minimum(apples, oranges) + gold >= maximum(apples, oranges))
    {
      printf("0");
    }
    else 
    {
      printf("%d",maximum(apples, oranges) - minimum(apples, oranges) - gold);
    }
    test --;
    printf("\n");
  }
  return 0;
}
