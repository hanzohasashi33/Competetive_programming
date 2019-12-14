#include<stdio.h>
#include<stdlib.h>


int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int n,x,y;
        int pol[100];
        for(int j = 0;j < 100;j++)
        {
            pol[j] = 1;
        }
        scanf("%d%d%d",&n,&x,&y);
        int arr[n];
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&arr[i]);
            int min = arr[i]-x*y;
            int max = arr[i]+x*y;
            if (min < 1)
            { 
              min = 1;
            }
            if (max>100)
            {
             max=100;
            }
            for(int q = min - 1;q < max;q++)
            {
              pol[q] = 0;
            }
        }

        int cnt = 0;
        for(int k = 0;k < 100;k++)
        {
          cnt += pol[k];
        }
        printf("%d\n",cnt);
        test --;
    }
    return 0;
}
