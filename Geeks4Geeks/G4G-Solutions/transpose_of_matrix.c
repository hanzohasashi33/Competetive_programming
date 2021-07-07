// https://practice.geeksforgeeks.org/problems/transpose-of-matrix/0

#include <stdio.h>

void print_transpose(int arr[20][20], int n)
{
    int i,j;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i][j]);
        }
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
	    int arr[20][20];
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            scanf("%d ",&arr[i][j]);
	        }
	    }
	    print_transpose(arr,n);
	}
	return 0;
}
