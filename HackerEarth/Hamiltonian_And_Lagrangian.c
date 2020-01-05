// Write your code here
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int i = 0;
    int arr[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j = 0;
    int count = 0;
    for(i = 0;i < n;i++)
    {
        count = 0;
        for(j = i + 1;j < n;j++)
        {
            if(arr[i] >= arr[j])
            {
                count ++;
            }
            else 
            {
                break;
            }
        }
        if (count == n - i - 1)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
