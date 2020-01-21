// Write your code here
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int count;
    scanf("%d%d",&n,&count);
    int i,j,temp,minimum;
    int arr[i];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < count;i++)
    {
        minimum = i;
        for(j = i+1;j < n;j++)
        {
            if(arr[minimum] > arr[j])
            {
                minimum = j;
            }
        }
        if(minimum != i)
        {
            temp = arr[minimum];
            arr[minimum] = arr[j];
            arr[j] = temp;
        }
    }
    for(i = 0;i < n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
