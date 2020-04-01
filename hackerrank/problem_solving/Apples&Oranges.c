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
    int s,t;
    scanf("%d %d",&s,&t);
    int a,b;
    scanf("%d %d",&a,&b);
    int m,n;
    scanf("%d %d",&m,&n);
    int apples[m],oranges[n];
    int i,j;
    int count_apples = 0 ,count_oranges = 0;
    for(i = 0;i < m;i++)
    {
        scanf("%d ",&apples[i]);
        apples[i] = a + apples[i];
        if(apples[i] >= s && apples[i] <= t )
        {
            count_apples++;
        }
    }
    for(j = 0;j < n;j++)
    {
        scanf("%d ",&oranges[j]);
        oranges[j] = b + oranges[j];
        if(oranges[j] >= s && oranges[j] <= t)
        {
            count_oranges++;
        }
    }
    
    printf("%d",count_apples);
    printf("\n");
    printf("%d",count_oranges);
    return 0;

}
