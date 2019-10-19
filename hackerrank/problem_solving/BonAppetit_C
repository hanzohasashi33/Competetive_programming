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
    int n,k;
    scanf("%d %d",&n,&k);
    int bill[n];
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&bill[i]);
    }
    int amt;
    scanf("%d",&amt);
    int sum = 0;
    for(i = 0;i < n;i++)
    {
        sum += bill[i];
    }
    sum = sum - bill[k];
    sum = sum/2;
    if(sum != amt)
    {
        printf("%d",abs(sum - amt));
    }
    else
    {
        printf("Bon Appetit");
    }
    return 0;
}
