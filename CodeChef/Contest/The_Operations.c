#include <stdio.h>
#include <stdlib.h>

int myXOR(int x, int y) 
{ 
   return (x | y) & (~x | ~y); 
} 

int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int max = 0;
        for(int i = 0;i < n;i++)
        {
            for(int j = i+1;j < n;j++)
            {
                int t = myXOR(arr[i],arr[j]);
                if(t > max)
                {
                    max = t;
                }
            }
        }
        printf("%d\n",max);
        test --;
    }
    return 0;
}
