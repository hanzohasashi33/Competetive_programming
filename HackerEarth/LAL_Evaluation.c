#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int count = 0;
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n - 1;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            if(arr[i] + arr[j] == k)
            {
                count += 1;
            }
        }
    }
    printf("%d",count);
    return 0;
}
