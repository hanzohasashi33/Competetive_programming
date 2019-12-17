#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n ;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&b[i]);
    }
    int add[n + 1];
    int carry = 0;
    int j = 0;
    for(j = n - 1;j >= 0;j--)
    {
        add[j + 1] = (a[j] + b[j] + carry)%2;
        carry = (a[j] + b[j] + carry)/2;
    }
    add[0] = carry;
    for(int k = 0;k < n + 1;k++)
    {
        printf("%d",add[k]);
    }
    return 0;
}
