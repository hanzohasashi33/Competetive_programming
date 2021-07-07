// https://practice.geeksforgeeks.org/problems/repetitive-addition-of-digits/0

// https://harikad.wordpress.com/2019/12/17/sum-the-digits-recursively-till-you-love-math/



#include <stdio.h>

int recursiveSum(int n)
{
    return n%9? n%9:9;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",recursiveSum(n));
    }
    return 0;
}
