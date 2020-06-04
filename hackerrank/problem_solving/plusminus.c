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
    float count_positive = 0,count_negative = 0,count_zero = 0;
    scanf("%d",&n);
    int i;
    int arr[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i = 0;i < n;i++)
    {
        if(arr[i] > 0)
        {
            count_positive++;//If the number in the array is positive increase the value of countpositive//
        }
        else if(arr[i] < 0)
        {
            count_negative++;//If the number in the array is negative increase the value of countnegative//
        }
        else
        {
            count_zero++;//If the number in the array is zero increase the value of countzero//
        }
    }
    printf("%f\n%f\n%f\n",count_positive/n,count_negative/n,count_zero/n);
    return 0;
}
