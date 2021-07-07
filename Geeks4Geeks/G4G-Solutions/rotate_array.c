// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0


#include<stdio.h>
int main() {
    int test;
    scanf("%d",&test);
	int j;
	for(j=0;j<test;j++)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int* arr = (int*)calloc(n,sizeof(int));
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int test = k%n;
	    for(i=test;i<n;i++)
	    {
	        printf("%d ",arr[i]);
	    }
	    for(i=0;i<test;i++)
	    {
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	    free(arr);
	}
	
	
	
	return 0;
}
