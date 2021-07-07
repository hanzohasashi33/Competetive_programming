// https://practice.geeksforgeeks.org/problems/wave-array/0/



#include<stdio.h>
#include<stdlib.h>

void wave_array(int* arr, int n)
{
    if(n%2==0)
    {
        int i;
        for(i=1;i<n;i+=2)
        {
            printf("%d %d ",arr[i],arr[i-1]);
        }
        printf("\n");
    }
    else
    {
        int x = arr[n-1];
        int i;
        for(i=1;i<n-1;i+=2)
        {
            printf("%d %d ",arr[i],arr[i-1]);
        }
        printf("%d\n",x);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int* arr = (int*)calloc(n,sizeof(int));
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        wave_array(arr,n);
        free(arr);
    }
    return 0;
}
