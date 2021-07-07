// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0/


#include<stdio.h>
#include<stdlib.h>

int searchArray(int* arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        // Is right half sorted?
        if(arr[mid]<=arr[high])
        {
            // Does k belong here?
            if(arr[mid]<=k&&k<=arr[high])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        // Left half must be sorted if above condition fails
        else
        {
            // Does k belong here?
            if(arr[low]<=k&&k<=arr[mid])
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d",&n);
        int* arr = (int*)calloc(n,sizeof(int));
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        scanf("%d",&k);
        printf("%d\n",searchArray(arr,n,k));
        free(arr);
    }
    return 0;
}
