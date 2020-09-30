// https://practice.geeksforgeeks.org/problems/binary-array-sorting/0


#include <stdio.h>
#include<stdlib.h>


void sortBinaryArray(int* arr, int n)
{
    int count_0 = 0;
    int i;
    for(int i=0;i<n;i++)
    {
        if(!arr[i])
        {
            count_0++;
        }
    }
    int count_1 = n - count_0;
    int j;
    for(j=0;j<count_0;j++)
    {
        printf("0 ");
    }
    for(j=0;j<count_1;j++)
    {
        printf("1 ");
    }
    printf("\n");
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
	    sortBinaryArray(arr,n);
	    free(arr);
	}
	return 0;
}
