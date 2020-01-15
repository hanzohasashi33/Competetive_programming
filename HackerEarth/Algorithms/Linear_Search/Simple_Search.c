// Write your code here
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;
    int arr[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(i = 0;i < n;i++)
    {
        if(arr[i] == x)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
