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
    int n,k;
    scanf("%d %d",&n,&k);
    int div[n];
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&div[i]);
    }
    int j;
    int sum = 0;
    int count = 0;
    for(i = 0;i < n;i++)
    {
        for(j = i + 1;j < n;j++)
        {
            sum = div[i] + div[j];
            if(sum % k==0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
