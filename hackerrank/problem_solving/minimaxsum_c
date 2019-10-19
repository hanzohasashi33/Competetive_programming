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
    long arr[5];
    long sum = 0;
    long i;
    for(i = 0;i < 5;i++)
    {
        scanf("%ld",&arr[i]);
        sum += arr[i];
    }
    long max_sum = 0;
    long min_sum = 0;
    long max = arr[0];
    long min = arr[0];
    for(i = 0;i < 5;i++)
    {
        if(arr[i] >= max)
        {
            max = arr[i];
        }
        if(arr[i] <= min)
        {
            min = arr[i];
        }
    }
    max_sum = sum - min;
    min_sum = sum - max;
    printf("%ld %ld",min_sum,max_sum);
    return 0;

}
