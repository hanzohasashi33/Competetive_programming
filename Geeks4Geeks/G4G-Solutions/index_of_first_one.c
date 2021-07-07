// https://practice.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s/0


#include <stdio.h>
#include<stdlib.h>

int return1(int* arr, int low, int high)
{  
    int result = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==1&&arr[mid-1]==0)
        {
            result = mid;
            return result;
        }
        else if(arr[mid]==1&&arr[mid-1]==1)
        {
            result = mid;
            high = mid-1;
        }
        else 
        {
            low = mid+1;
        }
    }
    return result;
    
}
int main() {
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
	    printf("%d\n",return1(arr,0,n-1));
	    free(arr);
	}
	return 0;
}
