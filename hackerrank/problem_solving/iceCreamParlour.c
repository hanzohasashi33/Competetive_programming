#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t > 0)
    {
        long m;
        long n;
        scanf("%ld",&m);
        scanf("%ld",&n);
        long cost[n];
        int i = 0;
        for(i = 0;i < n;i++)
        {
            scanf("%ld",&cost[i]);
        }
        long new_arr[2];
        int k = 0;
        int j = 0;
        for(i = 0;i < n;i++)
        {
            for(j = i + 1;j < n;j++)
            {
                if(cost[i] + cost[j] == m)
                {
                    new_arr[k++] = i + 1;
                    new_arr[k++] = j + 1; 
                    break;
                }
            }
        }
        for(i = 0;i < 2;i++)
        {
            printf("%ld ",new_arr[i]);
        }
        t--;
        printf("\n");
    }
    return 0;
}
