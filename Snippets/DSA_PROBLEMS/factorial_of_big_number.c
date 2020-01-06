#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int mul(int size,int res[],int x)
{
    int carry = 0;
    int prod;
    for(int j = 0;j < size;j++)
    {
        prod = res[j] * x + carry;
        res[j] = prod % 10;
        carry = prod/10;
    }

    while(carry)
    {
        res[size]  = carry % 10;
        carry = carry/10;
        size ++;
    }
    return (size);
}


void fact(int n)
{
    int i,size;
    int res[200];
    res[0] = 1;
    size = 1;
    for(i = 2;i <= n;i++)
    {
        size = mul(size,res,i);
    }

    for(i = size - 1;i >= 0;i--)
    {
        printf("%d",res[i]);
    }
}





int main()
{
    int n;
    scanf("%d",&n);
    fact(n);
    return 0;
}
