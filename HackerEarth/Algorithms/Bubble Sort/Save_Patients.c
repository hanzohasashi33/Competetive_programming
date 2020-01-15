// Write your code here
#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[],int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n-i-2;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;
    int dis[n];
    int vax[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d",&dis[i]);
    }
    for(i = 0;i < n;i++)
    {
        scanf("%d",&vax[i]);
    }
    bubblesort(dis,n);
    bubblesort(vax,n);
    int count = 0;
    for(i = 0;i < n;i++)
    {
        if(dis[i] > vax[i])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("No");
    }
    else 
    {
        printf("Yes");
    }
    /*
    for(i = 0;i < n;i++)
    {
        printf("%d ",dis[i]);
    }*/
    return 0;
}
