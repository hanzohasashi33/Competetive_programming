// https://practice.geeksforgeeks.org/problems/who-will-win/0


#include<stdlib.h>
int bSearch(int* arr, int left, int right, int key)
{while(left<=right)
    {
        int mid = (left + right)/2;
        if(arr[mid]==key)
        {
            return 1;
        }
        else if(arr[mid]>key)
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
        //return -1;
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
        scanf("%d %d",&n,&k);
        int i;
        int* arr = (int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        printf("%d\n",bSearch(arr,0,n-1,k));
        free(arr);
        
    }
    return 0;
}
