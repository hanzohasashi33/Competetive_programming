#include <stdio.h>
#include <stdlib.h>


int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int i,j;
    long long int rectangles = 0;
    for(i = 1;i <= n;i++)
    {
        for(j = i;j <= n;j++)
        {
            if(i * j <= n) rectangles ++;
        }
    }
    printf("%lld\n",rectangles);
    return 0;
}
