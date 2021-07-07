// https://practice.geeksforgeeks.org/problems/number-of-occurrence/0

#include<stdlib.h>
int findFirst(int* arr, int low, int high, int key)
{
    int result = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==key)
        {
            result=mid;
            high=mid-1;
        }
        else if(arr[mid]>key)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return result;
}
int findLast(int* arr, int low, int high, int key)
{
    int result = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==key)
        {
            result = mid;
            low = mid+1;
        }
        else if(arr[mid]>key)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return result;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int i;
        int* arr = (int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        if(findFirst(arr,0,n-1,x)==-1)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",findLast(arr,0,n-1,x)-findFirst(arr,0,n-1,x)+1);
        }
        free(arr);
    }
    return 0;
}
