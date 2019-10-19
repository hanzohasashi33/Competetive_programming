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
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    int count_max = 0;
    int count_min = 0;
    for(i = 0;i < n;i++)
    {
        if(arr[i] > max)
        {
            count_max++;
            max = arr[i];
        }
        if(arr[i] < min)
        {
            count_min++;
            min = arr[i];
        }
    }
    printf("%d %d",count_max,count_min);
    return 0;
}
