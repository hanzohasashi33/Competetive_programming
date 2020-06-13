#include <assert.h>
#include <ctype.h>
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
    int a[3],b[3];
    int i,j;
    int a_point = 0,b_point = 0;
    int  n = 3;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j = 0;j < n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i = 0;i < 3;i++)
    {
        if(a[i] > b[i])
        {
            a_point++;
        }
        if(a[i] < b[i])
        {
            b_point++;
        }
    }
    printf("%d %d",a_point,b_point);
    return 0;
}
//unnecessary inculsion of libraries that increases the run time of the code 
//optimised haad the code been in cpp
