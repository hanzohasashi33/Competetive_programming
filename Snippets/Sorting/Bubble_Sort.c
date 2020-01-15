#include <stdio.h>
#include <stdlib.h>



void swap(int *a,int *b)
{
    int t =  *a;
    *a = *b;
    *b = t;
}




int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i = 0,j = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0;i < n - 1;i++)
    {
        for(j = 0;j < n- i - 1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
