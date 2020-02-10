#include <stdio.h>
#include <stdlib.h>

int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n;
    scanf("%d",&n);
    int a,b;
    int ans = 1;
    scanf("%d %d",&a,&b);
    for(int i = 2;i < n + 1;i++)
    {
      scanf("%d %d",&a,&b);
      ans ^= i;
    }
    printf("%d\n",ans);
    test --;
  }
  return 0;
}
