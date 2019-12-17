#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int j = 0;
    for(;j < n;j++)
    {
        if(arr[j] == x)
        {
            printf("%d",j);
            break;
        }
    }
    if(j > n)
    {
        printf("nil");
    }
    return 0;
}
