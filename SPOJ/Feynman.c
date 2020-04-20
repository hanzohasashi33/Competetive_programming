#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


long long int square_sum(long long int n)
{
    long long int sum = 0;
    for(int i = 1;i <= n;i++)
    {
        sum += i*i;
    }
    return sum;
}



int main()
{
    while(true)
    {
        long long int n;
        scanf("%lld",&n);
        if(n == 0) break;
        else printf("%lld\n",square_sum(n));
    }
    return 0;
}
